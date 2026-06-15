// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from label_manager:srv/GetLabelGroups.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/get_label_groups.hpp"


#ifndef LABEL_MANAGER__SRV__DETAIL__GET_LABEL_GROUPS__TRAITS_HPP_
#define LABEL_MANAGER__SRV__DETAIL__GET_LABEL_GROUPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "label_manager/srv/detail/get_label_groups__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace label_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLabelGroups_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: uuid
  {
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLabelGroups_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLabelGroups_Request & msg, bool use_flow_style = false)
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
  const label_manager::srv::GetLabelGroups_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  label_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use label_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const label_manager::srv::GetLabelGroups_Request & msg)
{
  return label_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<label_manager::srv::GetLabelGroups_Request>()
{
  return "label_manager::srv::GetLabelGroups_Request";
}

template<>
inline const char * name<label_manager::srv::GetLabelGroups_Request>()
{
  return "label_manager/srv/GetLabelGroups_Request";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabelGroups_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<label_manager::srv::GetLabelGroups_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<label_manager::srv::GetLabelGroups_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace label_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLabelGroups_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: labels
  {
    if (msg.labels.size() == 0) {
      out << "labels: []";
    } else {
      out << "labels: [";
      size_t pending_items = msg.labels.size();
      for (auto item : msg.labels) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GetLabelGroups_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels.size() == 0) {
      out << "labels: []\n";
    } else {
      out << "labels:\n";
      for (auto item : msg.labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLabelGroups_Response & msg, bool use_flow_style = false)
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
  const label_manager::srv::GetLabelGroups_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  label_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use label_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const label_manager::srv::GetLabelGroups_Response & msg)
{
  return label_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<label_manager::srv::GetLabelGroups_Response>()
{
  return "label_manager::srv::GetLabelGroups_Response";
}

template<>
inline const char * name<label_manager::srv::GetLabelGroups_Response>()
{
  return "label_manager/srv/GetLabelGroups_Response";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabelGroups_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<label_manager::srv::GetLabelGroups_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<label_manager::srv::GetLabelGroups_Response>
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
  const GetLabelGroups_Event & msg,
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
  const GetLabelGroups_Event & msg,
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

inline std::string to_yaml(const GetLabelGroups_Event & msg, bool use_flow_style = false)
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
  const label_manager::srv::GetLabelGroups_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  label_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use label_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const label_manager::srv::GetLabelGroups_Event & msg)
{
  return label_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<label_manager::srv::GetLabelGroups_Event>()
{
  return "label_manager::srv::GetLabelGroups_Event";
}

template<>
inline const char * name<label_manager::srv::GetLabelGroups_Event>()
{
  return "label_manager/srv/GetLabelGroups_Event";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabelGroups_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<label_manager::srv::GetLabelGroups_Event>
  : std::integral_constant<bool, has_bounded_size<label_manager::srv::GetLabelGroups_Request>::value && has_bounded_size<label_manager::srv::GetLabelGroups_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<label_manager::srv::GetLabelGroups_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<label_manager::srv::GetLabelGroups>()
{
  return "label_manager::srv::GetLabelGroups";
}

template<>
inline const char * name<label_manager::srv::GetLabelGroups>()
{
  return "label_manager/srv/GetLabelGroups";
}

template<>
struct has_fixed_size<label_manager::srv::GetLabelGroups>
  : std::integral_constant<
    bool,
    has_fixed_size<label_manager::srv::GetLabelGroups_Request>::value &&
    has_fixed_size<label_manager::srv::GetLabelGroups_Response>::value
  >
{
};

template<>
struct has_bounded_size<label_manager::srv::GetLabelGroups>
  : std::integral_constant<
    bool,
    has_bounded_size<label_manager::srv::GetLabelGroups_Request>::value &&
    has_bounded_size<label_manager::srv::GetLabelGroups_Response>::value
  >
{
};

template<>
struct is_service<label_manager::srv::GetLabelGroups>
  : std::true_type
{
};

template<>
struct is_service_request<label_manager::srv::GetLabelGroups_Request>
  : std::true_type
{
};

template<>
struct is_service_response<label_manager::srv::GetLabelGroups_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABEL_MANAGER__SRV__DETAIL__GET_LABEL_GROUPS__TRAITS_HPP_
