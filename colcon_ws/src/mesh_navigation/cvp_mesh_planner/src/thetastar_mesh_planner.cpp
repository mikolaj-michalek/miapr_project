#include <lvr2/geometry/Handles.hpp>
#include <lvr2/util/Meap.hpp>
#include <chrono>
#include <mesh_map/util.h>
#include <pluginlib/class_list_macros.hpp>
#include "cvp_mesh_planner/thetastar_mesh_planner.h" 

PLUGINLIB_EXPORT_CLASS(thetastar_mesh_planner::ThetaStarMeshPlanner, mbf_mesh_core::MeshPlanner);

namespace thetastar_mesh_planner 
{
ThetaStarMeshPlanner::ThetaStarMeshPlanner() {}
ThetaStarMeshPlanner::~ThetaStarMeshPlanner() {}

uint32_t ThetaStarMeshPlanner::makePlan(const geometry_msgs::msg::PoseStamped& start,
                                        const geometry_msgs::msg::PoseStamped& goal,
                                        double tolerance, 
                                        std::vector<geometry_msgs::msg::PoseStamped>& plan, double& cost,
                                        std::string& message)
{


  geometry_msgs::msg::PoseStamped start_in_map, goal_in_map;
  try {
    start_in_map = mesh_map_->transformToMapFrame(start);
    goal_in_map = mesh_map_->transformToMapFrame(goal);
  } catch (tf2::TransformException& ex) {
    return mbf_msgs::action::GetPath::Result::TF_ERROR;
  }

  mesh_map::Vector start_vec = mesh_map::toVector(start_in_map.pose.position);
  mesh_map::Vector goal_vec = mesh_map::toVector(goal_in_map.pose.position);

  std::list<lvr2::VertexHandle> vertex_path;
  // KLUCZOWE: Szukamy wstecz (od Celu do Startu)
  const uint32_t outcome = runThetaStar(goal_vec, start_vec, vertex_path, message); 
  
  if (outcome != mbf_msgs::action::GetPath::Result::SUCCESS) return outcome;

  // Odwracamy wyjściową ścieżkę dla robota
  vertex_path.reverse();

  std_msgs::msg::Header header;
  header.stamp = node_->now();
  header.frame_id = mesh_map_->mapFrame();

  const auto mesh = mesh_map_->mesh();
  cost = 0;
  float dir_length;

  if (!cancel_planning_ && !vertex_path.empty())
  {
    lvr2::VertexHandle current_vh = vertex_path.front();
    mesh_map::Vector current_pos = mesh->getVertexPosition(current_vh);
    vertex_path.pop_front();
    const auto& vertex_normals = mesh_map_->vertexNormals();

    while (!vertex_path.empty())
    {
      lvr2::VertexHandle next_vh = vertex_path.front();
      mesh_map::Vector next_pos = mesh->getVertexPosition(next_vh);
      vertex_path.pop_front();

      float dist_between_points = current_pos.distance(next_pos);
      if (dist_between_points > 1e-4) 
      {
        geometry_msgs::msg::PoseStamped pose;
        pose.header = header;
        pose.pose = mesh_map::calculatePoseFromPosition(current_pos, next_pos, vertex_normals[current_vh], dir_length);
        cost += dir_length;
        plan.push_back(pose);
        current_pos = next_pos;
        current_vh = next_vh;
      }
    }
    geometry_msgs::msg::PoseStamped goal_pose;
    goal_pose.header = header;
    goal_pose.pose = goal_in_map.pose;
    plan.push_back(goal_pose);
  }

  // --- KOMPATYBILNE POLA WEKTOROWE DLA KONTROLERA JAZDY ---
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

  return mbf_msgs::action::GetPath::Result::SUCCESS;
}

uint32_t ThetaStarMeshPlanner::runThetaStar(const mesh_map::Vector& start, const mesh_map::Vector& goal,
                                            std::list<lvr2::VertexHandle>& vertex_path, std::string& message)
{
  const auto mesh = mesh_map_->mesh();
  const auto& edge_weights = mesh_map_->edgeWeights();
  const auto& vertex_costs = mesh_map_->vertexCosts();
  auto& invalid = mesh_map_->invalid;

  cancel_planning_ = false;

  const auto& start_opt = mesh_map_->getNearestVertexHandle(start);
  const auto& goal_opt = mesh_map_->getNearestVertexHandle(goal);

  if (!start_opt || !goal_opt) return mbf_msgs::action::GetPath::Result::INVALID_START;

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
  open_set.insert(start_vertex, mesh->getVertexPosition(start_vertex).distance(goal));

  while (!open_set.isEmpty() && !cancel_planning_) {
    lvr2::VertexHandle current = open_set.popMin().key();
    closed_set[current] = true;

    if (current == goal_vertex) break;

    if (vertex_costs[current] >= config_.cost_limit || invalid[current]) continue;

    std::vector<lvr2::VertexHandle> neighbors;
    try {
      mesh->getNeighboursOfVertex(current, neighbors);
    } catch (...) {
      continue;
    }

    for (const auto& neighbor : neighbors) {
      if (closed_set[neighbor] || invalid[neighbor] || vertex_costs[neighbor] >= config_.cost_limit) continue;

      lvr2::VertexHandle parent = predecessors_[current];
      if (parent != current && lineOfSight(parent, neighbor)) {
        float new_g = g_score_[parent] + mesh->getVertexPosition(parent).distance(mesh->getVertexPosition(neighbor));
        if (new_g < g_score_[neighbor]) {
          predecessors_[neighbor] = parent;
          g_score_[neighbor] = new_g;
          open_set.insert(neighbor, new_g + mesh->getVertexPosition(neighbor).distance(goal));
        }
      } else {
        auto edge_opt = mesh->getEdgeBetween(current, neighbor);
        if (!edge_opt) continue;
        float edge_dist = edge_weights[edge_opt.unwrap()];
        if (g_score_[current] + edge_dist < g_score_[neighbor]) {
          predecessors_[neighbor] = current;
          g_score_[neighbor] = g_score_[current] + edge_dist;
          open_set.insert(neighbor, g_score_[neighbor] + mesh->getVertexPosition(neighbor).distance(goal));
        }
      }
    }
  }

  if (cancel_planning_) return mbf_msgs::action::GetPath::Result::CANCELED;

  lvr2::VertexHandle curr = goal_vertex;
  while (curr != start_vertex) {
    vertex_path.push_front(curr);
    curr = predecessors_[curr];
  }
  vertex_path.push_front(start_vertex);
  return mbf_msgs::action::GetPath::Result::SUCCESS;
}

bool ThetaStarMeshPlanner::lineOfSight(lvr2::VertexHandle v1, lvr2::VertexHandle v2)
{
  const auto mesh = mesh_map_->mesh();
  mesh_map::Vector p1 = mesh->getVertexPosition(v1);
  mesh_map::Vector p2 = mesh->getVertexPosition(v2);
  
  float dist = p1.distance(p2);
  if (dist < 1e-4) return true;

  int steps = std::max(2, static_cast<int>(dist / 0.1));
  mesh_map::Vector dir = (p2 - p1) / steps;

  for (int i = 1; i < steps; ++i) {
    mesh_map::Vector pt = p1 + dir * i;
    auto face_opt = mesh_map_->getContainingFace(pt, 0.4);
    if (!face_opt) return false; 

    auto vertices = mesh->getVerticesOfFace(face_opt.unwrap());
    for (auto v : vertices) {
      if (mesh_map_->vertexCosts()[v] >= config_.cost_limit || mesh_map_->invalid[v]) return false; 
    }
  }
  return true;
}

bool ThetaStarMeshPlanner::cancel() { cancel_planning_ = true; return true; }

bool ThetaStarMeshPlanner::initialize(const std::string& plugin_name, const std::shared_ptr<mesh_map::MeshMap>& mesh_map_ptr, const rclcpp::Node::SharedPtr& node) 
{
  mesh_map_ = mesh_map_ptr; name_ = plugin_name; map_frame_ = mesh_map_->mapFrame(); node_ = node;
  config_.cost_limit = node->declare_parameter(name_ + ".cost_limit", config_.cost_limit);
  path_pub_ = node->create_publisher<nav_msgs::msg::Path>("~/path", rclcpp::QoS(1).transient_local());
  return true;
}

rcl_interfaces::msg::SetParametersResult ThetaStarMeshPlanner::reconfigureCallback(std::vector<rclcpp::Parameter> parameters) { return rcl_interfaces::msg::SetParametersResult(); }

} // namespace thetastar_mesh_planner