// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "label_manager/srv/detail/get_labeled_cluster_group__rosidl_typesupport_introspection_c.h"
#include "label_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "label_manager/srv/detail/get_labeled_cluster_group__functions.h"
#include "label_manager/srv/detail/get_labeled_cluster_group__struct.h"


// Include directives for member types
// Member `uuid`
// Member `label_group`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  label_manager__srv__GetLabeledClusterGroup_Request__init(message_memory);
}

void label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_fini_function(void * message_memory)
{
  label_manager__srv__GetLabeledClusterGroup_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_member_array[2] = {
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(label_manager__srv__GetLabeledClusterGroup_Request, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(label_manager__srv__GetLabeledClusterGroup_Request, label_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_members = {
  "label_manager__srv",  // message namespace
  "GetLabeledClusterGroup_Request",  // message name
  2,  // number of fields
  sizeof(label_manager__srv__GetLabeledClusterGroup_Request),
  false,  // has_any_key_member_
  label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_member_array,  // message members
  label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_type_support_handle = {
  0,
  &label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_members,
  get_message_typesupport_handle_function,
  &label_manager__srv__GetLabeledClusterGroup_Request__get_type_hash,
  &label_manager__srv__GetLabeledClusterGroup_Request__get_type_description,
  &label_manager__srv__GetLabeledClusterGroup_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_label_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Request)() {
  if (!label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_type_support_handle.typesupport_identifier) {
    label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "label_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__functions.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__struct.h"


// Include directives for member types
// Member `clusters`
#include "mesh_msgs/msg/mesh_face_cluster.h"
// Member `clusters`
#include "mesh_msgs/msg/detail/mesh_face_cluster__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  label_manager__srv__GetLabeledClusterGroup_Response__init(message_memory);
}

void label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_fini_function(void * message_memory)
{
  label_manager__srv__GetLabeledClusterGroup_Response__fini(message_memory);
}

size_t label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__size_function__GetLabeledClusterGroup_Response__clusters(
  const void * untyped_member)
{
  const mesh_msgs__msg__MeshFaceCluster__Sequence * member =
    (const mesh_msgs__msg__MeshFaceCluster__Sequence *)(untyped_member);
  return member->size;
}

const void * label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Response__clusters(
  const void * untyped_member, size_t index)
{
  const mesh_msgs__msg__MeshFaceCluster__Sequence * member =
    (const mesh_msgs__msg__MeshFaceCluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void * label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Response__clusters(
  void * untyped_member, size_t index)
{
  mesh_msgs__msg__MeshFaceCluster__Sequence * member =
    (mesh_msgs__msg__MeshFaceCluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__fetch_function__GetLabeledClusterGroup_Response__clusters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mesh_msgs__msg__MeshFaceCluster * item =
    ((const mesh_msgs__msg__MeshFaceCluster *)
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Response__clusters(untyped_member, index));
  mesh_msgs__msg__MeshFaceCluster * value =
    (mesh_msgs__msg__MeshFaceCluster *)(untyped_value);
  *value = *item;
}

void label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__assign_function__GetLabeledClusterGroup_Response__clusters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mesh_msgs__msg__MeshFaceCluster * item =
    ((mesh_msgs__msg__MeshFaceCluster *)
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Response__clusters(untyped_member, index));
  const mesh_msgs__msg__MeshFaceCluster * value =
    (const mesh_msgs__msg__MeshFaceCluster *)(untyped_value);
  *item = *value;
}

bool label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__resize_function__GetLabeledClusterGroup_Response__clusters(
  void * untyped_member, size_t size)
{
  mesh_msgs__msg__MeshFaceCluster__Sequence * member =
    (mesh_msgs__msg__MeshFaceCluster__Sequence *)(untyped_member);
  mesh_msgs__msg__MeshFaceCluster__Sequence__fini(member);
  return mesh_msgs__msg__MeshFaceCluster__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_member_array[1] = {
  {
    "clusters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(label_manager__srv__GetLabeledClusterGroup_Response, clusters),  // bytes offset in struct
    NULL,  // default value
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__size_function__GetLabeledClusterGroup_Response__clusters,  // size() function pointer
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Response__clusters,  // get_const(index) function pointer
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Response__clusters,  // get(index) function pointer
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__fetch_function__GetLabeledClusterGroup_Response__clusters,  // fetch(index, &value) function pointer
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__assign_function__GetLabeledClusterGroup_Response__clusters,  // assign(index, value) function pointer
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__resize_function__GetLabeledClusterGroup_Response__clusters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_members = {
  "label_manager__srv",  // message namespace
  "GetLabeledClusterGroup_Response",  // message name
  1,  // number of fields
  sizeof(label_manager__srv__GetLabeledClusterGroup_Response),
  false,  // has_any_key_member_
  label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_member_array,  // message members
  label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_type_support_handle = {
  0,
  &label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_members,
  get_message_typesupport_handle_function,
  &label_manager__srv__GetLabeledClusterGroup_Response__get_type_hash,
  &label_manager__srv__GetLabeledClusterGroup_Response__get_type_description,
  &label_manager__srv__GetLabeledClusterGroup_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_label_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Response)() {
  label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mesh_msgs, msg, MeshFaceCluster)();
  if (!label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_type_support_handle.typesupport_identifier) {
    label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "label_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__functions.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "label_manager/srv/get_labeled_cluster_group.h"
// Member `request`
// Member `response`
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  label_manager__srv__GetLabeledClusterGroup_Event__init(message_memory);
}

void label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_fini_function(void * message_memory)
{
  label_manager__srv__GetLabeledClusterGroup_Event__fini(message_memory);
}

size_t label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__size_function__GetLabeledClusterGroup_Event__request(
  const void * untyped_member)
{
  const label_manager__srv__GetLabeledClusterGroup_Request__Sequence * member =
    (const label_manager__srv__GetLabeledClusterGroup_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Event__request(
  const void * untyped_member, size_t index)
{
  const label_manager__srv__GetLabeledClusterGroup_Request__Sequence * member =
    (const label_manager__srv__GetLabeledClusterGroup_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Event__request(
  void * untyped_member, size_t index)
{
  label_manager__srv__GetLabeledClusterGroup_Request__Sequence * member =
    (label_manager__srv__GetLabeledClusterGroup_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__fetch_function__GetLabeledClusterGroup_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const label_manager__srv__GetLabeledClusterGroup_Request * item =
    ((const label_manager__srv__GetLabeledClusterGroup_Request *)
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Event__request(untyped_member, index));
  label_manager__srv__GetLabeledClusterGroup_Request * value =
    (label_manager__srv__GetLabeledClusterGroup_Request *)(untyped_value);
  *value = *item;
}

void label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__assign_function__GetLabeledClusterGroup_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  label_manager__srv__GetLabeledClusterGroup_Request * item =
    ((label_manager__srv__GetLabeledClusterGroup_Request *)
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Event__request(untyped_member, index));
  const label_manager__srv__GetLabeledClusterGroup_Request * value =
    (const label_manager__srv__GetLabeledClusterGroup_Request *)(untyped_value);
  *item = *value;
}

bool label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__resize_function__GetLabeledClusterGroup_Event__request(
  void * untyped_member, size_t size)
{
  label_manager__srv__GetLabeledClusterGroup_Request__Sequence * member =
    (label_manager__srv__GetLabeledClusterGroup_Request__Sequence *)(untyped_member);
  label_manager__srv__GetLabeledClusterGroup_Request__Sequence__fini(member);
  return label_manager__srv__GetLabeledClusterGroup_Request__Sequence__init(member, size);
}

size_t label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__size_function__GetLabeledClusterGroup_Event__response(
  const void * untyped_member)
{
  const label_manager__srv__GetLabeledClusterGroup_Response__Sequence * member =
    (const label_manager__srv__GetLabeledClusterGroup_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Event__response(
  const void * untyped_member, size_t index)
{
  const label_manager__srv__GetLabeledClusterGroup_Response__Sequence * member =
    (const label_manager__srv__GetLabeledClusterGroup_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Event__response(
  void * untyped_member, size_t index)
{
  label_manager__srv__GetLabeledClusterGroup_Response__Sequence * member =
    (label_manager__srv__GetLabeledClusterGroup_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__fetch_function__GetLabeledClusterGroup_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const label_manager__srv__GetLabeledClusterGroup_Response * item =
    ((const label_manager__srv__GetLabeledClusterGroup_Response *)
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Event__response(untyped_member, index));
  label_manager__srv__GetLabeledClusterGroup_Response * value =
    (label_manager__srv__GetLabeledClusterGroup_Response *)(untyped_value);
  *value = *item;
}

void label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__assign_function__GetLabeledClusterGroup_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  label_manager__srv__GetLabeledClusterGroup_Response * item =
    ((label_manager__srv__GetLabeledClusterGroup_Response *)
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Event__response(untyped_member, index));
  const label_manager__srv__GetLabeledClusterGroup_Response * value =
    (const label_manager__srv__GetLabeledClusterGroup_Response *)(untyped_value);
  *item = *value;
}

bool label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__resize_function__GetLabeledClusterGroup_Event__response(
  void * untyped_member, size_t size)
{
  label_manager__srv__GetLabeledClusterGroup_Response__Sequence * member =
    (label_manager__srv__GetLabeledClusterGroup_Response__Sequence *)(untyped_member);
  label_manager__srv__GetLabeledClusterGroup_Response__Sequence__fini(member);
  return label_manager__srv__GetLabeledClusterGroup_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(label_manager__srv__GetLabeledClusterGroup_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(label_manager__srv__GetLabeledClusterGroup_Event, request),  // bytes offset in struct
    NULL,  // default value
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__size_function__GetLabeledClusterGroup_Event__request,  // size() function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Event__request,  // get_const(index) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Event__request,  // get(index) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__fetch_function__GetLabeledClusterGroup_Event__request,  // fetch(index, &value) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__assign_function__GetLabeledClusterGroup_Event__request,  // assign(index, value) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__resize_function__GetLabeledClusterGroup_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(label_manager__srv__GetLabeledClusterGroup_Event, response),  // bytes offset in struct
    NULL,  // default value
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__size_function__GetLabeledClusterGroup_Event__response,  // size() function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_const_function__GetLabeledClusterGroup_Event__response,  // get_const(index) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__get_function__GetLabeledClusterGroup_Event__response,  // get(index) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__fetch_function__GetLabeledClusterGroup_Event__response,  // fetch(index, &value) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__assign_function__GetLabeledClusterGroup_Event__response,  // assign(index, value) function pointer
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__resize_function__GetLabeledClusterGroup_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_members = {
  "label_manager__srv",  // message namespace
  "GetLabeledClusterGroup_Event",  // message name
  3,  // number of fields
  sizeof(label_manager__srv__GetLabeledClusterGroup_Event),
  false,  // has_any_key_member_
  label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_member_array,  // message members
  label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_type_support_handle = {
  0,
  &label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_members,
  get_message_typesupport_handle_function,
  &label_manager__srv__GetLabeledClusterGroup_Event__get_type_hash,
  &label_manager__srv__GetLabeledClusterGroup_Event__get_type_description,
  &label_manager__srv__GetLabeledClusterGroup_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_label_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Event)() {
  label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Request)();
  label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Response)();
  if (!label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_type_support_handle.typesupport_identifier) {
    label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "label_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "label_manager/srv/detail/get_labeled_cluster_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_service_members = {
  "label_manager__srv",  // service namespace
  "GetLabeledClusterGroup",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_type_support_handle,
  NULL,  // response message
  // label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_type_support_handle
  NULL  // event_message
  // label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_type_support_handle
};


static rosidl_service_type_support_t label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_service_type_support_handle = {
  0,
  &label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_service_members,
  get_service_typesupport_handle_function,
  &label_manager__srv__GetLabeledClusterGroup_Request__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Request_message_type_support_handle,
  &label_manager__srv__GetLabeledClusterGroup_Response__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Response_message_type_support_handle,
  &label_manager__srv__GetLabeledClusterGroup_Event__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_label_manager
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup)(void) {
  if (!label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_service_type_support_handle.typesupport_identifier) {
    label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, label_manager, srv, GetLabeledClusterGroup_Event)()->data;
  }

  return &label_manager__srv__detail__get_labeled_cluster_group__rosidl_typesupport_introspection_c__GetLabeledClusterGroup_service_type_support_handle;
}
