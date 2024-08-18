// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_service:srv/NavSatPoseBool.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_service/srv/detail/nav_sat_pose_bool__rosidl_typesupport_introspection_c.h"
#include "custom_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_service/srv/detail/nav_sat_pose_bool__functions.h"
#include "custom_service/srv/detail/nav_sat_pose_bool__struct.h"


// Include directives for member types
// Member `nav`
#include "sensor_msgs/msg/nav_sat_status.h"
// Member `nav`
#include "sensor_msgs/msg/detail/nav_sat_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_service__srv__NavSatPoseBool_Request__init(message_memory);
}

void custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_fini_function(void * message_memory)
{
  custom_service__srv__NavSatPoseBool_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_member_array[1] = {
  {
    "nav",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_service__srv__NavSatPoseBool_Request, nav),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_members = {
  "custom_service__srv",  // message namespace
  "NavSatPoseBool_Request",  // message name
  1,  // number of fields
  sizeof(custom_service__srv__NavSatPoseBool_Request),
  false,  // has_any_key_member_
  custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_member_array,  // message members
  custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_type_support_handle = {
  0,
  &custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_members,
  get_message_typesupport_handle_function,
  &custom_service__srv__NavSatPoseBool_Request__get_type_hash,
  &custom_service__srv__NavSatPoseBool_Request__get_type_description,
  &custom_service__srv__NavSatPoseBool_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Request)() {
  custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, NavSatStatus)();
  if (!custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_type_support_handle.typesupport_identifier) {
    custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__functions.h"
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `boolvalue`
#include "std_msgs/msg/bool.h"
// Member `boolvalue`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_service__srv__NavSatPoseBool_Response__init(message_memory);
}

void custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_fini_function(void * message_memory)
{
  custom_service__srv__NavSatPoseBool_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_member_array[2] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_service__srv__NavSatPoseBool_Response, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "boolvalue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_service__srv__NavSatPoseBool_Response, boolvalue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_members = {
  "custom_service__srv",  // message namespace
  "NavSatPoseBool_Response",  // message name
  2,  // number of fields
  sizeof(custom_service__srv__NavSatPoseBool_Response),
  false,  // has_any_key_member_
  custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_member_array,  // message members
  custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_type_support_handle = {
  0,
  &custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_members,
  get_message_typesupport_handle_function,
  &custom_service__srv__NavSatPoseBool_Response__get_type_hash,
  &custom_service__srv__NavSatPoseBool_Response__get_type_description,
  &custom_service__srv__NavSatPoseBool_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Response)() {
  custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_type_support_handle.typesupport_identifier) {
    custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__functions.h"
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "custom_service/srv/nav_sat_pose_bool.h"
// Member `request`
// Member `response`
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_service__srv__NavSatPoseBool_Event__init(message_memory);
}

void custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_fini_function(void * message_memory)
{
  custom_service__srv__NavSatPoseBool_Event__fini(message_memory);
}

size_t custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__size_function__NavSatPoseBool_Event__request(
  const void * untyped_member)
{
  const custom_service__srv__NavSatPoseBool_Request__Sequence * member =
    (const custom_service__srv__NavSatPoseBool_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_const_function__NavSatPoseBool_Event__request(
  const void * untyped_member, size_t index)
{
  const custom_service__srv__NavSatPoseBool_Request__Sequence * member =
    (const custom_service__srv__NavSatPoseBool_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_function__NavSatPoseBool_Event__request(
  void * untyped_member, size_t index)
{
  custom_service__srv__NavSatPoseBool_Request__Sequence * member =
    (custom_service__srv__NavSatPoseBool_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__fetch_function__NavSatPoseBool_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_service__srv__NavSatPoseBool_Request * item =
    ((const custom_service__srv__NavSatPoseBool_Request *)
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_const_function__NavSatPoseBool_Event__request(untyped_member, index));
  custom_service__srv__NavSatPoseBool_Request * value =
    (custom_service__srv__NavSatPoseBool_Request *)(untyped_value);
  *value = *item;
}

void custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__assign_function__NavSatPoseBool_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_service__srv__NavSatPoseBool_Request * item =
    ((custom_service__srv__NavSatPoseBool_Request *)
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_function__NavSatPoseBool_Event__request(untyped_member, index));
  const custom_service__srv__NavSatPoseBool_Request * value =
    (const custom_service__srv__NavSatPoseBool_Request *)(untyped_value);
  *item = *value;
}

bool custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__resize_function__NavSatPoseBool_Event__request(
  void * untyped_member, size_t size)
{
  custom_service__srv__NavSatPoseBool_Request__Sequence * member =
    (custom_service__srv__NavSatPoseBool_Request__Sequence *)(untyped_member);
  custom_service__srv__NavSatPoseBool_Request__Sequence__fini(member);
  return custom_service__srv__NavSatPoseBool_Request__Sequence__init(member, size);
}

size_t custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__size_function__NavSatPoseBool_Event__response(
  const void * untyped_member)
{
  const custom_service__srv__NavSatPoseBool_Response__Sequence * member =
    (const custom_service__srv__NavSatPoseBool_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_const_function__NavSatPoseBool_Event__response(
  const void * untyped_member, size_t index)
{
  const custom_service__srv__NavSatPoseBool_Response__Sequence * member =
    (const custom_service__srv__NavSatPoseBool_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_function__NavSatPoseBool_Event__response(
  void * untyped_member, size_t index)
{
  custom_service__srv__NavSatPoseBool_Response__Sequence * member =
    (custom_service__srv__NavSatPoseBool_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__fetch_function__NavSatPoseBool_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_service__srv__NavSatPoseBool_Response * item =
    ((const custom_service__srv__NavSatPoseBool_Response *)
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_const_function__NavSatPoseBool_Event__response(untyped_member, index));
  custom_service__srv__NavSatPoseBool_Response * value =
    (custom_service__srv__NavSatPoseBool_Response *)(untyped_value);
  *value = *item;
}

void custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__assign_function__NavSatPoseBool_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_service__srv__NavSatPoseBool_Response * item =
    ((custom_service__srv__NavSatPoseBool_Response *)
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_function__NavSatPoseBool_Event__response(untyped_member, index));
  const custom_service__srv__NavSatPoseBool_Response * value =
    (const custom_service__srv__NavSatPoseBool_Response *)(untyped_value);
  *item = *value;
}

bool custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__resize_function__NavSatPoseBool_Event__response(
  void * untyped_member, size_t size)
{
  custom_service__srv__NavSatPoseBool_Response__Sequence * member =
    (custom_service__srv__NavSatPoseBool_Response__Sequence *)(untyped_member);
  custom_service__srv__NavSatPoseBool_Response__Sequence__fini(member);
  return custom_service__srv__NavSatPoseBool_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_service__srv__NavSatPoseBool_Event, info),  // bytes offset in struct
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
    offsetof(custom_service__srv__NavSatPoseBool_Event, request),  // bytes offset in struct
    NULL,  // default value
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__size_function__NavSatPoseBool_Event__request,  // size() function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_const_function__NavSatPoseBool_Event__request,  // get_const(index) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_function__NavSatPoseBool_Event__request,  // get(index) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__fetch_function__NavSatPoseBool_Event__request,  // fetch(index, &value) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__assign_function__NavSatPoseBool_Event__request,  // assign(index, value) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__resize_function__NavSatPoseBool_Event__request  // resize(index) function pointer
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
    offsetof(custom_service__srv__NavSatPoseBool_Event, response),  // bytes offset in struct
    NULL,  // default value
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__size_function__NavSatPoseBool_Event__response,  // size() function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_const_function__NavSatPoseBool_Event__response,  // get_const(index) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__get_function__NavSatPoseBool_Event__response,  // get(index) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__fetch_function__NavSatPoseBool_Event__response,  // fetch(index, &value) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__assign_function__NavSatPoseBool_Event__response,  // assign(index, value) function pointer
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__resize_function__NavSatPoseBool_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_members = {
  "custom_service__srv",  // message namespace
  "NavSatPoseBool_Event",  // message name
  3,  // number of fields
  sizeof(custom_service__srv__NavSatPoseBool_Event),
  false,  // has_any_key_member_
  custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_member_array,  // message members
  custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_type_support_handle = {
  0,
  &custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_members,
  get_message_typesupport_handle_function,
  &custom_service__srv__NavSatPoseBool_Event__get_type_hash,
  &custom_service__srv__NavSatPoseBool_Event__get_type_description,
  &custom_service__srv__NavSatPoseBool_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Event)() {
  custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Request)();
  custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Response)();
  if (!custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_type_support_handle.typesupport_identifier) {
    custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_service_members = {
  "custom_service__srv",  // service namespace
  "NavSatPoseBool",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_type_support_handle,
  NULL,  // response message
  // custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_type_support_handle
  NULL  // event_message
  // custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_type_support_handle
};


static rosidl_service_type_support_t custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_service_type_support_handle = {
  0,
  &custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_service_members,
  get_service_typesupport_handle_function,
  &custom_service__srv__NavSatPoseBool_Request__rosidl_typesupport_introspection_c__NavSatPoseBool_Request_message_type_support_handle,
  &custom_service__srv__NavSatPoseBool_Response__rosidl_typesupport_introspection_c__NavSatPoseBool_Response_message_type_support_handle,
  &custom_service__srv__NavSatPoseBool_Event__rosidl_typesupport_introspection_c__NavSatPoseBool_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_service,
    srv,
    NavSatPoseBool
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_service,
    srv,
    NavSatPoseBool
  ),
  &custom_service__srv__NavSatPoseBool__get_type_hash,
  &custom_service__srv__NavSatPoseBool__get_type_description,
  &custom_service__srv__NavSatPoseBool__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_service
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool)(void) {
  if (!custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_service_type_support_handle.typesupport_identifier) {
    custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_service, srv, NavSatPoseBool_Event)()->data;
  }

  return &custom_service__srv__detail__nav_sat_pose_bool__rosidl_typesupport_introspection_c__NavSatPoseBool_service_type_support_handle;
}
