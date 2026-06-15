// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "label_manager/srv/get_labeled_cluster_group.h"


#ifndef LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__STRUCT_H_
#define LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uuid'
// Member 'label_group'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetLabeledClusterGroup in the package label_manager.
typedef struct label_manager__srv__GetLabeledClusterGroup_Request
{
  rosidl_runtime_c__String uuid;
  rosidl_runtime_c__String label_group;
} label_manager__srv__GetLabeledClusterGroup_Request;

// Struct for a sequence of label_manager__srv__GetLabeledClusterGroup_Request.
typedef struct label_manager__srv__GetLabeledClusterGroup_Request__Sequence
{
  label_manager__srv__GetLabeledClusterGroup_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} label_manager__srv__GetLabeledClusterGroup_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'clusters'
#include "mesh_msgs/msg/detail/mesh_face_cluster__struct.h"

/// Struct defined in srv/GetLabeledClusterGroup in the package label_manager.
typedef struct label_manager__srv__GetLabeledClusterGroup_Response
{
  mesh_msgs__msg__MeshFaceCluster__Sequence clusters;
} label_manager__srv__GetLabeledClusterGroup_Response;

// Struct for a sequence of label_manager__srv__GetLabeledClusterGroup_Response.
typedef struct label_manager__srv__GetLabeledClusterGroup_Response__Sequence
{
  label_manager__srv__GetLabeledClusterGroup_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} label_manager__srv__GetLabeledClusterGroup_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  label_manager__srv__GetLabeledClusterGroup_Event__request__MAX_SIZE = 1
};
// response
enum
{
  label_manager__srv__GetLabeledClusterGroup_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetLabeledClusterGroup in the package label_manager.
typedef struct label_manager__srv__GetLabeledClusterGroup_Event
{
  service_msgs__msg__ServiceEventInfo info;
  label_manager__srv__GetLabeledClusterGroup_Request__Sequence request;
  label_manager__srv__GetLabeledClusterGroup_Response__Sequence response;
} label_manager__srv__GetLabeledClusterGroup_Event;

// Struct for a sequence of label_manager__srv__GetLabeledClusterGroup_Event.
typedef struct label_manager__srv__GetLabeledClusterGroup_Event__Sequence
{
  label_manager__srv__GetLabeledClusterGroup_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} label_manager__srv__GetLabeledClusterGroup_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABEL_MANAGER__SRV__DETAIL__GET_LABELED_CLUSTER_GROUP__STRUCT_H_
