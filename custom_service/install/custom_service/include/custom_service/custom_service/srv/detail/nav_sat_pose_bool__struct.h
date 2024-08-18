// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_service:srv/NavSatPoseBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_service/srv/nav_sat_pose_bool.h"


#ifndef CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__STRUCT_H_
#define CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nav'
#include "sensor_msgs/msg/detail/nav_sat_status__struct.h"

/// Struct defined in srv/NavSatPoseBool in the package custom_service.
typedef struct custom_service__srv__NavSatPoseBool_Request
{
  sensor_msgs__msg__NavSatStatus nav;
} custom_service__srv__NavSatPoseBool_Request;

// Struct for a sequence of custom_service__srv__NavSatPoseBool_Request.
typedef struct custom_service__srv__NavSatPoseBool_Request__Sequence
{
  custom_service__srv__NavSatPoseBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_service__srv__NavSatPoseBool_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'boolvalue'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in srv/NavSatPoseBool in the package custom_service.
typedef struct custom_service__srv__NavSatPoseBool_Response
{
  geometry_msgs__msg__PoseWithCovariance pose;
  std_msgs__msg__Bool boolvalue;
} custom_service__srv__NavSatPoseBool_Response;

// Struct for a sequence of custom_service__srv__NavSatPoseBool_Response.
typedef struct custom_service__srv__NavSatPoseBool_Response__Sequence
{
  custom_service__srv__NavSatPoseBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_service__srv__NavSatPoseBool_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_service__srv__NavSatPoseBool_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_service__srv__NavSatPoseBool_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/NavSatPoseBool in the package custom_service.
typedef struct custom_service__srv__NavSatPoseBool_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_service__srv__NavSatPoseBool_Request__Sequence request;
  custom_service__srv__NavSatPoseBool_Response__Sequence response;
} custom_service__srv__NavSatPoseBool_Event;

// Struct for a sequence of custom_service__srv__NavSatPoseBool_Event.
typedef struct custom_service__srv__NavSatPoseBool_Event__Sequence
{
  custom_service__srv__NavSatPoseBool_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_service__srv__NavSatPoseBool_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__STRUCT_H_
