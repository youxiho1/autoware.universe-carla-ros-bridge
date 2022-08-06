// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice
#include "autoware_control_msgs/msg/detail/control_horizon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
// Member `control_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `controls`
#include "autoware_control_msgs/msg/detail/control__functions.h"

bool
autoware_control_msgs__msg__ControlHorizon__init(autoware_control_msgs__msg__ControlHorizon * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_control_msgs__msg__ControlHorizon__fini(msg);
    return false;
  }
  // control_time
  if (!builtin_interfaces__msg__Time__init(&msg->control_time)) {
    autoware_control_msgs__msg__ControlHorizon__fini(msg);
    return false;
  }
  // time_step_ms
  // controls
  if (!autoware_control_msgs__msg__Control__Sequence__init(&msg->controls, 0)) {
    autoware_control_msgs__msg__ControlHorizon__fini(msg);
    return false;
  }
  return true;
}

void
autoware_control_msgs__msg__ControlHorizon__fini(autoware_control_msgs__msg__ControlHorizon * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // control_time
  builtin_interfaces__msg__Time__fini(&msg->control_time);
  // time_step_ms
  // controls
  autoware_control_msgs__msg__Control__Sequence__fini(&msg->controls);
}

autoware_control_msgs__msg__ControlHorizon *
autoware_control_msgs__msg__ControlHorizon__create()
{
  autoware_control_msgs__msg__ControlHorizon * msg = (autoware_control_msgs__msg__ControlHorizon *)malloc(sizeof(autoware_control_msgs__msg__ControlHorizon));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_control_msgs__msg__ControlHorizon));
  bool success = autoware_control_msgs__msg__ControlHorizon__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_control_msgs__msg__ControlHorizon__destroy(autoware_control_msgs__msg__ControlHorizon * msg)
{
  if (msg) {
    autoware_control_msgs__msg__ControlHorizon__fini(msg);
  }
  free(msg);
}


bool
autoware_control_msgs__msg__ControlHorizon__Sequence__init(autoware_control_msgs__msg__ControlHorizon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_control_msgs__msg__ControlHorizon * data = NULL;
  if (size) {
    data = (autoware_control_msgs__msg__ControlHorizon *)calloc(size, sizeof(autoware_control_msgs__msg__ControlHorizon));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_control_msgs__msg__ControlHorizon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_control_msgs__msg__ControlHorizon__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autoware_control_msgs__msg__ControlHorizon__Sequence__fini(autoware_control_msgs__msg__ControlHorizon__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_control_msgs__msg__ControlHorizon__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autoware_control_msgs__msg__ControlHorizon__Sequence *
autoware_control_msgs__msg__ControlHorizon__Sequence__create(size_t size)
{
  autoware_control_msgs__msg__ControlHorizon__Sequence * array = (autoware_control_msgs__msg__ControlHorizon__Sequence *)malloc(sizeof(autoware_control_msgs__msg__ControlHorizon__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_control_msgs__msg__ControlHorizon__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_control_msgs__msg__ControlHorizon__Sequence__destroy(autoware_control_msgs__msg__ControlHorizon__Sequence * array)
{
  if (array) {
    autoware_control_msgs__msg__ControlHorizon__Sequence__fini(array);
  }
  free(array);
}
