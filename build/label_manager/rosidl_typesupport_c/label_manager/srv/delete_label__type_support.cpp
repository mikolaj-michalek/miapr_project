// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from label_manager:srv/DeleteLabel.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "label_manager/srv/detail/delete_label__struct.h"
#include "label_manager/srv/detail/delete_label__type_support.h"
#include "label_manager/srv/detail/delete_label__functions.h"
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

typedef struct _DeleteLabel_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteLabel_Request_type_support_ids_t;

static const _DeleteLabel_Request_type_support_ids_t _DeleteLabel_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeleteLabel_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteLabel_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteLabel_Request_type_support_symbol_names_t _DeleteLabel_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, DeleteLabel_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, DeleteLabel_Request)),
  }
};

typedef struct _DeleteLabel_Request_type_support_data_t
{
  void * data[2];
} _DeleteLabel_Request_type_support_data_t;

static _DeleteLabel_Request_type_support_data_t _DeleteLabel_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteLabel_Request_message_typesupport_map = {
  2,
  "label_manager",
  &_DeleteLabel_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteLabel_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteLabel_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteLabel_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteLabel_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &label_manager__srv__DeleteLabel_Request__get_type_hash,
  &label_manager__srv__DeleteLabel_Request__get_type_description,
  &label_manager__srv__DeleteLabel_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, DeleteLabel_Request)() {
  return &::label_manager::srv::rosidl_typesupport_c::DeleteLabel_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "label_manager/srv/detail/delete_label__struct.h"
// already included above
// #include "label_manager/srv/detail/delete_label__type_support.h"
// already included above
// #include "label_manager/srv/detail/delete_label__functions.h"
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

typedef struct _DeleteLabel_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteLabel_Response_type_support_ids_t;

static const _DeleteLabel_Response_type_support_ids_t _DeleteLabel_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeleteLabel_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteLabel_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteLabel_Response_type_support_symbol_names_t _DeleteLabel_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, DeleteLabel_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, DeleteLabel_Response)),
  }
};

typedef struct _DeleteLabel_Response_type_support_data_t
{
  void * data[2];
} _DeleteLabel_Response_type_support_data_t;

static _DeleteLabel_Response_type_support_data_t _DeleteLabel_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteLabel_Response_message_typesupport_map = {
  2,
  "label_manager",
  &_DeleteLabel_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteLabel_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteLabel_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteLabel_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteLabel_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &label_manager__srv__DeleteLabel_Response__get_type_hash,
  &label_manager__srv__DeleteLabel_Response__get_type_description,
  &label_manager__srv__DeleteLabel_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, DeleteLabel_Response)() {
  return &::label_manager::srv::rosidl_typesupport_c::DeleteLabel_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "label_manager/srv/detail/delete_label__struct.h"
// already included above
// #include "label_manager/srv/detail/delete_label__type_support.h"
// already included above
// #include "label_manager/srv/detail/delete_label__functions.h"
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

typedef struct _DeleteLabel_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteLabel_Event_type_support_ids_t;

static const _DeleteLabel_Event_type_support_ids_t _DeleteLabel_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeleteLabel_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteLabel_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteLabel_Event_type_support_symbol_names_t _DeleteLabel_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, DeleteLabel_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, DeleteLabel_Event)),
  }
};

typedef struct _DeleteLabel_Event_type_support_data_t
{
  void * data[2];
} _DeleteLabel_Event_type_support_data_t;

static _DeleteLabel_Event_type_support_data_t _DeleteLabel_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteLabel_Event_message_typesupport_map = {
  2,
  "label_manager",
  &_DeleteLabel_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteLabel_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteLabel_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteLabel_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteLabel_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &label_manager__srv__DeleteLabel_Event__get_type_hash,
  &label_manager__srv__DeleteLabel_Event__get_type_description,
  &label_manager__srv__DeleteLabel_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, DeleteLabel_Event)() {
  return &::label_manager::srv::rosidl_typesupport_c::DeleteLabel_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "label_manager/srv/detail/delete_label__type_support.h"
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
typedef struct _DeleteLabel_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteLabel_type_support_ids_t;

static const _DeleteLabel_type_support_ids_t _DeleteLabel_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeleteLabel_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteLabel_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteLabel_type_support_symbol_names_t _DeleteLabel_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, label_manager, srv, DeleteLabel)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, DeleteLabel)),
  }
};

typedef struct _DeleteLabel_type_support_data_t
{
  void * data[2];
} _DeleteLabel_type_support_data_t;

static _DeleteLabel_type_support_data_t _DeleteLabel_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteLabel_service_typesupport_map = {
  2,
  "label_manager",
  &_DeleteLabel_service_typesupport_ids.typesupport_identifier[0],
  &_DeleteLabel_service_typesupport_symbol_names.symbol_name[0],
  &_DeleteLabel_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DeleteLabel_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteLabel_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DeleteLabel_Request_message_type_support_handle,
  &DeleteLabel_Response_message_type_support_handle,
  &DeleteLabel_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    label_manager,
    srv,
    DeleteLabel
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    label_manager,
    srv,
    DeleteLabel
  ),
  &label_manager__srv__DeleteLabel__get_type_hash,
  &label_manager__srv__DeleteLabel__get_type_description,
  &label_manager__srv__DeleteLabel__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace label_manager

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, label_manager, srv, DeleteLabel)() {
  return &::label_manager::srv::rosidl_typesupport_c::DeleteLabel_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
