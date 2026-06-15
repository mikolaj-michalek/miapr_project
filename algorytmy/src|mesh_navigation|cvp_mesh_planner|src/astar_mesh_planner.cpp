// /*
//  *  Copyright 2020, Sebastian Pütz
//  *
//  *  Redistribution and use in source and binary forms, with or without
//  *  modification, are permitted provided that the following conditions
//  *  are met:
//  *
//  *  1. Redistributions of source code must retain the above copyright
//  *     notice, this list of conditions and the following disclaimer.
//  *
//  *  2. Redistributions in binary form must reproduce the above
//  *     copyright notice, this list of conditions and the following
//  *     disclaimer in the documentation and/or other materials provided
//  *     with the distribution.
//  *
//  *  3. Neither the name of the copyright holder nor the names of its
//  *     contributors may be used to endorse or promote products derived
//  *     from this software without specific prior written permission.
//  *
//  *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//  *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//  *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//  *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//  *  COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//  *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//  *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//  *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
//  *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
//  *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  *  POSSIBILITY OF SUCH DAMAGE.
//  *
//  *  authors:
//  *    Sebastian Pütz <spuetz@uni-osnabrueck.de>
//  *
//  */

// #include <chrono>
// #include <dijkstra_mesh_planner/a_star_mesh_planner.h>
// #include <lvr2/util/Meap.hpp>
// #include <mbf_msgs/action/get_path.hpp>
// #include <mesh_map/util.h>
// #include <pluginlib/class_list_macros.hpp>
// #include <rclcpp/logging.hpp>

// PLUGINLIB_EXPORT_CLASS(a_star_mesh_planner::a_starMeshPlanner, mbf_mesh_core::MeshPlanner);

// namespace a_star_mesh_planner
// {

// a_starMeshPlanner::a_starMeshPlanner() {}

// a_starMeshPlanner::~a_starMeshPlanner() {}

// uint32_t a_starMeshPlanner::makePlan(const geometry_msgs::msg::PoseStamped& start, const geometry_msgs::msg::PoseStamped& goal,
//                             double tolerance, std::vector<geometry_msgs::msg::PoseStamped>& plan, double& cost,
//                             std::string& message)
// {
//   // This planner requires start and goal pose to be in map frame
//   geometry_msgs::msg::PoseStamped start_in_map, goal_in_map;
//   try {
//     // try to extract start and goal in map frame
//     start_in_map = mesh_map_->transformToMapFrame(start);
//     goal_in_map = mesh_map_->transformToMapFrame(goal);
//   } catch (tf2::TransformException& ex) {
//     RCLCPP_ERROR_STREAM(
//       node_->get_logger(), name_ <<
//         ": Could not transform start or goal pose to map frame '" << map_frame_ << "': " << ex.what());
//     return mbf_msgs::action::GetPath::Result::TF_ERROR;
//   }

//   mesh_map::Vector start_vec = mesh_map::toVector(start_in_map.pose.position);
//   mesh_map::Vector goal_vec = mesh_map::toVector(goal_in_map.pose.position);

//   const auto mesh = mesh_map_->mesh();
//   std::list<lvr2::VertexHandle> path;

//   RCLCPP_INFO(node_->get_logger(), "start a_star mesh planner.");

//   // call a_star with the goal pose as seed / start vertex
//   uint32_t outcome = a_star(goal_vec, start_vec, path);

//   path.reverse();

//   std_msgs::msg::Header header;
//   header.stamp = node_->now();
//   header.frame_id = mesh_map_->mapFrame();

//   cost = 0;
//   if (!path.empty())
//   {
//     mesh_map::Vector& vec = start_vec;
//     const auto& vertex_normals = mesh_map_->vertexNormals();
//     mesh_map::Normal normal = vertex_normals[path.front()];

//     float dir_length;
//     geometry_msgs::msg::PoseStamped pose;
//     pose.header = header;

//     while (!path.empty())
//     {
//       // get next position
//       const lvr2::VertexHandle& vH = path.front();
//       mesh_map::Vector next = mesh->getVertexPosition(vH);

//       pose.pose = mesh_map::calculatePoseFromPosition(vec, next, normal, dir_length);
//       cost += dir_length;
//       vec = next;
//       normal = vertex_normals[vH];
//       plan.push_back(pose);
//       path.pop_front();
//     }
//     pose.pose = mesh_map::calculatePoseFromPosition(vec, goal_vec, normal, dir_length);
//     cost += dir_length;
//     plan.push_back(pose);
//   }

//   RCLCPP_INFO_STREAM(node_->get_logger(), "Path length: " << cost << "m");
//   nav_msgs::msg::Path path_msg;
//   path_msg.poses = plan;
//   path_msg.header = header;

//   path_pub_->publish(path_msg);
//   mesh_map_->publishVertexCosts(potential_, "Potential", node_->now());

//   RCLCPP_INFO_STREAM(node_->get_logger(), "Path length: " << cost << "m");

//   if (config_.publish_vector_field)
//   {
//     mesh_map_->publishVectorField("vector_field", vector_map_, config_.publish_face_vectors);
//   }

//   return outcome;
// }

// bool a_starMeshPlanner::cancel()
// {
//   cancel_planning_ = true;
//   return true;
// }

// bool a_starMeshPlanner::initialize(const std::string& plugin_name, const std::shared_ptr<mesh_map::MeshMap>& mesh_map_ptr, const rclcpp::Node::SharedPtr& node)
// {
//   mesh_map_ = mesh_map_ptr;
//   name_ = plugin_name;
//   map_frame_ = mesh_map_->mapFrame();
//   node_ = node;

//   config_.publish_vector_field = node_->declare_parameter(name_ + ".publish_vector_field", config_.publish_vector_field);
//   config_.publish_face_vectors = node_->declare_parameter(name_ + ".publish_face_vectors", config_.publish_face_vectors);
//   config_.goal_dist_offset =  node->declare_parameter(name_ + ".goal_dist_offset", config_.goal_dist_offset);
//   { // cost limit param
//     rcl_interfaces::msg::ParameterDescriptor descriptor;
//     descriptor.description = "Defines the vertex cost limit with which it can be accessed.";
//     rcl_interfaces::msg::FloatingPointRange range;
//     range.from_value = 0.0;
//     range.to_value = 10.0;
//     descriptor.floating_point_range.push_back(range);
//     config_.cost_limit =  node->declare_parameter(name_ + ".cost_limit", config_.cost_limit);
//   }

//   path_pub_ = node_->create_publisher<nav_msgs::msg::Path>("~/path", rclcpp::QoS(1).transient_local());
//   const auto mesh = mesh_map_->mesh();

//   reconfiguration_callback_handle_ = node_->add_on_set_parameters_callback(std::bind(
//       &a_starMeshPlanner::reconfigureCallback, this, std::placeholders::_1));

//   return true;
// }

// lvr2::DenseVertexMap<mesh_map::Vector> a_starMeshPlanner::getVectorMap()
// {
//   return vector_map_;
// }

// rcl_interfaces::msg::SetParametersResult a_starMeshPlanner::reconfigureCallback(std::vector<rclcpp::Parameter> parameters)
// {
//   rcl_interfaces::msg::SetParametersResult result;
//   for (auto parameter : parameters) {
//     if (parameter.get_name() == name_ + ".cost_limit") {
//       config_.cost_limit = parameter.as_double();
//       RCLCPP_INFO_STREAM(node_->get_logger(), "New height diff layer config through dynamic reconfigure.");
//     }
//   }
//   result.successful = true;
//   return result;
// }

// void a_starMeshPlanner::computeVectorMap()
// {
//   const auto mesh = mesh_map_->mesh();

//   for (auto v3 : mesh->vertices())
//   {
//     const lvr2::VertexHandle& v1 = predecessors_[v3];
//     // if predecessor is pointing to it self, continue with the next vertex.
//     if (v1 == v3)
//       continue;

//     const auto& vec3 = mesh->getVertexPosition(v3);
//     const auto& vec1 = mesh->getVertexPosition(v1);

//     // compute the direction vector and store it in the direction vertex map
//     const auto dirVec = vec1 - vec3;
//     // store the normalized rotated vector in the vector map
//     vector_map_.insert(v3, dirVec.normalized());
//   }
//   mesh_map_->setVectorMap(vector_map_);
// }

// uint32_t a_starMeshPlanner::a_star(const mesh_map::Vector& start, const mesh_map::Vector& goal,
//                                        std::list<lvr2::VertexHandle>& path)
// {
//   return a_star(start, goal, mesh_map_->edgeWeights(), mesh_map_->vertexCosts(), path, potential_, predecessors_);
// }

// uint32_t a_starMeshPlanner::a_star(const mesh_map::Vector& original_start, const mesh_map::Vector& original_goal,
//                                        const lvr2::DenseEdgeMap<float>& edge_weights,
//                                        const lvr2::DenseVertexMap<float>& costs, std::list<lvr2::VertexHandle>& path,
//                                        lvr2::DenseVertexMap<float>& distances,
//                                        lvr2::DenseVertexMap<lvr2::VertexHandle>& predecessors)
// {
//   RCLCPP_INFO_STREAM(node_->get_logger(), "Init wave front propagation.");
//   const auto t_initialization_start = std::chrono::steady_clock::now();

//   const auto mesh = mesh_map_->mesh();
//   const auto& vertex_costs = mesh_map_->vertexCosts();

//   auto& invalid = mesh_map_->invalid;

//   mesh_map_->publishDebugPoint(original_start, mesh_map::color(0, 1, 0), "start_point");
//   mesh_map_->publishDebugPoint(original_goal, mesh_map::color(0, 0, 1), "goal_point");

//   // Find the closest vertex handle of start and goal
//   const auto& start_opt = mesh_map_->getNearestVertexHandle(original_start);
//   const auto& goal_opt = mesh_map_->getNearestVertexHandle(original_goal);
//   // reset cancel planning
//   cancel_planning_ = false;

//   if (!start_opt)
//     return mbf_msgs::action::GetPath::Result::INVALID_START;
//   if (!goal_opt)
//     return mbf_msgs::action::GetPath::Result::INVALID_GOAL;

//   const auto& start_vertex = start_opt.unwrap();
//   const auto& goal_vertex = goal_opt.unwrap();

//   path.clear();
//   distances.clear();
//   predecessors.clear();

//   if (goal_vertex == start_vertex)
//   {
//     return mbf_msgs::action::GetPath::Result::SUCCESS;
//   }

//   lvr2::DenseVertexMap<bool> fixed(mesh->nextVertexIndex(), false);

//   // clear vector field map
//   vector_map_.clear();

//   const auto t_start = std::chrono::steady_clock::now();

//   // initialize distances with infinity
//   // initialize predecessor of each vertex with itself
//   for (auto const& vH : mesh->vertices())
//   {
//     distances.insert(vH, std::numeric_limits<float>::infinity());
//     predecessors.insert(vH, vH);
//   }

//   lvr2::Meap<lvr2::VertexHandle, float> pq;

//   // Set start distance to zero
//   // add start vertex to priority queue
//   // Set start distance to zero
//   distances[start_vertex] = 0;

//   // -- A* MODYFIKACJA --
//   mesh_map::Vector start_pos = mesh->getVertexPosition(start_vertex);
//   float start_h_cost = original_goal.distance(start_pos);
//   pq.insert(start_vertex, start_h_cost); // h_cost bo g(start) = 0
//   // --------------------
  
//   float goal_dist = std::numeric_limits<float>::infinity();

//   RCLCPP_INFO_STREAM(node_->get_logger(), "Start a_star");
//   const auto t_propagation_start = std::chrono::steady_clock::now();
//   const auto initialization_duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t_propagation_start - t_initialization_start);

//   size_t fixed_set_cnt = 0;

//   while (!pq.isEmpty() && !cancel_planning_)
//   {
//     lvr2::VertexHandle current_vh = pq.popMin().key();
//     fixed[current_vh] = true;
//     fixed_set_cnt++;

//     if (current_vh == goal_vertex)
//     {
//       RCLCPP_INFO_STREAM(node_->get_logger(), "The a_star Mesh Planner reached the goal.");
//       goal_dist = distances[current_vh] + config_.goal_dist_offset;
//     }

//     if (distances[current_vh] > goal_dist)
//       continue;

//     if (vertex_costs[current_vh] > config_.cost_limit)
//       continue;

//     std::vector<lvr2::EdgeHandle> edges;
//     try
//     {
//       mesh->getEdgesOfVertex(current_vh, edges);
//     }
//     catch (lvr2::PanicException exception)
//     {
//       invalid.insert(current_vh, true);
//       continue;
//     }
//     catch (lvr2::VertexLoopException exception)
//     {
//       invalid.insert(current_vh, true);
//       continue;
//     }
//     for (auto eH : edges)
//     {
//       try
//       {
//         std::array<lvr2::VertexHandle, 2> vertices = mesh->getVerticesOfEdge(eH);
//         auto vH = vertices[0] == current_vh ? vertices[1] : vertices[0];
//         if (fixed[vH])
//           continue;
//         if (invalid[vH])
//           continue;

//         float tmp_cost = distances[current_vh] + edge_weights[eH];
//         if (tmp_cost < distances[vH])
//         {
//           distances[vH] = tmp_cost;
          
//           // -- A* MODYFIKACJA --
//           // Pobierz pozycję sąsiada vH
//           mesh_map::Vector neighbor_pos = mesh->getVertexPosition(vH);
          
//           // Oblicz heurystykę h(n) jako dystans euklidesowy do celu
//           float h_cost = original_goal.distance(neighbor_pos); 
          
//           // Oblicz f(n) = g(n) + h(n)
//           float f_cost = tmp_cost + h_cost;
          
//           // Wstawiamy f(n) do kolejki jako priorytet, ale g(n) do distances
//           pq.insert(vH, f_cost);
//           // --------------------

//           predecessors[vH] = current_vh;
//         }
//       }
//       catch (lvr2::PanicException exception)
//       {
//         continue;
//       }
//       catch (lvr2::VertexLoopException exception)
//       {
//         continue;
//       }
//     }
//   }

//   if (cancel_planning_)
//   {
//     RCLCPP_WARN_STREAM(node_->get_logger(), "Wave front propagation has been canceled!");
//     return mbf_msgs::action::GetPath::Result::CANCELED;
//   }

//   RCLCPP_INFO_STREAM(node_->get_logger(), "The a_star Mesh Planner finished the propagation.");

//   if (goal_vertex == predecessors[goal_vertex])
//   {
//     RCLCPP_WARN(node_->get_logger(), "Predecessor of the goal is not set! No path found!");
//     return mbf_msgs::action::GetPath::Result::NO_PATH_FOUND;
//   }

//   const auto t_propagation_end = std::chrono::steady_clock::now();
//   const auto propagation_duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t_propagation_end - t_propagation_start);

//   auto vH = goal_vertex;

//   while (vH != start_vertex && !cancel_planning_)
//   {
//     vH = predecessors[vH];
//     path.push_front(vH);
//   };

//   const auto t_end = std::chrono::steady_clock::now();
//   const auto execution_duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t_end - t_start);
//   RCLCPP_INFO_STREAM(node_->get_logger(), "Execution duration (ms): " << execution_duration_ms.count() 
//                                           << " for " << mesh->numVertices() << " num vertices in the mesh.");

//   computeVectorMap();

//   if (cancel_planning_)
//   {
//     RCLCPP_WARN_STREAM(node_->get_logger(), "a_star has been canceled!");
//     return mbf_msgs::action::GetPath::Result::CANCELED;
//   }

//   const auto t_path_backtracking = std::chrono::steady_clock::now();
//   const auto path_backtracking_duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t_path_backtracking - t_propagation_end);

//   RCLCPP_INFO_STREAM(node_->get_logger(), "Processed " << fixed_set_cnt << " vertices in the fixed set.");
//   RCLCPP_INFO_STREAM(node_->get_logger(), "Initialization duration (ms): " << initialization_duration_ms.count());
//   RCLCPP_INFO_STREAM(node_->get_logger(), "Execution time wavefront propagation (ms): " << propagation_duration_ms.count());
//   RCLCPP_INFO_STREAM(node_->get_logger(), "Path backtracking duration (ms): " << path_backtracking_duration_ms.count());

//   RCLCPP_INFO_STREAM(node_->get_logger(), "Successfully finished a_star back tracking!");
//   return mbf_msgs::action::GetPath::Result::SUCCESS;
// }

// } /* namespace a_star_mesh_planner */




/*
 * Copyright 2020, Sebastian Pütz
 * Modified for Discrete A* Search Algorithm (2026)
 */

#include <chrono>
#include <lvr2/util/Meap.hpp>
#include <mbf_msgs/action/get_path.hpp>
#include <mesh_map/util.h>
#include <pluginlib/class_list_macros.hpp>
#include <rclcpp/logging.hpp>

#include "cvp_mesh_planner/astar_mesh_planner.h" // Poprawiony include!

// Poprawne makro eksportujące wtyczkę!
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
  RCLCPP_INFO(node_->get_logger(), "===> Wywolano klasyczny algorytm A* <===");
  RCLCPP_INFO(node_->get_logger(), "============================================================");

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
  const uint32_t outcome = runAStar(start_vec, goal_vec, vertex_path, message); 
  
  if (outcome != mbf_msgs::action::GetPath::Result::SUCCESS) return outcome;

  const auto mesh = mesh_map_->mesh();

  std_msgs::msg::Header header;
  header.stamp = node_->now();
  header.frame_id = mesh_map_->mapFrame();
  cost = 0;

  // Konwersja na ścieżkę bez wygładzania Chaikina (klasyczny łamany A*)
  if (!cancel_planning_ && vertex_path.size() > 1) {
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

  // Obliczanie wektorów dla lokalnego kontrolera
  vector_map_.clear();
  for (auto v : mesh->vertices()) {
    lvr2::VertexHandle pred = predecessors_[v];
    mesh_map::Vector dir;
    if (pred != v) dir = mesh->getVertexPosition(pred) - mesh->getVertexPosition(v);
    else dir = start_vec - mesh->getVertexPosition(v); 

    if (dir.length() > 1e-5) vector_map_.insert(v, dir.normalized());
    else vector_map_.insert(v, mesh_map::Vector(1.0, 0.0, 0.0));
  }
  mesh_map_->setVectorMap(vector_map_);

  nav_msgs::msg::Path path_msg;
  path_msg.poses = plan;
  path_msg.header = header;
  path_pub_->publish(path_msg);

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

  mesh_map::Vector start_copy = start;
  mesh_map::Vector goal_copy = goal;

  const lvr2::OptionalFaceHandle start_opt = mesh_map_->getContainingFace(start_copy, 0.4);
  const lvr2::OptionalFaceHandle goal_opt = mesh_map_->getContainingFace(goal_copy, 0.4);

  if (!start_opt || !goal_opt) return mbf_msgs::action::GetPath::Result::INVALID_START;

  lvr2::VertexHandle start_vertex = mesh->getVerticesOfFace(start_opt.unwrap())[0];
  lvr2::VertexHandle goal_vertex = mesh->getVerticesOfFace(goal_opt.unwrap())[0];

  g_score_.clear();
  predecessors_.clear();
  lvr2::DenseVertexMap<bool> closed_set(mesh->nextVertexIndex(), false);

  for (auto const& vH : mesh->vertices()) {
    g_score_.insert(vH, std::numeric_limits<float>::infinity());
    predecessors_.insert(vH, vH);
  }

  lvr2::Meap<lvr2::VertexHandle, float> open_set;

  g_score_[goal_vertex] = 0.0f;
  float h_start = goal.distance(mesh->getVertexPosition(start_vertex));
  open_set.insert(goal_vertex, h_start);

  bool target_reached = false;

  while (!open_set.isEmpty() && !cancel_planning_)
  {
    lvr2::VertexHandle current = open_set.popMin().key();
    closed_set[current] = true;

    if (current == start_vertex) {
      target_reached = true;
      break;
    }

    if (vertex_costs[current] >= config_.cost_limit || invalid[current]) continue;

    std::vector<lvr2::VertexHandle> neighbors;
    try { mesh->getNeighboursOfVertex(current, neighbors); } catch (...) { continue; }

    for (const auto& neighbor : neighbors)
    {
      if (closed_set[neighbor] || invalid[neighbor] || vertex_costs[neighbor] >= config_.cost_limit) continue;

      auto edge_opt = mesh->getEdgeBetween(current, neighbor);
      if (!edge_opt) continue;

      float tentative_g_score = g_score_[current] + edge_weights[edge_opt.unwrap()];

      if (tentative_g_score < g_score_[neighbor]) {
        predecessors_[neighbor] = current;
        g_score_[neighbor] = tentative_g_score;
        float h_score = mesh->getVertexPosition(neighbor).distance(mesh->getVertexPosition(start_vertex));
        open_set.insert(neighbor, tentative_g_score + h_score);
      }
    }
  }

  if (!target_reached) return mbf_msgs::action::GetPath::Result::NO_PATH_FOUND;

  lvr2::VertexHandle curr = start_vertex;
  while (curr != goal_vertex) {
    vertex_path.push_back(curr);
    lvr2::VertexHandle pred = predecessors_[curr];
    if (pred == curr) break; 
    curr = pred;
  }
  vertex_path.push_back(goal_vertex);

  return mbf_msgs::action::GetPath::Result::SUCCESS;
}

bool AStarMeshPlanner::cancel()
{
  cancel_planning_ = true;
  return true;
}

bool AStarMeshPlanner::initialize(const std::string& plugin_name, const std::shared_ptr<mesh_map::MeshMap>& mesh_map_ptr, const rclcpp::Node::SharedPtr& node) 
{
  mesh_map_ = mesh_map_ptr;
  name_ = plugin_name;
  map_frame_ = mesh_map_->mapFrame();
  node_ = node;

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
  result.successful = true;
  return result;
}

} /* namespace astar_mesh_planner */
