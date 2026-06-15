#ifndef THETASTAR_MESH_PLANNER_H
#define THETASTAR_MESH_PLANNER_H

#include <mbf_mesh_core/mesh_planner.h>
#include <mbf_msgs/action/get_path.hpp>
#include <mesh_map/mesh_map.h>
#include <nav_msgs/msg/path.hpp>
#include <rclcpp/rclcpp.hpp>

namespace thetastar_mesh_planner
{
class ThetaStarMeshPlanner : public mbf_mesh_core::MeshPlanner
{
public:
  typedef std::shared_ptr<thetastar_mesh_planner::ThetaStarMeshPlanner> Ptr;

  ThetaStarMeshPlanner();
  virtual ~ThetaStarMeshPlanner();

  virtual uint32_t makePlan(const geometry_msgs::msg::PoseStamped& start, const geometry_msgs::msg::PoseStamped& goal,
                            double tolerance, std::vector<geometry_msgs::msg::PoseStamped>& plan, double& cost,
                            std::string& message) override;

  virtual bool cancel() override;

  virtual bool initialize(const std::string& plugin_name, const std::shared_ptr<mesh_map::MeshMap>& mesh_map_ptr, const rclcpp::Node::SharedPtr& node) override;

protected:

  // Główna funkcja algorytmu Theta*
  uint32_t runThetaStar(const mesh_map::Vector& start, const mesh_map::Vector& goal,
                        std::list<lvr2::VertexHandle>& vertex_path, std::string& message);

  // Funkcja sprawdzająca czy można "ściąć zakręt" (Line of Sight po powierzchni siatki 3D!)
  bool lineOfSight(lvr2::VertexHandle v1, lvr2::VertexHandle v2);

  rcl_interfaces::msg::SetParametersResult reconfigureCallback(std::vector<rclcpp::Parameter> parameters);

private:
  mesh_map::MeshMap::Ptr mesh_map_;
  std::string name_;
  rclcpp::Node::SharedPtr node_;
  std::atomic_bool cancel_planning_;
  rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_;
  std::string map_frame_;

  // Uchwyt parametrów dynamicznych
  rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr reconfiguration_callback_handle_;
  struct {
    bool publish_vector_field = false;
    bool publish_face_vectors = false;
    double goal_dist_offset = 0.3;
    double cost_limit = 1.0;
    double step_width = 0.4;
  } config_;

  // Struktury danych dla algorytmu Theta* na wierzchołkach siatki
  lvr2::DenseVertexMap<lvr2::VertexHandle> predecessors_;
  lvr2::DenseVertexMap<float> g_score_;

  // Struktura dla wygładzonego pola wektorowego dla kontrolera
  lvr2::DenseVertexMap<mesh_map::Vector> vector_map_;
};

}  // namespace thetastar_mesh_planner

#endif  // THETASTAR_MESH_PLANNER_H