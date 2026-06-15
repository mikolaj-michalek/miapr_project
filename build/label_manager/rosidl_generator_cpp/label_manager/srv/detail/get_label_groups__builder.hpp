// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from label_manager:srv/GetLabelGroups.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/get_label_groups.hpp"


#ifndef LABEL_MANAGER__SRV__DETAIL__GET_LABEL_GROUPS__BUILDER_HPP_
#define LABEL_MANAGER__SRV__DETAIL__GET_LABEL_GROUPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "label_manager/srv/detail/get_label_groups__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_GetLabelGroups_Request_uuid
{
public:
  Init_GetLabelGroups_Request_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::label_manager::srv::GetLabelGroups_Request uuid(::label_manager::srv::GetLabelGroups_Request::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::GetLabelGroups_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::GetLabelGroups_Request>()
{
  return label_manager::srv::builder::Init_GetLabelGroups_Request_uuid();
}

}  // namespace label_manager


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_GetLabelGroups_Response_labels
{
public:
  Init_GetLabelGroups_Response_labels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::label_manager::srv::GetLabelGroups_Response labels(::label_manager::srv::GetLabelGroups_Response::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::GetLabelGroups_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::GetLabelGroups_Response>()
{
  return label_manager::srv::builder::Init_GetLabelGroups_Response_labels();
}

}  // namespace label_manager


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_GetLabelGroups_Event_response
{
public:
  explicit Init_GetLabelGroups_Event_response(::label_manager::srv::GetLabelGroups_Event & msg)
  : msg_(msg)
  {}
  ::label_manager::srv::GetLabelGroups_Event response(::label_manager::srv::GetLabelGroups_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::GetLabelGroups_Event msg_;
};

class Init_GetLabelGroups_Event_request
{
public:
  explicit Init_GetLabelGroups_Event_request(::label_manager::srv::GetLabelGroups_Event & msg)
  : msg_(msg)
  {}
  Init_GetLabelGroups_Event_response request(::label_manager::srv::GetLabelGroups_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLabelGroups_Event_response(msg_);
  }

private:
  ::label_manager::srv::GetLabelGroups_Event msg_;
};

class Init_GetLabelGroups_Event_info
{
public:
  Init_GetLabelGroups_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLabelGroups_Event_request info(::label_manager::srv::GetLabelGroups_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLabelGroups_Event_request(msg_);
  }

private:
  ::label_manager::srv::GetLabelGroups_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::GetLabelGroups_Event>()
{
  return label_manager::srv::builder::Init_GetLabelGroups_Event_info();
}

}  // namespace label_manager

#endif  // LABEL_MANAGER__SRV__DETAIL__GET_LABEL_GROUPS__BUILDER_HPP_
