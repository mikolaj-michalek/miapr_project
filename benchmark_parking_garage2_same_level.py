#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from mbf_msgs.action import GetPath
from geometry_msgs.msg import PoseStamped
import time
import subprocess
import csv
import os
import math
import numpy as np

# ================= KONFIGURACJA EKSPERYMENTU =================
WORLD_NAME = "parking_garage"  
ROBOT_NAME = "robot"          
CSV_FILENAME = "benchmark_averages_same_parking_garage.csv" # Zmieniona nazwa pliku

NUM_RUNS = 10 # Liczba powtórzeń planowania dla wyciągnięcia średniej

START_X = 16.0
START_Y = 0.0
START_Z = 18.0  

GOAL_X = 18.0
GOAL_Y = -12.0
GOAL_Z = 18.0
# =============================================================

class MBFBenchmark(Node):
    def __init__(self):
        super().__init__('mbf_benchmark_node')
        # Zostawiamy tylko klienta do planowania
        self.planner_client = ActionClient(self, GetPath, '/move_base_flex/get_path')

    def reset_robot(self):
        """Teleportuje robota w Gazebo na pozycję startową"""
        self.get_logger().info("Teleportacja robota na punkt startowy...")
        req_payload = f'name: "{ROBOT_NAME}", position: {{x: {START_X}, y: {START_Y}, z: {START_Z}}}, orientation: {{w: 1.0}}'
        command = [
            'gz', 'service', '-s', f'/world/{WORLD_NAME}/set_pose',
            '--reqtype', 'gz.msgs.Pose',
            '--reptype', 'gz.msgs.Boolean',
            '--timeout', '2000',
            '--req', req_payload
        ]
        
        try:
            subprocess.run(command, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            time.sleep(1.0) # Czas na stabilizację odometrii
        except Exception as e:
            self.get_logger().error(f"Nie udało się zresetować robota: {e}")

    def calculate_path_curvature(self, path_poses):
        """Oblicza skumulowaną krzywiznę ścieżki (sumę kątów skrętów) w stopniach."""
        if len(path_poses) < 3:
            return 0.0
            
        total_curvature_deg = 0.0
        
        for i in range(1, len(path_poses) - 1):
            p1 = path_poses[i-1].pose.position
            p2 = path_poses[i].pose.position
            p3 = path_poses[i+1].pose.position
            
            # Wektory dwóch sąsiadujących segmentów ścieżki
            v1 = np.array([p2.x - p1.x, p2.y - p1.y, p2.z - p1.z])
            v2 = np.array([p3.x - p2.x, p3.y - p2.y, p3.z - p2.z])
            
            norm_v1 = np.linalg.norm(v1)
            norm_v2 = np.linalg.norm(v2)
            
            # Zapobiegamy dzieleniu przez zero przy bardzo bliskich punktach
            if norm_v1 > 1e-5 and norm_v2 > 1e-5:
                cos_theta = np.dot(v1, v2) / (norm_v1 * norm_v2)
                cos_theta = max(min(cos_theta, 1.0), -1.0) # Zabezpieczenie limitów funkcji arccos
                
                angle_rad = math.acos(cos_theta)
                total_curvature_deg += math.degrees(angle_rad)
                
        return total_curvature_deg

    def save_averages_to_csv(self, simulation_id, planner, valid_runs, avg_time, avg_len, avg_pts, avg_curv, start_pos, goal_pos):
        """Zapisuje uśrednione wyniki do CSV"""
        file_exists = os.path.isfile(CSV_FILENAME)
        with open(CSV_FILENAME, mode='a', newline='') as file:
            writer = csv.writer(file, delimiter=';')
            if not file_exists:
                writer.writerow([
                    'ID_Symulacji', 'Algorytm', 'Start', 'Cel', 'Udane_Iteracje', 
                    'Sredni_Czas_Planowania_ms', 'Srednia_Dlugosc_Sciezki_m', 
                    'Srednia_Liczba_Punktow', 'Srednia_Krzywizna_deg'
                ])
            
            writer.writerow([
                simulation_id, 
                planner, 
                f"{start_pos}", 
                f"{goal_pos}", 
                valid_runs,
                f"{avg_time:.2f}", 
                f"{avg_len:.4f}",
                f"{avg_pts:.1f}",
                f"{avg_curv:.2f}"
            ])
            
        self.get_logger().info(f"[*] Srednie wyniki zapisane do {CSV_FILENAME}")

    def run_benchmark(self):
        planners = ['dijkstra_planner', 'astar_planner', 'thetastar_planner', 'cvp_planner']
        simulation_id = f"test_{int(time.time())}"
        start_str = f"({START_X},{START_Y},{START_Z})"
        goal_str = f"({GOAL_X},{GOAL_Y},{GOAL_Z})"
        
        goal = PoseStamped()
        goal.header.frame_id = 'map'
        goal.pose.position.x = GOAL_X
        goal.pose.position.y = GOAL_Y
        goal.pose.position.z = GOAL_Z
        goal.pose.orientation.w = 1.0
        
        self.get_logger().info("Czekam na serwer planowania MBF...")
        self.planner_client.wait_for_server()
        self.get_logger().info("Gotowe! Rozpoczynamy zautomatyzowane testy wydajnosci (Tylko Planowanie).")

        for planner in planners:
            self.reset_robot() # Resetujemy raz przed serią testów danego algorytmu
            self.get_logger().info(f"\n==================================================")
            self.get_logger().info(f"--- Testowanie planera: {planner} ({NUM_RUNS} iteracji) ---")
            
            metrics_time = []
            metrics_length = []
            metrics_waypoints = []
            metrics_curvature = []

            for i in range(NUM_RUNS):
                req = GetPath.Goal()
                req.target_pose = goal
                req.planner = planner
                req.use_start_pose = True 
                req.tolerance = 0.5  
                
                start_pose = PoseStamped()
                start_pose.header.frame_id = 'map'
                start_pose.pose.position.x = START_X
                start_pose.pose.position.y = START_Y
                start_pose.pose.position.z = START_Z
                start_pose.pose.orientation.w = 1.0
                req.start_pose = start_pose

                t0 = time.time()
                future = self.planner_client.send_goal_async(req)
                rclpy.spin_until_future_complete(self, future)
                goal_handle = future.result()
                
                if not goal_handle.accepted:
                    self.get_logger().error(f"[{i+1}/{NUM_RUNS}] Cel odrzucony!")
                    continue

                res_future = goal_handle.get_result_async()
                rclpy.spin_until_future_complete(self, res_future)
                path_result = res_future.result().result
                t1 = time.time()

                planning_time = (t1 - t0) * 1000.0
                
                if path_result.outcome != 0:
                    self.get_logger().error(f"[{i+1}/{NUM_RUNS}] Blad planowania! Kod: {path_result.outcome}")
                    continue
                    
                # Wyliczanie statystyk dla pojedynczego przebiegu
                path_length = path_result.cost
                waypoints_count = len(path_result.path.poses)
                path_curvature = self.calculate_path_curvature(path_result.path.poses)

                # Zapis do lokalnych list statystycznych
                metrics_time.append(planning_time)
                metrics_length.append(path_length)
                metrics_waypoints.append(waypoints_count)
                metrics_curvature.append(path_curvature)

                self.get_logger().info(f"[{i+1}/{NUM_RUNS}] Sukces! Czas: {planning_time:.2f}ms | Dlugosc: {path_length:.2f}m | Pkt: {waypoints_count}")
                time.sleep(0.1) # Dajemy chwilę węzłom ROS na "oddech" przed kolejnym zapytaniem

            # PODSUMOWANIE I ŚREDNIE DLA DANEGO ALGORYTMU
            valid_runs = len(metrics_time)
            if valid_runs > 0:
                avg_time = np.mean(metrics_time)
                avg_length = np.mean(metrics_length)
                avg_waypoints = np.mean(metrics_waypoints)
                avg_curvature = np.mean(metrics_curvature)

                self.get_logger().info(f"\n--- WYNIKI SREDNIE: {planner} ---")
                self.get_logger().info(f"Sredni Czas: {avg_time:.2f} ms")
                self.get_logger().info(f"Srednia Dlugosc: {avg_length:.2f} m")
                self.get_logger().info(f"Srednia Liczba Pkt: {avg_waypoints:.1f}")
                self.get_logger().info(f"Srednia Krzywizna: {avg_curvature:.2f} st.")

                self.save_averages_to_csv(
                    simulation_id, planner, valid_runs, 
                    avg_time, avg_length, avg_waypoints, avg_curvature, 
                    start_str, goal_str
                )
            else:
                self.get_logger().error(f"Algorytm {planner} nie zaliczyl zadnej udanej proby!")

            time.sleep(1.0)

        self.get_logger().info(f"\nWszystkie testy zakończone! Dane znajdziesz w pliku: {CSV_FILENAME}")

def main():
    rclpy.init()
    node = MBFBenchmark()
    node.run_benchmark()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
