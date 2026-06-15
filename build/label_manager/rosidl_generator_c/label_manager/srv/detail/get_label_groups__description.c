// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from label_manager:srv/GetLabelGroups.idl
// generated code does not contain a copyright notice

#include "label_manager/srv/detail/get_label_groups__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabelGroups__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x6f, 0x87, 0x5d, 0x07, 0x7c, 0x45, 0xd4,
      0x36, 0x11, 0x94, 0x81, 0x8b, 0x91, 0xa1, 0x0c,
      0x22, 0x27, 0x03, 0xc1, 0x25, 0x6c, 0x8f, 0x5e,
      0x0b, 0x8d, 0xfe, 0x1b, 0xa1, 0xed, 0x38, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabelGroups_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0xf7, 0x13, 0x7b, 0x66, 0xc8, 0x5d, 0xd7,
      0xb5, 0xb8, 0xde, 0x7a, 0x68, 0x67, 0xb6, 0x98,
      0x4a, 0xd6, 0xec, 0x43, 0x94, 0x0d, 0x3c, 0xdb,
      0xdf, 0x4f, 0x98, 0x0e, 0x4b, 0xfd, 0x9e, 0xa5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabelGroups_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0x78, 0x0d, 0x33, 0xfe, 0x3d, 0x4b, 0xa8,
      0x83, 0xfa, 0x8d, 0xee, 0x52, 0xad, 0x5c, 0x62,
      0x14, 0x7c, 0xa5, 0xd6, 0x14, 0x52, 0x14, 0x55,
      0xae, 0x13, 0x3a, 0x38, 0x79, 0x86, 0xd2, 0x9c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_label_manager
const rosidl_type_hash_t *
label_manager__srv__GetLabelGroups_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0xe9, 0x38, 0x68, 0x3c, 0x17, 0xc7, 0x2a,
      0x3d, 0x66, 0x96, 0x61, 0xb2, 0xb7, 0x8e, 0xfb,
      0xbb, 0x06, 0x75, 0xa9, 0xca, 0xa6, 0xaf, 0xe7,
      0x83, 0x98, 0x7e, 0x33, 0xeb, 0x78, 0x08, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char label_manager__srv__GetLabelGroups__TYPE_NAME[] = "label_manager/srv/GetLabelGroups";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char label_manager__srv__GetLabelGroups_Event__TYPE_NAME[] = "label_manager/srv/GetLabelGroups_Event";
static char label_manager__srv__GetLabelGroups_Request__TYPE_NAME[] = "label_manager/srv/GetLabelGroups_Request";
static char label_manager__srv__GetLabelGroups_Response__TYPE_NAME[] = "label_manager/srv/GetLabelGroups_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char label_manager__srv__GetLabelGroups__FIELD_NAME__request_message[] = "request_message";
static char label_manager__srv__GetLabelGroups__FIELD_NAME__response_message[] = "response_message";
static char label_manager__srv__GetLabelGroups__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabelGroups__FIELDS[] = {
  {
    {label_manager__srv__GetLabelGroups__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {label_manager__srv__GetLabelGroups_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {label_manager__srv__GetLabelGroups_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {label_manager__srv__GetLabelGroups_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription label_manager__srv__GetLabelGroups__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
label_manager__srv__GetLabelGroups__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabelGroups__TYPE_NAME, 32, 32},
      {label_manager__srv__GetLabelGroups__FIELDS, 3, 3},
    },
    {label_manager__srv__GetLabelGroups__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = label_manager__srv__GetLabelGroups_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = label_manager__srv__GetLabelGroups_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = label_manager__srv__GetLabelGroups_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char label_manager__srv__GetLabelGroups_Request__FIELD_NAME__uuid[] = "uuid";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabelGroups_Request__FIELDS[] = {
  {
    {label_manager__srv__GetLabelGroups_Request__FIELD_NAME__uuid, 4, 4},
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
label_manager__srv__GetLabelGroups_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabelGroups_Request__TYPE_NAME, 40, 40},
      {label_manager__srv__GetLabelGroups_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char label_manager__srv__GetLabelGroups_Response__FIELD_NAME__labels[] = "labels";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabelGroups_Response__FIELDS[] = {
  {
    {label_manager__srv__GetLabelGroups_Response__FIELD_NAME__labels, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
label_manager__srv__GetLabelGroups_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabelGroups_Response__TYPE_NAME, 41, 41},
      {label_manager__srv__GetLabelGroups_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char label_manager__srv__GetLabelGroups_Event__FIELD_NAME__info[] = "info";
static char label_manager__srv__GetLabelGroups_Event__FIELD_NAME__request[] = "request";
static char label_manager__srv__GetLabelGroups_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field label_manager__srv__GetLabelGroups_Event__FIELDS[] = {
  {
    {label_manager__srv__GetLabelGroups_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {label_manager__srv__GetLabelGroups_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {label_manager__srv__GetLabelGroups_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription label_manager__srv__GetLabelGroups_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {label_manager__srv__GetLabelGroups_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
label_manager__srv__GetLabelGroups_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {label_manager__srv__GetLabelGroups_Event__TYPE_NAME, 38, 38},
      {label_manager__srv__GetLabelGroups_Event__FIELDS, 3, 3},
    },
    {label_manager__srv__GetLabelGroups_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = label_manager__srv__GetLabelGroups_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = label_manager__srv__GetLabelGroups_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string uuid\n"
  "---\n"
  "string[] labels";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabelGroups__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabelGroups__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabelGroups_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabelGroups_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabelGroups_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabelGroups_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
label_manager__srv__GetLabelGroups_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {label_manager__srv__GetLabelGroups_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabelGroups__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabelGroups__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *label_manager__srv__GetLabelGroups_Event__get_individual_type_description_source(NULL);
    sources[3] = *label_manager__srv__GetLabelGroups_Request__get_individual_type_description_source(NULL);
    sources[4] = *label_manager__srv__GetLabelGroups_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabelGroups_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabelGroups_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabelGroups_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabelGroups_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
label_manager__srv__GetLabelGroups_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *label_manager__srv__GetLabelGroups_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *label_manager__srv__GetLabelGroups_Request__get_individual_type_description_source(NULL);
    sources[3] = *label_manager__srv__GetLabelGroups_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
