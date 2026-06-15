// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/get_labeled_cluster_group.h"


#ifndef LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__TYPE_SUPPORT_H_
#define LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "label_manager/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  label_manager,
  srv,
  GetLabeledClusterGroup_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  label_manager,
  srv,
  GetLabeledClusterGroup_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  label_manager,
  srv,
  GetLabeledClusterGroup_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  label_manager,
  srv,
  GetLabeledClusterGroup
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_label_manager
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  label_manager,
  srv,
  GetLabeledClusterGroup
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_label_manager
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  label_manager,
  srv,
  GetLabeledClusterGroup
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__TYPE_SUPPORT_H_
