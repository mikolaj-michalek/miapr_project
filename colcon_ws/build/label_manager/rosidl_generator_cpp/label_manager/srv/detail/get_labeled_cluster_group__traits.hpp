// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/get_labeled_cluster_group.hpp"


#ifndef LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__TRAITS_HPP_
#define LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "label_manager/srv/detail/get_labeled_cluster_group__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace label_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLabeledClusterGroup_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: uuid
  {
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << ", ";
  }

  // member: label_group
  {
    out << "label_group: ";
    rosidl_generator_traits::value_to_yaml(msg.label_group, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLabeledClusterGroup_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << "\n";
  }

  // member: label_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label_group: ";
    rosidl_generator_traits::value_to_yaml(msg.label_group, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLabeledClusterGroup_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace label_manager

namespace rosidl_generator_traits
{

[[deprecated("use label_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const label_manager::srv::GetLabeledClusterGroup_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  label_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use label_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const label_manager::srv::GetLabeledClusterGroup_Request & msg)
{
  return label_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<label_manager::srv::GetLabeledClusterGroup_Request>()
{
  return "label_manager::srv::GetLabeledClusterGroup_Request";
}

template<>
inline const char * name<label_manager::srv::GetLabeledClusterGroup_Request>()
{
  return "label_manager/srv/GetLabeledClusterGroup_Request";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabeledClusterGroup_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<label_manager::srv::GetLabeledClusterGroup_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<label_manager::srv::GetLabeledClusterGroup_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'clusters'
#include "mesh_msgs/msg/detail/mesh_face_cluster__traits.hpp"

namespace label_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLabeledClusterGroup_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: clusters
  {
    if (msg.clusters.size() == 0) {
      out << "clusters: []";
    } else {
      out << "clusters: [";
      size_t pending_items = msg.clusters.size();
      for (auto item : msg.clusters) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLabeledClusterGroup_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clusters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.clusters.size() == 0) {
      out << "clusters: []\n";
    } else {
      out << "clusters:\n";
      for (auto item : msg.clusters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLabeledClusterGroup_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace label_manager

namespace rosidl_generator_traits
{

[[deprecated("use label_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const label_manager::srv::GetLabeledClusterGroup_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  label_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use label_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const label_manager::srv::GetLabeledClusterGroup_Response & msg)
{
  return label_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<label_manager::srv::GetLabeledClusterGroup_Response>()
{
  return "label_manager::srv::GetLabeledClusterGroup_Response";
}

template<>
inline const char * name<label_manager::srv::GetLabeledClusterGroup_Response>()
{
  return "label_manager/srv/GetLabeledClusterGroup_Response";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabeledClusterGroup_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<label_manager::srv::GetLabeledClusterGroup_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<label_manager::srv::GetLabeledClusterGroup_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace label_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLabeledClusterGroup_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLabeledClusterGroup_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLabeledClusterGroup_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace label_manager

namespace rosidl_generator_traits
{

[[deprecated("use label_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const label_manager::srv::GetLabeledClusterGroup_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  label_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use label_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const label_manager::srv::GetLabeledClusterGroup_Event & msg)
{
  return label_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<label_manager::srv::GetLabeledClusterGroup_Event>()
{
  return "label_manager::srv::GetLabeledClusterGroup_Event";
}

template<>
inline const char * name<label_manager::srv::GetLabeledClusterGroup_Event>()
{
  return "label_manager/srv/GetLabeledClusterGroup_Event";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabeledClusterGroup_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<label_manager::srv::GetLabeledClusterGroup_Event>
  : std::integral_constant<bool, has_bounded_size<label_manager::srv::GetLabeledClusterGroup_Request>::value && has_bounded_size<label_manager::srv::GetLabeledClusterGroup_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<label_manager::srv::GetLabeledClusterGroup_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<label_manager::srv::GetLabeledClusterGroup>()
{
  return "label_manager::srv::GetLabeledClusterGroup";
}

template<>
inline const char * name<label_manager::srv::GetLabeledClusterGroup>()
{
  return "label_manager/srv/GetLabeledClusterGroup";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabeledClusterGroup>
  : std::integral_constant<
    bool,
    has_fixed_size<label_manager::srv::GetLabeledClusterGroup_Request>::value &&
    has_fixed_size<label_manager::srv::GetLabeledClusterGroup_Response>::value
  >
{
};

template<>
struct has_bounded_size<label_manager::srv::GetLabeledClusterGroup>
  : std::integral_constant<
    bool,
    has_bounded_size<label_manager::srv::GetLabeledClusterGroup_Request>::value &&
    has_bounded_size<label_manager::srv::GetLabeledClusterGroup_Response>::value
  >
{
};

template<>
struct is_service<label_manager::srv::GetLabeledClusterGroup>
  : std::true_type
{
};

template<>
struct is_service_request<label_manager::srv::GetLabeledClusterGroup_Request>
  : std::true_type
{
};

template<>
struct is_service_response<label_manager::srv::GetLabeledClusterGroup_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__TRAITS_HPP_
