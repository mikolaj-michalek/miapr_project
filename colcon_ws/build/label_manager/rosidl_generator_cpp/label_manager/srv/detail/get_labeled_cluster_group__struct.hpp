// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/get_labeled_cluster_group.hpp"


#ifndef LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__STRUCT_HPP_
#define LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Request __attribute__((deprecated))
#else
# define DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Request __declspec(deprecated)
#endif

namespace label_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLabeledClusterGroup_Request_
{
  using Type = GetLabeledClusterGroup_Request_<ContainerAllocator>;

  explicit GetLabeledClusterGroup_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = "";
      this->label_group = "";
    }
  }

  explicit GetLabeledClusterGroup_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_alloc),
    label_group(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = "";
      this->label_group = "";
    }
  }

  // field types and members
  using _uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uuid_type uuid;
  using _label_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_group_type label_group;

  // setters for named parameter idiom
  Type & set__uuid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__label_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label_group = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Request
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Request
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLabeledClusterGroup_Request_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->label_group != other.label_group) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLabeledClusterGroup_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLabeledClusterGroup_Request_

// alias to use template instance with default allocator
using GetLabeledClusterGroup_Request =
  label_manager::srv::GetLabeledClusterGroup_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace label_manager


// Include directives for member types
// Member 'clusters'
#include "mesh_msgs/msg/detail/mesh_face_cluster__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Response __attribute__((deprecated))
#else
# define DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Response __declspec(deprecated)
#endif

namespace label_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLabeledClusterGroup_Response_
{
  using Type = GetLabeledClusterGroup_Response_<ContainerAllocator>;

  explicit GetLabeledClusterGroup_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetLabeledClusterGroup_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _clusters_type =
    std::vector<mesh_msgs::msg::MeshFaceCluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mesh_msgs::msg::MeshFaceCluster_<ContainerAllocator>>>;
  _clusters_type clusters;

  // setters for named parameter idiom
  Type & set__clusters(
    const std::vector<mesh_msgs::msg::MeshFaceCluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mesh_msgs::msg::MeshFaceCluster_<ContainerAllocator>>> & _arg)
  {
    this->clusters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Response
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Response
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLabeledClusterGroup_Response_ & other) const
  {
    if (this->clusters != other.clusters) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLabeledClusterGroup_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLabeledClusterGroup_Response_

// alias to use template instance with default allocator
using GetLabeledClusterGroup_Response =
  label_manager::srv::GetLabeledClusterGroup_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace label_manager


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Event __attribute__((deprecated))
#else
# define DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Event __declspec(deprecated)
#endif

namespace label_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLabeledClusterGroup_Event_
{
  using Type = GetLabeledClusterGroup_Event_<ContainerAllocator>;

  explicit GetLabeledClusterGroup_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetLabeledClusterGroup_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<label_manager::srv::GetLabeledClusterGroup_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<label_manager::srv::GetLabeledClusterGroup_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Event
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__label_manager__srv__GetLabeledClusterGroup_Event
    std::shared_ptr<label_manager::srv::GetLabeledClusterGroup_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLabeledClusterGroup_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLabeledClusterGroup_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLabeledClusterGroup_Event_

// alias to use template instance with default allocator
using GetLabeledClusterGroup_Event =
  label_manager::srv::GetLabeledClusterGroup_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace label_manager

namespace label_manager
{

namespace srv
{

struct GetLabeledClusterGroup
{
  using Request = label_manager::srv::GetLabeledClusterGroup_Request;
  using Response = label_manager::srv::GetLabeledClusterGroup_Response;
  using Event = label_manager::srv::GetLabeledClusterGroup_Event;
};

}  // namespace srv

}  // namespace label_manager

#endif  // LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__STRUCT_HPP_
