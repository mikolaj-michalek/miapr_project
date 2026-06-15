#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from mbf_msgs.action import GetPath, ExePath
from geometry_msgs.msg import PoseStamped
import time
import subprocess

# ================= KONFIGURACJA EKSPERYMENTU =================
WORLD_NAME = "floor_is_lava"  # Wpisz tu nazwę swojego świata z Gazebo!
ROBOT_NAME = "robot"          # Domyślna nazwa modelu robota

# Pozycja STARTOWA (gdzie robot ma być teleportowany przed każdym testem)
START_X = 0.0
START_Y = 0.0
START_Z = 0.0  # Zawsze daj odrobinę ponad ziemię, żeby robot "spadł" i fizyka chwyciła koła

# Pozycja DOCELOWA (gdzie robot ma dojechać)
GOAL_X = 5.0
GOAL_Y = -7.0
# =============================================================

class MBFBenchmark(Node):
    def __init__(self):
        super().__init__('mbf_benchmark_node')
        self.planner_client = ActionClient(self, GetPath, '/move_base_flex/get_path')
        self.controller_client = ActionClient(self, ExePath, '/move_base_flex/exe_path')

    def reset_robot(self):
        """Teleportuje robota w Gazebo na pozycję startową za pomocą narzędzia CLI"""
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
            self.get_logger().info("Robot pomyślnie zresetowany.")
            
            # ZOPTYMALIZOWANY CZAS OCZEKIWANIA
            time.sleep(1.0)
            
        except Exception as e:
            self.get_logger().error(f"Nie udało się zresetować robota: {e}")

    def run_benchmark(self):
        planners = ['dijkstra_planner', 'astar_planner', 'thetastar_planner', 'cvp_planner']
        
        goal = PoseStamped()
        goal.header.frame_id = 'map'
        goal.pose.position.x = GOAL_X
        goal.pose.position.y = GOAL_Y
        goal.pose.orientation.w = 1.0
        
        self.get_logger().info("Czekam na serwery MBF...")
        self.planner_client.wait_for_server()
        self.controller_client.wait_for_server()
        self.get_logger().info("Gotowe! Rozpoczynamy zautomatyzowane testy.")

        for planner in planners:
            # Automatyczny powrót na start!
            self.reset_robot()
            
            self.get_logger().info(f"--- Testowanie planera: {planner} ---")
            
            # --- FAZA 1: PLANOWANIE ---
            req = GetPath.Goal()
            req.target_pose = goal
            req.planner = planner
            
            # NOWE: Odpinamy planera od fizyki Gazebo i podajemy sztywny start
            req.use_start_pose = True 
            
            start_pose = PoseStamped()
            start_pose.header.frame_id = 'map'
            start_pose.pose.position.x = START_X
            start_pose.pose.position.y = START_Y
            start_pose.pose.orientation.w = 1.0
            req.start_pose = start_pose

            t0 = time.time()
            future = self.planner_client.send_goal_async(req)
            rclpy.spin_until_future_complete(self, future)
            goal_handle = future.result()
            
            if not goal_handle.accepted:
                self.get_logger().error("Cel odrzucony przez planer!")
                continue

            res_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self, res_future)
            path_result = res_future.result().result
            t1 = time.time()

            planning_time = (t1 - t0) * 1000.0
            
            if path_result.outcome != 0:
                self.get_logger().error(f"Planowanie nie powiodło się! Kod błędu: {path_result.outcome}")
                continue
                
            self.get_logger().info(f"-> Czas planowania: {planning_time:.2f} ms")
            self.get_logger().info(f"-> Teoretyczna długość ścieżki: {path_result.cost:.2f} m")

            # --- FAZA 2: JAZDA ---
            exe_req = ExePath.Goal()
            exe_req.path = path_result.path
            exe_req.controller = 'mesh_controller'

            self.get_logger().info("Robot rusza...")
            t2 = time.time()
            exe_future = self.controller_client.send_goal_async(exe_req)
            rclpy.spin_until_future_complete(self, exe_future)
            exe_handle = exe_future.result()
            
            exe_res_future = exe_handle.get_result_async()
            rclpy.spin_until_future_complete(self, exe_res_future)
            t3 = time.time()

            drive_time = t3 - t2
            self.get_logger().info(f"-> Rzeczywisty czas przejazdu: {drive_time:.2f} s")
            self.get_logger().info(f"=== Zakończono test dla {planner} ===\n")
            
            # Pauza, żeby dać systemom ROS 2 chwilę oddechu przed resetem
            time.sleep(1.0)

        self.get_logger().info("Wszystkie testy zakończone sukcesem! Możesz zebrać dane.")

def main():
    rclpy.init()
    node = MBFBenchmark()
    node.run_benchmark()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
