#include <chrono>
#include <lvr2/util/Meap.hpp>
#include <mbf_msgs/action/get_path.hpp>
#include <mesh_map/util.h>
#include <pluginlib/class_list_macros.hpp>
#include <rclcpp/logging.hpp>
#include "cvp_mesh_planner/astar_mesh_planner.h" 

PLUGINLIB_EXPORT_CLASS(astar_mesh_planner::AStarMeshPlanner, mbf_mesh_core::MeshPlanner);

namespace astar_mesh_planner
{

AStarMeshPlanner::AStarMeshPlanner() {}
AStarMeshPlanner::~AStarMeshPlanner() {}

uint32_t AStarMeshPlanner::makePlan(const geometry_msgs::msg::PoseStamped& start, const geometry_msgs::msg::PoseStamped& goal,
                                    double tolerance, std::vector<geometry_msgs::msg::PoseStamped>& plan, double& cost,
                                    std::string& message)
{
  RCLCPP_INFO(node_->get_logger(), "============================================================");
  RCLCPP_INFO(node_->get_logger(), "===> Uruchomiono POPRAWIONY, BEZPIECZNY algorytm A* <===");
  RCLCPP_INFO(node_->get_logger(), "============================================================");

  geometry_msgs::msg::PoseStamped start_in_map, goal_in_map;
  try {
    start_in_map = mesh_map_->transformToMapFrame(start);
    goal_in_map = mesh_map_->transformToMapFrame(goal);
  } catch (tf2::TransformException& ex) {
    RCLCPP_ERROR_STREAM(node_->get_logger(), name_ << ": TF Error: " << ex.what());
    return mbf_msgs::action::GetPath::Result::TF_ERROR;
  }

  mesh_map::Vector start_vec = mesh_map::toVector(start_in_map.pose.position);
  mesh_map::Vector goal_vec = mesh_map::toVector(goal_in_map.pose.position);

  std::list<lvr2::VertexHandle> vertex_path;
  // KLUCZOWE: Szukamy od GOAL do START, aby pole wektorowe było zorientowane do celu!
  const uint32_t outcome = runAStar(goal_vec, start_vec, vertex_path, message); 
  
  if (outcome != mbf_msgs::action::GetPath::Result::SUCCESS) return outcome;

  // Ponieważ szukaliśmy od celu do startu, musimy odwrócić ścieżkę dla robota
  vertex_path.reverse();

  const auto mesh = mesh_map_->mesh();
  std_msgs::msg::Header header;
  header.stamp = node_->now();
  header.frame_id = mesh_map_->mapFrame();
  cost = 0;

  if (!cancel_planning_ && !vertex_path.empty()) {
    std::vector<mesh_map::Vector> path_positions;
    for (auto v : vertex_path) path_positions.push_back(mesh->getVertexPosition(v));

    for (size_t i = 0; i < path_positions.size() - 1; ++i) {
      mesh_map::Vector current_pos = path_positions[i];
      mesh_map::Vector next_pos = path_positions[i + 1];
      
      float dist = current_pos.distance(next_pos);
      if (dist > 1e-4) {
        auto face_opt = mesh_map_->getContainingFace(current_pos, 0.4);
        mesh_map::Normal normal(0, 0, 1);
        if (face_opt) normal = mesh_map_->faceNormals()[face_opt.unwrap()];

        float dir_length;
        geometry_msgs::msg::PoseStamped pose;
        pose.header = header;
        pose.pose = mesh_map::calculatePoseFromPosition(current_pos, next_pos, normal, dir_length);
        cost += dist;
        plan.push_back(pose);
      }
    }
    geometry_msgs::msg::PoseStamped goal_pose;
    goal_pose.header = header;
    goal_pose.pose = goal_in_map.pose;
    plan.push_back(goal_pose);
  }

  // --- KOMPATYBILNE POLA WEKTOROWE (Identyczne z Dijkstrą) ---
  vector_map_.clear();
  for (auto v3 : mesh->vertices()) {
    lvr2::VertexHandle v1 = predecessors_[v3];
    if (v1 == v3) continue;

    const auto& vec3 = mesh->getVertexPosition(v3);
    const auto& vec1 = mesh->getVertexPosition(v1);
    const auto dirVec = vec1 - vec3;
    vector_map_.insert(v3, dirVec.normalized());
  }
  mesh_map_->setVectorMap(vector_map_);

  nav_msgs::msg::Path path_msg;
  path_msg.poses = plan;
  path_msg.header = header;
  path_pub_->publish(path_msg);

  RCLCPP_INFO_STREAM(node_->get_logger(), "A* Wyznaczona dlugosc sciezki: " << cost << "m");
  return mbf_msgs::action::GetPath::Result::SUCCESS;
}

uint32_t AStarMeshPlanner::runAStar(const mesh_map::Vector& start, const mesh_map::Vector& goal,
                                    std::list<lvr2::VertexHandle>& vertex_path, std::string& message)
{
  const auto mesh = mesh_map_->mesh();
  const auto& edge_weights = mesh_map_->edgeWeights();
  const auto& vertex_costs = mesh_map_->vertexCosts();
  auto& invalid = mesh_map_->invalid;

  cancel_planning_ = false;

  const auto& start_opt = mesh_map_->getNearestVertexHandle(start);
  const auto& goal_opt = mesh_map_->getNearestVertexHandle(goal);

  if (!start_opt || !goal_opt) {
    message = "A* Blad: Brak dostępu do wierzchołków siatki";
    return mbf_msgs::action::GetPath::Result::INVALID_START;
  }

  lvr2::VertexHandle start_vertex = start_opt.unwrap();
  lvr2::VertexHandle goal_vertex = goal_opt.unwrap();

  if (start_vertex == goal_vertex) return mbf_msgs::action::GetPath::Result::SUCCESS;

  g_score_.clear();
  predecessors_.clear();
  lvr2::DenseVertexMap<bool> closed_set(mesh->nextVertexIndex(), false);

  for (auto const& vH : mesh->vertices()) {
    g_score_.insert(vH, std::numeric_limits<float>::infinity());
    predecessors_.insert(vH, vH);
  }

  lvr2::Meap<lvr2::VertexHandle, float> open_set;
  g_score_[start_vertex] = 0.0f;
  
  // Heurystyka od startu poszukiwań (czyli fizycznego GOAL) do końca poszukiwań (fizycznego START)
  float h_start = mesh->getVertexPosition(start_vertex).distance(goal);
  open_set.insert(start_vertex, h_start);

  bool target_reached = false;

  while (!open_set.isEmpty() && !cancel_planning_)
  {
    lvr2::VertexHandle current = open_set.popMin().key();
    closed_set[current] = true;

    if (current == goal_vertex) {
      target_reached = true;
      break;
    }

    if (vertex_costs[current] >= config_.cost_limit || invalid[current]) continue;

    std::vector<lvr2::VertexHandle> neighbors;
    try { 
      mesh->getNeighboursOfVertex(current, neighbors); 
    } catch (...) { 
      invalid.insert(current, true); 
      continue; 
    }

    for (const auto& neighbor : neighbors)
    {
      if (closed_set[neighbor] || invalid[neighbor] || vertex_costs[neighbor] >= config_.cost_limit) continue;

      auto edge_opt = mesh->getEdgeBetween(current, neighbor);
      if (!edge_opt) continue;

      float tentative_g_score = g_score_[current] + edge_weights[edge_opt.unwrap()];

      if (tentative_g_score < g_score_[neighbor]) {
        predecessors_[neighbor] = current;
        g_score_[neighbor] = tentative_g_score;
        
        float h_score = mesh->getVertexPosition(neighbor).distance(goal);
        open_set.insert(neighbor, tentative_g_score + h_score);
      }
    }
  }

  if (cancel_planning_) return mbf_msgs::action::GetPath::Result::CANCELED;
  if (!target_reached) return mbf_msgs::action::GetPath::Result::NO_PATH_FOUND;

  lvr2::VertexHandle curr = goal_vertex;
  while (curr != start_vertex) {
    vertex_path.push_front(curr);
    curr = predecessors_[curr];
  }
  vertex_path.push_front(start_vertex);

  return mbf_msgs::action::GetPath::Result::SUCCESS;
}

bool AStarMeshPlanner::cancel() { cancel_planning_ = true; return true; }

bool AStarMeshPlanner::initialize(const std::string& plugin_name, const std::shared_ptr<mesh_map::MeshMap>& mesh_map_ptr, const rclcpp::Node::SharedPtr& node) 
{
  mesh_map_ = mesh_map_ptr; name_ = plugin_name; map_frame_ = mesh_map_->mapFrame(); node_ = node;
  config_.cost_limit = node->declare_parameter(name_ + ".cost_limit", config_.cost_limit);
  path_pub_ = node->create_publisher<nav_msgs::msg::Path>("~/path", rclcpp::QoS(1).transient_local());
  return true;
}

rcl_interfaces::msg::SetParametersResult AStarMeshPlanner::reconfigureCallback(std::vector<rclcpp::Parameter> parameters)
{
  rcl_interfaces::msg::SetParametersResult result;
  for (auto parameter : parameters) {
    if (parameter.get_name() == name_ + ".cost_limit") config_.cost_limit = parameter.as_double();
  }
  result.successful = true; return result;
}

} /* namespace astar_mesh_planner */