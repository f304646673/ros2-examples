// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_service:srv/NavSatPoseBool.idl
// generated code does not contain a copyright notice
#include "custom_service/srv/detail/nav_sat_pose_bool__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `nav`
#include "sensor_msgs/msg/detail/nav_sat_status__functions.h"

bool
custom_service__srv__NavSatPoseBool_Request__init(custom_service__srv__NavSatPoseBool_Request * msg)
{
  if (!msg) {
    return false;
  }
  // nav
  if (!sensor_msgs__msg__NavSatStatus__init(&msg->nav)) {
    custom_service__srv__NavSatPoseBool_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_service__srv__NavSatPoseBool_Request__fini(custom_service__srv__NavSatPoseBool_Request * msg)
{
  if (!msg) {
    return;
  }
  // nav
  sensor_msgs__msg__NavSatStatus__fini(&msg->nav);
}

bool
custom_service__srv__NavSatPoseBool_Request__are_equal(const custom_service__srv__NavSatPoseBool_Request * lhs, const custom_service__srv__NavSatPoseBool_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nav
  if (!sensor_msgs__msg__NavSatStatus__are_equal(
      &(lhs->nav), &(rhs->nav)))
  {
    return false;
  }
  return true;
}

bool
custom_service__srv__NavSatPoseBool_Request__copy(
  const custom_service__srv__NavSatPoseBool_Request * input,
  custom_service__srv__NavSatPoseBool_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // nav
  if (!sensor_msgs__msg__NavSatStatus__copy(
      &(input->nav), &(output->nav)))
  {
    return false;
  }
  return true;
}

custom_service__srv__NavSatPoseBool_Request *
custom_service__srv__NavSatPoseBool_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Request * msg = (custom_service__srv__NavSatPoseBool_Request *)allocator.allocate(sizeof(custom_service__srv__NavSatPoseBool_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_service__srv__NavSatPoseBool_Request));
  bool success = custom_service__srv__NavSatPoseBool_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_service__srv__NavSatPoseBool_Request__destroy(custom_service__srv__NavSatPoseBool_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_service__srv__NavSatPoseBool_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_service__srv__NavSatPoseBool_Request__Sequence__init(custom_service__srv__NavSatPoseBool_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Request * data = NULL;

  if (size) {
    data = (custom_service__srv__NavSatPoseBool_Request *)allocator.zero_allocate(size, sizeof(custom_service__srv__NavSatPoseBool_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_service__srv__NavSatPoseBool_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_service__srv__NavSatPoseBool_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_service__srv__NavSatPoseBool_Request__Sequence__fini(custom_service__srv__NavSatPoseBool_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_service__srv__NavSatPoseBool_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_service__srv__NavSatPoseBool_Request__Sequence *
custom_service__srv__NavSatPoseBool_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Request__Sequence * array = (custom_service__srv__NavSatPoseBool_Request__Sequence *)allocator.allocate(sizeof(custom_service__srv__NavSatPoseBool_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_service__srv__NavSatPoseBool_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_service__srv__NavSatPoseBool_Request__Sequence__destroy(custom_service__srv__NavSatPoseBool_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_service__srv__NavSatPoseBool_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_service__srv__NavSatPoseBool_Request__Sequence__are_equal(const custom_service__srv__NavSatPoseBool_Request__Sequence * lhs, const custom_service__srv__NavSatPoseBool_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_service__srv__NavSatPoseBool_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_service__srv__NavSatPoseBool_Request__Sequence__copy(
  const custom_service__srv__NavSatPoseBool_Request__Sequence * input,
  custom_service__srv__NavSatPoseBool_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_service__srv__NavSatPoseBool_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_service__srv__NavSatPoseBool_Request * data =
      (custom_service__srv__NavSatPoseBool_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_service__srv__NavSatPoseBool_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_service__srv__NavSatPoseBool_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_service__srv__NavSatPoseBool_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `boolvalue`
#include "std_msgs/msg/detail/bool__functions.h"

bool
custom_service__srv__NavSatPoseBool_Response__init(custom_service__srv__NavSatPoseBool_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    custom_service__srv__NavSatPoseBool_Response__fini(msg);
    return false;
  }
  // boolvalue
  if (!std_msgs__msg__Bool__init(&msg->boolvalue)) {
    custom_service__srv__NavSatPoseBool_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_service__srv__NavSatPoseBool_Response__fini(custom_service__srv__NavSatPoseBool_Response * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // boolvalue
  std_msgs__msg__Bool__fini(&msg->boolvalue);
}

bool
custom_service__srv__NavSatPoseBool_Response__are_equal(const custom_service__srv__NavSatPoseBool_Response * lhs, const custom_service__srv__NavSatPoseBool_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // boolvalue
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->boolvalue), &(rhs->boolvalue)))
  {
    return false;
  }
  return true;
}

bool
custom_service__srv__NavSatPoseBool_Response__copy(
  const custom_service__srv__NavSatPoseBool_Response * input,
  custom_service__srv__NavSatPoseBool_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // boolvalue
  if (!std_msgs__msg__Bool__copy(
      &(input->boolvalue), &(output->boolvalue)))
  {
    return false;
  }
  return true;
}

custom_service__srv__NavSatPoseBool_Response *
custom_service__srv__NavSatPoseBool_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Response * msg = (custom_service__srv__NavSatPoseBool_Response *)allocator.allocate(sizeof(custom_service__srv__NavSatPoseBool_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_service__srv__NavSatPoseBool_Response));
  bool success = custom_service__srv__NavSatPoseBool_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_service__srv__NavSatPoseBool_Response__destroy(custom_service__srv__NavSatPoseBool_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_service__srv__NavSatPoseBool_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_service__srv__NavSatPoseBool_Response__Sequence__init(custom_service__srv__NavSatPoseBool_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Response * data = NULL;

  if (size) {
    data = (custom_service__srv__NavSatPoseBool_Response *)allocator.zero_allocate(size, sizeof(custom_service__srv__NavSatPoseBool_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_service__srv__NavSatPoseBool_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_service__srv__NavSatPoseBool_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_service__srv__NavSatPoseBool_Response__Sequence__fini(custom_service__srv__NavSatPoseBool_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_service__srv__NavSatPoseBool_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_service__srv__NavSatPoseBool_Response__Sequence *
custom_service__srv__NavSatPoseBool_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Response__Sequence * array = (custom_service__srv__NavSatPoseBool_Response__Sequence *)allocator.allocate(sizeof(custom_service__srv__NavSatPoseBool_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_service__srv__NavSatPoseBool_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_service__srv__NavSatPoseBool_Response__Sequence__destroy(custom_service__srv__NavSatPoseBool_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_service__srv__NavSatPoseBool_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_service__srv__NavSatPoseBool_Response__Sequence__are_equal(const custom_service__srv__NavSatPoseBool_Response__Sequence * lhs, const custom_service__srv__NavSatPoseBool_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_service__srv__NavSatPoseBool_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_service__srv__NavSatPoseBool_Response__Sequence__copy(
  const custom_service__srv__NavSatPoseBool_Response__Sequence * input,
  custom_service__srv__NavSatPoseBool_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_service__srv__NavSatPoseBool_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_service__srv__NavSatPoseBool_Response * data =
      (custom_service__srv__NavSatPoseBool_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_service__srv__NavSatPoseBool_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_service__srv__NavSatPoseBool_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_service__srv__NavSatPoseBool_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "custom_service/srv/detail/nav_sat_pose_bool__functions.h"

bool
custom_service__srv__NavSatPoseBool_Event__init(custom_service__srv__NavSatPoseBool_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    custom_service__srv__NavSatPoseBool_Event__fini(msg);
    return false;
  }
  // request
  if (!custom_service__srv__NavSatPoseBool_Request__Sequence__init(&msg->request, 0)) {
    custom_service__srv__NavSatPoseBool_Event__fini(msg);
    return false;
  }
  // response
  if (!custom_service__srv__NavSatPoseBool_Response__Sequence__init(&msg->response, 0)) {
    custom_service__srv__NavSatPoseBool_Event__fini(msg);
    return false;
  }
  return true;
}

void
custom_service__srv__NavSatPoseBool_Event__fini(custom_service__srv__NavSatPoseBool_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  custom_service__srv__NavSatPoseBool_Request__Sequence__fini(&msg->request);
  // response
  custom_service__srv__NavSatPoseBool_Response__Sequence__fini(&msg->response);
}

bool
custom_service__srv__NavSatPoseBool_Event__are_equal(const custom_service__srv__NavSatPoseBool_Event * lhs, const custom_service__srv__NavSatPoseBool_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!custom_service__srv__NavSatPoseBool_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!custom_service__srv__NavSatPoseBool_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
custom_service__srv__NavSatPoseBool_Event__copy(
  const custom_service__srv__NavSatPoseBool_Event * input,
  custom_service__srv__NavSatPoseBool_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!custom_service__srv__NavSatPoseBool_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!custom_service__srv__NavSatPoseBool_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

custom_service__srv__NavSatPoseBool_Event *
custom_service__srv__NavSatPoseBool_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Event * msg = (custom_service__srv__NavSatPoseBool_Event *)allocator.allocate(sizeof(custom_service__srv__NavSatPoseBool_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_service__srv__NavSatPoseBool_Event));
  bool success = custom_service__srv__NavSatPoseBool_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_service__srv__NavSatPoseBool_Event__destroy(custom_service__srv__NavSatPoseBool_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_service__srv__NavSatPoseBool_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_service__srv__NavSatPoseBool_Event__Sequence__init(custom_service__srv__NavSatPoseBool_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Event * data = NULL;

  if (size) {
    data = (custom_service__srv__NavSatPoseBool_Event *)allocator.zero_allocate(size, sizeof(custom_service__srv__NavSatPoseBool_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_service__srv__NavSatPoseBool_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_service__srv__NavSatPoseBool_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_service__srv__NavSatPoseBool_Event__Sequence__fini(custom_service__srv__NavSatPoseBool_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_service__srv__NavSatPoseBool_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_service__srv__NavSatPoseBool_Event__Sequence *
custom_service__srv__NavSatPoseBool_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_service__srv__NavSatPoseBool_Event__Sequence * array = (custom_service__srv__NavSatPoseBool_Event__Sequence *)allocator.allocate(sizeof(custom_service__srv__NavSatPoseBool_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_service__srv__NavSatPoseBool_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_service__srv__NavSatPoseBool_Event__Sequence__destroy(custom_service__srv__NavSatPoseBool_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_service__srv__NavSatPoseBool_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_service__srv__NavSatPoseBool_Event__Sequence__are_equal(const custom_service__srv__NavSatPoseBool_Event__Sequence * lhs, const custom_service__srv__NavSatPoseBool_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_service__srv__NavSatPoseBool_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_service__srv__NavSatPoseBool_Event__Sequence__copy(
  const custom_service__srv__NavSatPoseBool_Event__Sequence * input,
  custom_service__srv__NavSatPoseBool_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_service__srv__NavSatPoseBool_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_service__srv__NavSatPoseBool_Event * data =
      (custom_service__srv__NavSatPoseBool_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_service__srv__NavSatPoseBool_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_service__srv__NavSatPoseBool_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_service__srv__NavSatPoseBool_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
