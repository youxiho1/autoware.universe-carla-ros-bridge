// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaControl.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
carla_msgs__msg__CarlaControl__init(carla_msgs__msg__CarlaControl * msg)
{
  if (!msg) {
    return false;
  }
  // command
  return true;
}

void
carla_msgs__msg__CarlaControl__fini(carla_msgs__msg__CarlaControl * msg)
{
  if (!msg) {
    return;
  }
  // command
}

bool
carla_msgs__msg__CarlaControl__are_equal(const carla_msgs__msg__CarlaControl * lhs, const carla_msgs__msg__CarlaControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaControl__copy(
  const carla_msgs__msg__CarlaControl * input,
  carla_msgs__msg__CarlaControl * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  return true;
}

carla_msgs__msg__CarlaControl *
carla_msgs__msg__CarlaControl__create()
{
  carla_msgs__msg__CarlaControl * msg = (carla_msgs__msg__CarlaControl *)malloc(sizeof(carla_msgs__msg__CarlaControl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaControl));
  bool success = carla_msgs__msg__CarlaControl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaControl__destroy(carla_msgs__msg__CarlaControl * msg)
{
  if (msg) {
    carla_msgs__msg__CarlaControl__fini(msg);
  }
  free(msg);
}


bool
carla_msgs__msg__CarlaControl__Sequence__init(carla_msgs__msg__CarlaControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  carla_msgs__msg__CarlaControl * data = NULL;
  if (size) {
    data = (carla_msgs__msg__CarlaControl *)calloc(size, sizeof(carla_msgs__msg__CarlaControl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaControl__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaControl__Sequence__fini(carla_msgs__msg__CarlaControl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_msgs__msg__CarlaControl__fini(&array->data[i]);
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

carla_msgs__msg__CarlaControl__Sequence *
carla_msgs__msg__CarlaControl__Sequence__create(size_t size)
{
  carla_msgs__msg__CarlaControl__Sequence * array = (carla_msgs__msg__CarlaControl__Sequence *)malloc(sizeof(carla_msgs__msg__CarlaControl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaControl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaControl__Sequence__destroy(carla_msgs__msg__CarlaControl__Sequence * array)
{
  if (array) {
    carla_msgs__msg__CarlaControl__Sequence__fini(array);
  }
  free(array);
}

bool
carla_msgs__msg__CarlaControl__Sequence__are_equal(const carla_msgs__msg__CarlaControl__Sequence * lhs, const carla_msgs__msg__CarlaControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaControl__Sequence__copy(
  const carla_msgs__msg__CarlaControl__Sequence * input,
  carla_msgs__msg__CarlaControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaControl);
    carla_msgs__msg__CarlaControl * data =
      (carla_msgs__msg__CarlaControl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaControl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaControl__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
