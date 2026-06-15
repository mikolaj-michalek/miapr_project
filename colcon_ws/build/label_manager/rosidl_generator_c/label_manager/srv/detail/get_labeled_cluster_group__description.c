// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from label_manager:srv/GetLabeledClusterGroup.idl
// generated code does not contain a copyright notice

#include "label_manager/srv/detail/get_labeled_cluster_group__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabeledClusterGroup__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0xba, 0x7f, 0x8e, 0x9e, 0x57, 0xf1, 0x63,
      0x74, 0xa1, 0x85, 0x08, 0xd5, 0xfc, 0x43, 0x8d,
      0xc1, 0xdf, 0x50, 0x4e, 0x2e, 0x77, 0x03, 0x74,
      0x99, 0x89, 0x65, 0xdc, 0x31, 0x51, 0x6c, 0xeb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabeledClusterGroup_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x4f, 0x88, 0xfc, 0x34, 0x18, 0x17, 0xcb,
      0x37, 0x1c, 0x28, 0x37, 0x65, 0x17, 0xa8, 0x7a,
      0x0c, 0x6f, 0x9e, 0x9a, 0x6f, 0x8f, 0xc1, 0x5c,
      0xfc, 0xa1, 0x3f, 0x1e, 0x36, 0xd6, 0xcc, 0x18,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabeledClusterGroup_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0xb0, 0x17, 0x89, 0xb5, 0x05, 0x30, 0xc3,
      0xc7, 0xda, 0xaf, 0xbe, 0x6e, 0x4a, 0x48, 0x20,
      0x0f, 0x19, 0x76, 0x6e, 0xd8, 0x8b, 0xe0, 0x61,
      0x1f, 0x11, 0x0d, 0xd7, 0x59, 0xea, 0x5c, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabeledClusterGroup_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x3a, 0x3a, 0x44, 0x41, 0xca, 0x45, 0xfb,
      0x72, 0x1d, 0x51, 0x6d, 0xec, 0xb9, 0x45, 0xef,
      0x2d, 0xc2, 0xbc, 0x31, 0x44, 0xf7, 0xef, 0x6a,
      0xcf, 0xdf, 0x37, 0xc1, 0x70, 0x8c, 0xe8, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "mesh_msgs/msg/detail/mesh_face_cluster__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mesh_msgs__msg__MeshFaceCluster__EXPECTED_HASH = {1, {
    0x92, 0x99, 0x60, 0xe1, 0x90, 0x62, 0x0d, 0x08,
    0x0c, 0x50, 0x43, 0xa8, 0xac, 0x49, 0xbd, 0xbc,
    0xb8, 0x8d, 0x4f, 0x4b, 0x1b, 0xa4, 0xf1, 0xd6,
    0x73, 0x3c, 0xef, 0xde, 0x7e, 0x34, 0x03, 0x98,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char label_manager__srv__GetLabeledClusterGroup__TYPE_NAME[] = "label_manager/srv/GetLabeledClusterGroup";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char label_manager__srv__GetLabeledClusterGroup_Event__TYPE_NAME[] = "label_manager/srv/GetLabeledClusterGroup_Event";
static char label_manager__srv__GetLabeledClusterGroup_Request__TYPE_NAME[] = "label_manager/srv/GetLabeledClusterGroup_Request";
static char label_manager__srv__GetLabeledClusterGroup_Response__TYPE_NAME[] = "label_manager/srv/GetLabeledClusterGroup_Response";
static char mesh_msgs__msg__MeshFaceCluster__TYPE_NAME[] = "mesh_msgs/msg/MeshFaceCluster";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char label_manager__srv__GetLabeledClusterGroup__FIELD_NAME__request_message[] = "request_message";
static char label_manager__srv__GetLabeledClusterGroup__FIELD_NAME__response_message[] = "response_message";
static char label_manager__srv__GetLabeledClusterGroup__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabeledClusterGroup__FIELDS[] = {
  {
    {label_manager__srv__GetLabeledClusterGroup__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {label_manager__srv__GetLabeledClusterGroup_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {label_manager__srv__GetLabeledClusterGroup_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {label_manager__srv__GetLabeledClusterGroup_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription label_manager__srv__GetLabeledClusterGroup__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {mesh_msgs__msg__MeshFaceCluster__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
label_manager__srv__GetLabeledClusterGroup__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabeledClusterGroup__TYPE_NAME, 40, 40},
      {label_manager__srv__GetLabeledClusterGroup__FIELDS, 3, 3},
    },
    {label_manager__srv__GetLabeledClusterGroup__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = label_manager__srv__GetLabeledClusterGroup_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = label_manager__srv__GetLabeledClusterGroup_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = label_manager__srv__GetLabeledClusterGroup_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mesh_msgs__msg__MeshFaceCluster__EXPECTED_HASH, mesh_msgs__msg__MeshFaceCluster__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = mesh_msgs__msg__MeshFaceCluster__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char label_manager__srv__GetLabeledClusterGroup_Request__FIELD_NAME__uuid[] = "uuid";
static char label_manager__srv__GetLabeledClusterGroup_Request__FIELD_NAME__label_group[] = "label_group";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabeledClusterGroup_Request__FIELDS[] = {
  {
    {label_manager__srv__GetLabeledClusterGroup_Request__FIELD_NAME__uuid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Request__FIELD_NAME__label_group, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
label_manager__srv__GetLabeledClusterGroup_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabeledClusterGroup_Request__TYPE_NAME, 48, 48},
      {label_manager__srv__GetLabeledClusterGroup_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char label_manager__srv__GetLabeledClusterGroup_Response__FIELD_NAME__clusters[] = "clusters";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabeledClusterGroup_Response__FIELDS[] = {
  {
    {label_manager__srv__GetLabeledClusterGroup_Response__FIELD_NAME__clusters, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mesh_msgs__msg__MeshFaceCluster__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription label_manager__srv__GetLabeledClusterGroup_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mesh_msgs__msg__MeshFaceCluster__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
label_manager__srv__GetLabeledClusterGroup_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabeledClusterGroup_Response__TYPE_NAME, 49, 49},
      {label_manager__srv__GetLabeledClusterGroup_Response__FIELDS, 1, 1},
    },
    {label_manager__srv__GetLabeledClusterGroup_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mesh_msgs__msg__MeshFaceCluster__EXPECTED_HASH, mesh_msgs__msg__MeshFaceCluster__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mesh_msgs__msg__MeshFaceCluster__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char label_manager__srv__GetLabeledClusterGroup_Event__FIELD_NAME__info[] = "info";
static char label_manager__srv__GetLabeledClusterGroup_Event__FIELD_NAME__request[] = "request";
static char label_manager__srv__GetLabeledClusterGroup_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabeledClusterGroup_Event__FIELDS[] = {
  {
    {label_manager__srv__GetLabeledClusterGroup_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {label_manager__srv__GetLabeledClusterGroup_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {label_manager__srv__GetLabeledClusterGroup_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription label_manager__srv__GetLabeledClusterGroup_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabeledClusterGroup_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {mesh_msgs__msg__MeshFaceCluster__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
label_manager__srv__GetLabeledClusterGroup_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabeledClusterGroup_Event__TYPE_NAME, 46, 46},
      {label_manager__srv__GetLabeledClusterGroup_Event__FIELDS, 3, 3},
    },
    {label_manager__srv__GetLabeledClusterGroup_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = label_manager__srv__GetLabeledClusterGroup_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = label_manager__srv__GetLabeledClusterGroup_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mesh_msgs__msg__MeshFaceCluster__EXPECTED_HASH, mesh_msgs__msg__MeshFaceCluster__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mesh_msgs__msg__MeshFaceCluster__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string uuid\n"
  "string label_group\n"
  "---\n"
  "mesh_msgs/MeshFaceCluster[] clusters";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabeledClusterGroup__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabeledClusterGroup__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 72, 72},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabeledClusterGroup_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabeledClusterGroup_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabeledClusterGroup_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabeledClusterGroup_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabeledClusterGroup_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabeledClusterGroup_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabeledClusterGroup__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabeledClusterGroup__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *label_manager__srv__GetLabeledClusterGroup_Event__get_individual_type_description_source(NULL);
    sources[3] = *label_manager__srv__GetLabeledClusterGroup_Request__get_individual_type_description_source(NULL);
    sources[4] = *label_manager__srv__GetLabeledClusterGroup_Response__get_individual_type_description_source(NULL);
    sources[5] = *mesh_msgs__msg__MeshFaceCluster__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabeledClusterGroup_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabeledClusterGroup_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabeledClusterGroup_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabeledClusterGroup_Response__get_individual_type_description_source(NULL),
    sources[1] = *mesh_msgs__msg__MeshFaceCluster__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabeledClusterGroup_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabeledClusterGroup_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *label_manager__srv__GetLabeledClusterGroup_Request__get_individual_type_description_source(NULL);
    sources[3] = *label_manager__srv__GetLabeledClusterGroup_Response__get_individual_type_description_source(NULL);
    sources[4] = *mesh_msgs__msg__MeshFaceCluster__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
