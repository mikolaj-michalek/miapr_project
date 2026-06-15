// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from label_manager:srv/DeleteLabel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/delete_label.hpp"


#ifndef LABEL_MANAGER__SRV__DETAIL__DELETE_LABEL__BUILDER_HPP_
#define LABEL_MANAGER__SRV__DETAIL__DELETE_LABEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "label_manager/srv/detail/delete_label__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_DeleteLabel_Request_label
{
public:
  explicit Init_DeleteLabel_Request_label(::label_manager::srv::DeleteLabel_Request & msg)
  : msg_(msg)
  {}
  ::label_manager::srv::DeleteLabel_Request label(::label_manager::srv::DeleteLabel_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::DeleteLabel_Request msg_;
};

class Init_DeleteLabel_Request_uuid
{
public:
  Init_DeleteLabel_Request_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteLabel_Request_label uuid(::label_manager::srv::DeleteLabel_Request::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_DeleteLabel_Request_label(msg_);
  }

private:
  ::label_manager::srv::DeleteLabel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::DeleteLabel_Request>()
{
  return label_manager::srv::builder::Init_DeleteLabel_Request_uuid();
}

}  // namespace label_manager


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_DeleteLabel_Response_cluster
{
public:
  Init_DeleteLabel_Response_cluster()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::label_manager::srv::DeleteLabel_Response cluster(::label_manager::srv::DeleteLabel_Response::_cluster_type arg)
  {
    msg_.cluster = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::DeleteLabel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::DeleteLabel_Response>()
{
  return label_manager::srv::builder::Init_DeleteLabel_Response_cluster();
}

}  // namespace label_manager


namespace label_manager
{

namespace srv
{

namespace builder
{

class Init_DeleteLabel_Event_response
{
public:
  explicit Init_DeleteLabel_Event_response(::label_manager::srv::DeleteLabel_Event & msg)
  : msg_(msg)
  {}
  ::label_manager::srv::DeleteLabel_Event response(::label_manager::srv::DeleteLabel_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::label_manager::srv::DeleteLabel_Event msg_;
};

class Init_DeleteLabel_Event_request
{
public:
  explicit Init_DeleteLabel_Event_request(::label_manager::srv::DeleteLabel_Event & msg)
  : msg_(msg)
  {}
  Init_DeleteLabel_Event_response request(::label_manager::srv::DeleteLabel_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DeleteLabel_Event_response(msg_);
  }

private:
  ::label_manager::srv::DeleteLabel_Event msg_;
};

class Init_DeleteLabel_Event_info
{
public:
  Init_DeleteLabel_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteLabel_Event_request info(::label_manager::srv::DeleteLabel_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DeleteLabel_Event_request(msg_);
  }

private:
  ::label_manager::srv::DeleteLabel_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::label_manager::srv::DeleteLabel_Event>()
{
  return label_manager::srv::builder::Init_DeleteLabel_Event_info();
}

}  // namespace label_manager

#endif  // LABEL_MANAGER__SRV__DETAIL__DELETE_LABEL__BUILDER_HPP_
