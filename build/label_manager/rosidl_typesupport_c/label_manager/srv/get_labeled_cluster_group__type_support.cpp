// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "label_manager/srv/detail/get_labeled_cluster_group__struct.h"
#include "label_manager/srv/detail/get_labeled_cluster_group__type_support.h"
#include "label_manager/srv/detail/get_labeled_cluster_group__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace label_manager
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLabeledClusterGroup_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLabeledClusterGroup_Request_type_support_ids_t;

static const _GetLabeledClusterGroup_Request_type_support_ids_t _GetLabeledClusterGroup_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLabeledClusterGroup_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLabeledClusterGroup_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLabeledClusterGroup_Request_type_support_symbol_names_t _GetLabeledClusterGroup_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, GetLabeledClusterGroup_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Request)),
  }
};

typedef struct _GetLabeledClusterGroup_Request_type_support_data_t
{
  void * data[2];
} _GetLabeledClusterGroup_Request_type_support_data_t;

static _GetLabeledClusterGroup_Request_type_support_data_t _GetLabeledClusterGroup_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLabeledClusterGroup_Request_message_typesupport_map = {
  2,
  "label_manager",
  &_GetLabeledClusterGroup_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetLabeledClusterGroup_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetLabeledClusterGroup_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLabeledClusterGroup_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLabeledClusterGroup_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &label_manager__srv__GetLabeledClusterGroup_Request__get_type_hash,
  &label_manager__srv__GetLabeledClusterGroup_Request__get_type_description,
  &label_manager__srv__GetLabeledClusterGroup_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, GetLabeledClusterGroup_Request)() {
  return &::label_manager::srv::rosidl_typesupport_c::GetLabeledClusterGroup_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__struct.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__type_support.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace label_manager
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLabeledClusterGroup_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLabeledClusterGroup_Response_type_support_ids_t;

static const _GetLabeledClusterGroup_Response_type_support_ids_t _GetLabeledClusterGroup_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLabeledClusterGroup_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLabeledClusterGroup_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLabeledClusterGroup_Response_type_support_symbol_names_t _GetLabeledClusterGroup_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, GetLabeledClusterGroup_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Response)),
  }
};

typedef struct _GetLabeledClusterGroup_Response_type_support_data_t
{
  void * data[2];
} _GetLabeledClusterGroup_Response_type_support_data_t;

static _GetLabeledClusterGroup_Response_type_support_data_t _GetLabeledClusterGroup_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLabeledClusterGroup_Response_message_typesupport_map = {
  2,
  "label_manager",
  &_GetLabeledClusterGroup_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetLabeledClusterGroup_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetLabeledClusterGroup_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLabeledClusterGroup_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLabeledClusterGroup_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &label_manager__srv__GetLabeledClusterGroup_Response__get_type_hash,
  &label_manager__srv__GetLabeledClusterGroup_Response__get_type_description,
  &label_manager__srv__GetLabeledClusterGroup_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, GetLabeledClusterGroup_Response)() {
  return &::label_manager::srv::rosidl_typesupport_c::GetLabeledClusterGroup_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__struct.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__type_support.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace label_manager
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLabeledClusterGroup_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLabeledClusterGroup_Event_type_support_ids_t;

static const _GetLabeledClusterGroup_Event_type_support_ids_t _GetLabeledClusterGroup_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLabeledClusterGroup_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLabeledClusterGroup_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLabeledClusterGroup_Event_type_support_symbol_names_t _GetLabeledClusterGroup_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, GetLabeledClusterGroup_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Event)),
  }
};

typedef struct _GetLabeledClusterGroup_Event_type_support_data_t
{
  void * data[2];
} _GetLabeledClusterGroup_Event_type_support_data_t;

static _GetLabeledClusterGroup_Event_type_support_data_t _GetLabeledClusterGroup_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLabeledClusterGroup_Event_message_typesupport_map = {
  2,
  "label_manager",
  &_GetLabeledClusterGroup_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetLabeledClusterGroup_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetLabeledClusterGroup_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLabeledClusterGroup_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLabeledClusterGroup_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &label_manager__srv__GetLabeledClusterGroup_Event__get_type_hash,
  &label_manager__srv__GetLabeledClusterGroup_Event__get_type_description,
  &label_manager__srv__GetLabeledClusterGroup_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, GetLabeledClusterGroup_Event)() {
  return &::label_manager::srv::rosidl_typesupport_c::GetLabeledClusterGroup_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace label_manager
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetLabeledClusterGroup_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLabeledClusterGroup_type_support_ids_t;

static const _GetLabeledClusterGroup_type_support_ids_t _GetLabeledClusterGroup_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLabeledClusterGroup_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLabeledClusterGroup_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLabeledClusterGroup_type_support_symbol_names_t _GetLabeledClusterGroup_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, GetLabeledClusterGroup)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup)),
  }
};

typedef struct _GetLabeledClusterGroup_type_support_data_t
{
  void * data[2];
} _GetLabeledClusterGroup_type_support_data_t;

static _GetLabeledClusterGroup_type_support_data_t _GetLabeledClusterGroup_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLabeledClusterGroup_service_typesupport_map = {
  2,
  "label_manager",
  &_GetLabeledClusterGroup_service_typesupport_ids.typesupport_identifier[0],
  &_GetLabeledClusterGroup_service_typesupport_symbol_names.symbol_name[0],
  &_GetLabeledClusterGroup_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetLabeledClusterGroup_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLabeledClusterGroup_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetLabeledClusterGroup_Request_message_type_support_handle,
  &GetLabeledClusterGroup_Response_message_type_support_handle,
  &GetLabeledClusterGroup_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    label_manager,
    srv,
    GetLabeledClusterGroup
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    label_manager,
    srv,
    GetLabeledClusterGroup
  ),
  &label_manager__srv__GetLabeledClusterGroup__get_type_hash,
  &label_manager__srv__GetLabeledClusterGroup__get_type_description,
  &label_manager__srv__GetLabeledClusterGroup__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, GetLabeledClusterGroup)() {
  return &::label_manager::srv::rosidl_typesupport_c::GetLabeledClusterGroup_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
