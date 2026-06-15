// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/get_labeled_cluster_group.hpp"


#ifndef LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__BUILDER_HPP_
#define LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "label_manager/srv/detail/get_labeled_cluster_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_GetLabeledClusterGroup_Request_label_group
{
public:
  explicit Init_GetLabeledClusterGroup_Request_label_group(::label_manager::srv::GetLabeledClusterGroup_Request & msg)
  : msg_(msg)
  {}
  ::label_manager::srv::GetLabeledClusterGroup_Request label_group(::label_manager::srv::GetLabeledClusterGroup_Request::_label_group_type arg)
  {
    msg_.label_group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::GetLabeledClusterGroup_Request msg_;
};

class Init_GetLabeledClusterGroup_Request_uuid
{
public:
  Init_GetLabeledClusterGroup_Request_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLabeledClusterGroup_Request_label_group uuid(::label_manager::srv::GetLabeledClusterGroup_Request::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_GetLabeledClusterGroup_Request_label_group(msg_);
  }

private:
  ::label_manager::srv::GetLabeledClusterGroup_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::GetLabeledClusterGroup_Request>()
{
  return label_manager::srv::builder::Init_GetLabeledClusterGroup_Request_uuid();
}

}  // namespace label_manager


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_GetLabeledClusterGroup_Response_clusters
{
public:
  Init_GetLabeledClusterGroup_Response_clusters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::label_manager::srv::GetLabeledClusterGroup_Response clusters(::label_manager::srv::GetLabeledClusterGroup_Response::_clusters_type arg)
  {
    msg_.clusters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::GetLabeledClusterGroup_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::GetLabeledClusterGroup_Response>()
{
  return label_manager::srv::builder::Init_GetLabeledClusterGroup_Response_clusters();
}

}  // namespace label_manager


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_GetLabeledClusterGroup_Event_response
{
public:
  explicit Init_GetLabeledClusterGroup_Event_response(::label_manager::srv::GetLabeledClusterGroup_Event & msg)
  : msg_(msg)
  {}
  ::label_manager::srv::GetLabeledClusterGroup_Event response(::label_manager::srv::GetLabeledClusterGroup_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::GetLabeledClusterGroup_Event msg_;
};

class Init_GetLabeledClusterGroup_Event_request
{
public:
  explicit Init_GetLabeledClusterGroup_Event_request(::label_manager::srv::GetLabeledClusterGroup_Event & msg)
  : msg_(msg)
  {}
  Init_GetLabeledClusterGroup_Event_response request(::label_manager::srv::GetLabeledClusterGroup_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLabeledClusterGroup_Event_response(msg_);
  }

private:
  ::label_manager::srv::GetLabeledClusterGroup_Event msg_;
};

class Init_GetLabeledClusterGroup_Event_info
{
public:
  Init_GetLabeledClusterGroup_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLabeledClusterGroup_Event_request info(::label_manager::srv::GetLabeledClusterGroup_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLabeledClusterGroup_Event_request(msg_);
  }

private:
  ::label_manager::srv::GetLabeledClusterGroup_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::GetLabeledClusterGroup_Event>()
{
  return label_manager::srv::builder::Init_GetLabeledClusterGroup_Event_info();
}

}  // namespace label_manager

#endif  // LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__BUILDER_HPP_
