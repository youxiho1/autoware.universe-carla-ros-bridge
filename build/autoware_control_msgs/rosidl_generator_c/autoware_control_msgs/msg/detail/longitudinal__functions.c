// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_control_msgs:msg/Longitudinal.idl
// generated code does not contain a copyright notice
#include "autoware_control_msgs/msg/detail/longitudinal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
// Member `control_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_control_msgs__msg__Longitudinal__init(autoware_control_msgs__msg__Longitudinal * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_control_msgs__msg__Longitudinal__fini(msg);
    return false;
  }
  // control_time
  if (!builtin_interfaces__msg__Time__init(&msg->control_time)) {
    autoware_control_msgs__msg__Longitudinal__fini(msg);
    return false;
  }
  // velocity
  // acceleration
  // jerk
  // is_defined_acceleration
  // is_defined_jerk
  return true;
}

void
autoware_control_msgs__msg__Longitudinal__fini(autoware_control_msgs__msg__Longitudinal * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // control_time
  builtin_interfaces__msg__Time__fini(&msg->control_time);
  // velocity
  // acceleration
  // jerk
  // is_defined_acceleration
  // is_defined_jerk
}

bool
autoware_control_msgs__msg__Longitudinal__are_equal(const autoware_control_msgs__msg__Longitudinal * lhs, const autoware_control_msgs__msg__Longitudinal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // control_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->control_time), &(rhs->control_time)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // jerk
  if (lhs->jerk != rhs->jerk) {
    return false;
  }
  // is_defined_acceleration
  if (lhs->is_defined_acceleration != rhs->is_defined_acceleration) {
    return false;
  }
  // is_defined_jerk
  if (lhs->is_defined_jerk != rhs->is_defined_jerk) {
    return false;
  }
  return true;
}

bool
autoware_control_msgs__msg__Longitudinal__copy(
  const autoware_control_msgs__msg__Longitudinal * input,
  autoware_control_msgs__msg__Longitudinal * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // control_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->control_time), &(output->control_time)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  // jerk
  output->jerk = input->jerk;
  // is_defined_acceleration
  output->is_defined_acceleration = input->is_defined_acceleration;
  // is_defined_jerk
  output->is_defined_jerk = input->is_defined_jerk;
  return true;
}

autoware_control_msgs__msg__Longitudinal *
autoware_control_msgs__msg__Longitudinal__create()
{
  autoware_control_msgs__msg__Longitudinal * msg = (autoware_control_msgs__msg__Longitudinal *)malloc(sizeof(autoware_control_msgs__msg__Longitudinal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_control_msgs__msg__Longitudinal));
  bool success = autoware_control_msgs__msg__Longitudinal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_control_msgs__msg__Longitudinal__destroy(autoware_control_msgs__msg__Longitudinal * msg)
{
  if (msg) {
    autoware_control_msgs__msg__Longitudinal__fini(msg);
  }
  free(msg);
}


bool
autoware_control_msgs__msg__Longitudinal__Sequence__init(autoware_control_msgs__msg__Longitudinal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_control_msgs__msg__Longitudinal * data = NULL;
  if (size) {
    data = (autoware_control_msgs__msg__Longitudinal *)calloc(size, sizeof(autoware_control_msgs__msg__Longitudinal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_control_msgs__msg__Longitudinal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_control_msgs__msg__Longitudinal__fini(&data[i - 1]);
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
autoware_control_msgs__msg__Longitudinal__Sequence__fini(autoware_control_msgs__msg__Longitudinal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_control_msgs__msg__Longitudinal__fini(&array->data[i]);
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

autoware_control_msgs__msg__Longitudinal__Sequence *
autoware_control_msgs__msg__Longitudinal__Sequence__create(size_t size)
{
  autoware_control_msgs__msg__Longitudinal__Sequence * array = (autoware_control_msgs__msg__Longitudinal__Sequence *)malloc(sizeof(autoware_control_msgs__msg__Longitudinal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_control_msgs__msg__Longitudinal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_control_msgs__msg__Longitudinal__Sequence__destroy(autoware_control_msgs__msg__Longitudinal__Sequence * array)
{
  if (array) {
    autoware_control_msgs__msg__Longitudinal__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_control_msgs__msg__Longitudinal__Sequence__are_equal(const autoware_control_msgs__msg__Longitudinal__Sequence * lhs, const autoware_control_msgs__msg__Longitudinal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_control_msgs__msg__Longitudinal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_control_msgs__msg__Longitudinal__Sequence__copy(
  const autoware_control_msgs__msg__Longitudinal__Sequence * input,
  autoware_control_msgs__msg__Longitudinal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_control_msgs__msg__Longitudinal);
    autoware_control_msgs__msg__Longitudinal * data =
      (autoware_control_msgs__msg__Longitudinal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_control_msgs__msg__Longitudinal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_control_msgs__msg__Longitudinal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_control_msgs__msg__Longitudinal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
