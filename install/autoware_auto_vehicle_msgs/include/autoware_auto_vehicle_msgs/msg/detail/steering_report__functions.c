// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_vehicle_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice
#include "autoware_auto_vehicle_msgs/msg/detail/steering_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_vehicle_msgs__msg__SteeringReport__init(autoware_auto_vehicle_msgs__msg__SteeringReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_vehicle_msgs__msg__SteeringReport__fini(msg);
    return false;
  }
  // steering_tire_angle
  msg->steering_tire_angle = 0.0f;
  return true;
}

void
autoware_auto_vehicle_msgs__msg__SteeringReport__fini(autoware_auto_vehicle_msgs__msg__SteeringReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // steering_tire_angle
}

bool
autoware_auto_vehicle_msgs__msg__SteeringReport__are_equal(const autoware_auto_vehicle_msgs__msg__SteeringReport * lhs, const autoware_auto_vehicle_msgs__msg__SteeringReport * rhs)
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
  // steering_tire_angle
  if (lhs->steering_tire_angle != rhs->steering_tire_angle) {
    return false;
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__SteeringReport__copy(
  const autoware_auto_vehicle_msgs__msg__SteeringReport * input,
  autoware_auto_vehicle_msgs__msg__SteeringReport * output)
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
  // steering_tire_angle
  output->steering_tire_angle = input->steering_tire_angle;
  return true;
}

autoware_auto_vehicle_msgs__msg__SteeringReport *
autoware_auto_vehicle_msgs__msg__SteeringReport__create()
{
  autoware_auto_vehicle_msgs__msg__SteeringReport * msg = (autoware_auto_vehicle_msgs__msg__SteeringReport *)malloc(sizeof(autoware_auto_vehicle_msgs__msg__SteeringReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_vehicle_msgs__msg__SteeringReport));
  bool success = autoware_auto_vehicle_msgs__msg__SteeringReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_vehicle_msgs__msg__SteeringReport__destroy(autoware_auto_vehicle_msgs__msg__SteeringReport * msg)
{
  if (msg) {
    autoware_auto_vehicle_msgs__msg__SteeringReport__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__init(autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_vehicle_msgs__msg__SteeringReport * data = NULL;
  if (size) {
    data = (autoware_auto_vehicle_msgs__msg__SteeringReport *)calloc(size, sizeof(autoware_auto_vehicle_msgs__msg__SteeringReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_vehicle_msgs__msg__SteeringReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_vehicle_msgs__msg__SteeringReport__fini(&data[i - 1]);
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
autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__fini(autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_vehicle_msgs__msg__SteeringReport__fini(&array->data[i]);
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

autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence *
autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__create(size_t size)
{
  autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * array = (autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence *)malloc(sizeof(autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__destroy(autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * array)
{
  if (array) {
    autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__are_equal(const autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * lhs, const autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_vehicle_msgs__msg__SteeringReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence__copy(
  const autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * input,
  autoware_auto_vehicle_msgs__msg__SteeringReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_vehicle_msgs__msg__SteeringReport);
    autoware_auto_vehicle_msgs__msg__SteeringReport * data =
      (autoware_auto_vehicle_msgs__msg__SteeringReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_vehicle_msgs__msg__SteeringReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_vehicle_msgs__msg__SteeringReport__fini(&data[i]);
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
    if (!autoware_auto_vehicle_msgs__msg__SteeringReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
