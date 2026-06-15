/*
 * Copyright 2020, Sebastian Pütz
 * Modified for Theta* Search Algorithm on Triangle Mesh (2026)
 */

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
    const uint32_t outcome = runThetaStar(start_vec, goal_vec, vertex_path, message); 
    
    if (outcome != mbf_msgs::action::GetPath::Result::SUCCESS) return outcome;

    const auto mesh = mesh_map_->mesh();
    cost = 0;
    float dir_length;
    std_msgs::msg::Header header;
    header.stamp = node_->now();
    header.frame_id = mesh_map_->mapFrame();

    if (!vertex_path.empty()) {
        lvr2::VertexHandle current_vh = vertex_path.front();
        mesh_map::Vector current_pos = mesh->getVertexPosition(current_vh);
        vertex_path.pop_front();
        const auto& vertex_normals = mesh_map_->vertexNormals();

        while (!vertex_path.empty()) {
            lvr2::VertexHandle next_vh = vertex_path.front();
            mesh_map::Vector next_pos = mesh->getVertexPosition(next_vh);
            geometry_msgs::msg::PoseStamped pose;
            pose.header = header;
            pose.pose = mesh_map::calculatePoseFromPosition(current_pos, next_pos, vertex_normals[current_vh], dir_length);
            cost += dir_length;
            plan.push_back(pose);
            current_pos = next_pos;
            current_vh = next_vh;
            vertex_path.pop_front();
        }
    }
    return mbf_msgs::action::GetPath::Result::SUCCESS;
}

bool ThetaStarMeshPlanner::lineOfSight(lvr2::VertexHandle v1, lvr2::VertexHandle v2)
{
    const auto mesh = mesh_map_->mesh();
    mesh_map::Vector p1 = mesh->getVertexPosition(v1);
    mesh_map::Vector p2 = mesh->getVertexPosition(v2);
    
    int steps = 4;
    mesh_map::Vector dir = (p2 - p1) / steps;

    for (int i = 1; i < steps; ++i) {
        mesh_map::Vector pt = p1 + dir * i;
        auto v_opt = mesh_map_->getNearestVertexHandle(pt);
        if (!v_opt || mesh_map_->vertexCosts()[v_opt.unwrap()] >= config_.cost_limit || mesh_map_->invalid[v_opt.unwrap()]) {
            return false;
        }
    }
    return true;
}

uint32_t ThetaStarMeshPlanner::runThetaStar(const mesh_map::Vector& start, const mesh_map::Vector& goal,
                                            std::list<lvr2::VertexHandle>& vertex_path, std::string& message)
{
    const auto mesh = mesh_map_->mesh();
    auto start_opt = mesh_map_->getNearestVertexHandle(start);
    auto goal_opt = mesh_map_->getNearestVertexHandle(goal);

    if (!start_opt || !goal_opt) return mbf_msgs::action::GetPath::Result::INVALID_START;

    lvr2::VertexHandle start_vertex = start_opt.unwrap();
    lvr2::VertexHandle goal_vertex = goal_opt.unwrap();

    g_score_.clear();
    predecessors_.clear();
    for (auto const& vH : mesh->vertices()) {
        g_score_.insert(vH, std::numeric_limits<float>::infinity());
        predecessors_.insert(vH, vH);
    }

    lvr2::Meap<lvr2::VertexHandle, float> open_set;
    g_score_[goal_vertex] = 0.0f;
    open_set.insert(goal_vertex, goal.distance(mesh->getVertexPosition(start_vertex)));

    while (!open_set.isEmpty()) {
        lvr2::VertexHandle current = open_set.popMin().key();
        if (current == start_vertex) break;

        for (const auto& neighbor : mesh->getNeighboursOfVertex(current)) {
            if (mesh_map_->vertexCosts()[neighbor] >= config_.cost_limit) continue;

            lvr2::VertexHandle parent = predecessors_[current];
            if (parent != current && lineOfSight(parent, neighbor)) {
                float new_g = g_score_[parent] + mesh->getVertexPosition(parent).distance(mesh->getVertexPosition(neighbor));
                if (new_g < g_score_[neighbor]) {
                    predecessors_[neighbor] = parent;
                    g_score_[neighbor] = new_g;
                    open_set.insert(neighbor, new_g + mesh->getVertexPosition(neighbor).distance(mesh->getVertexPosition(start_vertex)));
                }
            } else {
                float edge_dist = mesh_map_->edgeWeights()[mesh->getEdgeBetween(current, neighbor).unwrap()];
                if (g_score_[current] + edge_dist < g_score_[neighbor]) {
                    predecessors_[neighbor] = current;
                    g_score_[neighbor] = g_score_[current] + edge_dist;
                    open_set.insert(neighbor, g_score_[neighbor] + mesh->getVertexPosition(neighbor).distance(mesh->getVertexPosition(start_vertex)));
                }
            }
        }
    }
    lvr2::VertexHandle curr = start_vertex;
    while (curr != goal_vertex) {
        vertex_path.push_back(curr);
        curr = predecessors_[curr];
    }
    vertex_path.push_back(goal_vertex);
    return mbf_msgs::action::GetPath::Result::SUCCESS;
}

bool ThetaStarMeshPlanner::cancel() { return true; }

bool ThetaStarMeshPlanner::initialize(const std::string& plugin_name, const std::shared_ptr<mesh_map::MeshMap>& mesh_map_ptr, const rclcpp::Node::SharedPtr& node) 
{
    mesh_map_ = mesh_map_ptr; 
    node_ = node; 
    name_ = plugin_name;
    path_pub_ = node->create_publisher<nav_msgs::msg::Path>("~/path", 1);
    return true;
}

rcl_interfaces::msg::SetParametersResult ThetaStarMeshPlanner::reconfigureCallback(std::vector<rclcpp::Parameter> parameters) { return rcl_interfaces::msg::SetParametersResult(); }

} // namespace thetastar_mesh_planner
