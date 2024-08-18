// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_service:srv/NavSatPoseBool.idl
// generated code does not contain a copyright notice

#include "custom_service/srv/detail/nav_sat_pose_bool__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_service
const rosidl_type_hash_t *
custom_service__srv__NavSatPoseBool__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xe2, 0x77, 0x48, 0xf6, 0xac, 0x0f, 0x82,
      0x78, 0x11, 0x28, 0x7b, 0xd9, 0x04, 0x25, 0xf0,
      0x59, 0x93, 0x38, 0xab, 0x04, 0x4e, 0x88, 0xb9,
      0x72, 0x23, 0x02, 0x13, 0x16, 0xef, 0xd3, 0xdb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_service
const rosidl_type_hash_t *
custom_service__srv__NavSatPoseBool_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0x6a, 0xfc, 0x48, 0x55, 0xd8, 0xd2, 0xf2,
      0x79, 0xba, 0xb0, 0x7f, 0x60, 0x32, 0x42, 0x15,
      0x63, 0x13, 0xfb, 0x8b, 0x59, 0x47, 0x9c, 0x5a,
      0x33, 0x91, 0x37, 0x1d, 0xd8, 0x20, 0x0e, 0x38,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_service
const rosidl_type_hash_t *
custom_service__srv__NavSatPoseBool_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0xdf, 0x26, 0x96, 0x57, 0x6a, 0x9b, 0xf8,
      0x7f, 0x96, 0x9b, 0x44, 0x58, 0xa9, 0x2e, 0x8c,
      0xcd, 0x04, 0xa2, 0x92, 0xbb, 0x58, 0x8d, 0xbb,
      0x13, 0xe6, 0x96, 0x34, 0xe1, 0x3e, 0xd7, 0x52,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_service
const rosidl_type_hash_t *
custom_service__srv__NavSatPoseBool_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x33, 0xad, 0xb1, 0x3a, 0xfa, 0xe6, 0xe5,
      0xf5, 0x28, 0x82, 0xaa, 0x59, 0x64, 0x29, 0x78,
      0xcf, 0x94, 0xd9, 0x7d, 0xd0, 0x43, 0xa5, 0x77,
      0x95, 0x82, 0x1e, 0xd5, 0xd4, 0x7e, 0x98, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "sensor_msgs/msg/detail/nav_sat_status__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "std_msgs/msg/detail/bool__functions.h"
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH = {1, {
    0x9a, 0x7c, 0x0f, 0xd2, 0x34, 0xb7, 0xf4, 0x5c,
    0x60, 0x98, 0x74, 0x5e, 0xcc, 0xcd, 0x77, 0x3c,
    0xa1, 0x08, 0x56, 0x70, 0xe6, 0x41, 0x07, 0x13,
    0x53, 0x97, 0xae, 0xe3, 0x1c, 0x02, 0xe1, 0xbb,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__NavSatStatus__EXPECTED_HASH = {1, {
    0xd1, 0xed, 0x3b, 0xef, 0xa6, 0x28, 0xe0, 0x95,
    0x71, 0xbd, 0x27, 0x3b, 0x88, 0x8b, 0xa1, 0xc1,
    0xfd, 0x18, 0x7c, 0x9a, 0x5e, 0x00, 0x06, 0xb3,
    0x85, 0xd7, 0xe5, 0xe9, 0x09, 0x5a, 0x32, 0x04,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Bool__EXPECTED_HASH = {1, {
    0xfe, 0xb9, 0x1e, 0x99, 0x5f, 0xf9, 0xeb, 0xd0,
    0x9c, 0x0c, 0xb3, 0xd2, 0xae, 0xd1, 0x8b, 0x11,
    0x07, 0x75, 0x85, 0x83, 0x9f, 0xb5, 0xdb, 0x80,
    0x19, 0x3b, 0x62, 0xd7, 0x45, 0x28, 0xf6, 0xc9,
  }};
#endif

static char custom_service__srv__NavSatPoseBool__TYPE_NAME[] = "custom_service/srv/NavSatPoseBool";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char custom_service__srv__NavSatPoseBool_Event__TYPE_NAME[] = "custom_service/srv/NavSatPoseBool_Event";
static char custom_service__srv__NavSatPoseBool_Request__TYPE_NAME[] = "custom_service/srv/NavSatPoseBool_Request";
static char custom_service__srv__NavSatPoseBool_Response__TYPE_NAME[] = "custom_service/srv/NavSatPoseBool_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseWithCovariance__TYPE_NAME[] = "geometry_msgs/msg/PoseWithCovariance";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char sensor_msgs__msg__NavSatStatus__TYPE_NAME[] = "sensor_msgs/msg/NavSatStatus";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Bool__TYPE_NAME[] = "std_msgs/msg/Bool";

// Define type names, field names, and default values
static char custom_service__srv__NavSatPoseBool__FIELD_NAME__request_message[] = "request_message";
static char custom_service__srv__NavSatPoseBool__FIELD_NAME__response_message[] = "response_message";
static char custom_service__srv__NavSatPoseBool__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field custom_service__srv__NavSatPoseBool__FIELDS[] = {
  {
    {custom_service__srv__NavSatPoseBool__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_service__srv__NavSatPoseBool_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_service__srv__NavSatPoseBool_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_service__srv__NavSatPoseBool_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_service__srv__NavSatPoseBool__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseWithCovariance__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__NavSatStatus__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Bool__TYPE_NAME, 17, 17},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_service__srv__NavSatPoseBool__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_service__srv__NavSatPoseBool__TYPE_NAME, 33, 33},
      {custom_service__srv__NavSatPoseBool__FIELDS, 3, 3},
    },
    {custom_service__srv__NavSatPoseBool__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_service__srv__NavSatPoseBool_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_service__srv__NavSatPoseBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_service__srv__NavSatPoseBool_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH, geometry_msgs__msg__PoseWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__PoseWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__NavSatStatus__EXPECTED_HASH, sensor_msgs__msg__NavSatStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = sensor_msgs__msg__NavSatStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Bool__EXPECTED_HASH, std_msgs__msg__Bool__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Bool__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_service__srv__NavSatPoseBool_Request__FIELD_NAME__nav[] = "nav";

static rosidl_runtime_c__type_description__Field custom_service__srv__NavSatPoseBool_Request__FIELDS[] = {
  {
    {custom_service__srv__NavSatPoseBool_Request__FIELD_NAME__nav, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__NavSatStatus__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_service__srv__NavSatPoseBool_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {sensor_msgs__msg__NavSatStatus__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_service__srv__NavSatPoseBool_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_service__srv__NavSatPoseBool_Request__TYPE_NAME, 41, 41},
      {custom_service__srv__NavSatPoseBool_Request__FIELDS, 1, 1},
    },
    {custom_service__srv__NavSatPoseBool_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&sensor_msgs__msg__NavSatStatus__EXPECTED_HASH, sensor_msgs__msg__NavSatStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = sensor_msgs__msg__NavSatStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_service__srv__NavSatPoseBool_Response__FIELD_NAME__pose[] = "pose";
static char custom_service__srv__NavSatPoseBool_Response__FIELD_NAME__boolvalue[] = "boolvalue";

static rosidl_runtime_c__type_description__Field custom_service__srv__NavSatPoseBool_Response__FIELDS[] = {
  {
    {custom_service__srv__NavSatPoseBool_Response__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__PoseWithCovariance__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Response__FIELD_NAME__boolvalue, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Bool__TYPE_NAME, 17, 17},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_service__srv__NavSatPoseBool_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseWithCovariance__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Bool__TYPE_NAME, 17, 17},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_service__srv__NavSatPoseBool_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_service__srv__NavSatPoseBool_Response__TYPE_NAME, 42, 42},
      {custom_service__srv__NavSatPoseBool_Response__FIELDS, 2, 2},
    },
    {custom_service__srv__NavSatPoseBool_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH, geometry_msgs__msg__PoseWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PoseWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Bool__EXPECTED_HASH, std_msgs__msg__Bool__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Bool__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_service__srv__NavSatPoseBool_Event__FIELD_NAME__info[] = "info";
static char custom_service__srv__NavSatPoseBool_Event__FIELD_NAME__request[] = "request";
static char custom_service__srv__NavSatPoseBool_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field custom_service__srv__NavSatPoseBool_Event__FIELDS[] = {
  {
    {custom_service__srv__NavSatPoseBool_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_service__srv__NavSatPoseBool_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_service__srv__NavSatPoseBool_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_service__srv__NavSatPoseBool_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {custom_service__srv__NavSatPoseBool_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseWithCovariance__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__NavSatStatus__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Bool__TYPE_NAME, 17, 17},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_service__srv__NavSatPoseBool_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_service__srv__NavSatPoseBool_Event__TYPE_NAME, 39, 39},
      {custom_service__srv__NavSatPoseBool_Event__FIELDS, 3, 3},
    },
    {custom_service__srv__NavSatPoseBool_Event__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_service__srv__NavSatPoseBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_service__srv__NavSatPoseBool_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH, geometry_msgs__msg__PoseWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__PoseWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__NavSatStatus__EXPECTED_HASH, sensor_msgs__msg__NavSatStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = sensor_msgs__msg__NavSatStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Bool__EXPECTED_HASH, std_msgs__msg__Bool__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Bool__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "sensor_msgs/NavSatStatus nav\n"
  "---\n"
  "geometry_msgs/PoseWithCovariance pose\n"
  "std_msgs/Bool boolvalue";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_service__srv__NavSatPoseBool__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_service__srv__NavSatPoseBool__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 94, 94},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_service__srv__NavSatPoseBool_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_service__srv__NavSatPoseBool_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_service__srv__NavSatPoseBool_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_service__srv__NavSatPoseBool_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_service__srv__NavSatPoseBool_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_service__srv__NavSatPoseBool_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_service__srv__NavSatPoseBool__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_service__srv__NavSatPoseBool__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_service__srv__NavSatPoseBool_Event__get_individual_type_description_source(NULL);
    sources[3] = *custom_service__srv__NavSatPoseBool_Request__get_individual_type_description_source(NULL);
    sources[4] = *custom_service__srv__NavSatPoseBool_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__PoseWithCovariance__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *sensor_msgs__msg__NavSatStatus__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Bool__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_service__srv__NavSatPoseBool_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_service__srv__NavSatPoseBool_Request__get_individual_type_description_source(NULL),
    sources[1] = *sensor_msgs__msg__NavSatStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_service__srv__NavSatPoseBool_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_service__srv__NavSatPoseBool_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PoseWithCovariance__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Bool__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_service__srv__NavSatPoseBool_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_service__srv__NavSatPoseBool_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_service__srv__NavSatPoseBool_Request__get_individual_type_description_source(NULL);
    sources[3] = *custom_service__srv__NavSatPoseBool_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__PoseWithCovariance__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[8] = *sensor_msgs__msg__NavSatStatus__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Bool__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
