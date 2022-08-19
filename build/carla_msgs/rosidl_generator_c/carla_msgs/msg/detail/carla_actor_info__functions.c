// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaActorInfo.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_actor_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type`
// Member `rolename`
#include "rosidl_runtime_c/string_functions.h"

bool
carla_msgs__msg__CarlaActorInfo__init(carla_msgs__msg__CarlaActorInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // parent_id
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    carla_msgs__msg__CarlaActorInfo__fini(msg);
    return false;
  }
  // rolename
  if (!rosidl_runtime_c__String__init(&msg->rolename)) {
    carla_msgs__msg__CarlaActorInfo__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__msg__CarlaActorInfo__fini(carla_msgs__msg__CarlaActorInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // parent_id
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // rolename
  rosidl_runtime_c__String__fini(&msg->rolename);
}

bool
carla_msgs__msg__CarlaActorInfo__are_equal(const carla_msgs__msg__CarlaActorInfo * lhs, const carla_msgs__msg__CarlaActorInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // parent_id
  if (lhs->parent_id != rhs->parent_id) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // rolename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rolename), &(rhs->rolename)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaActorInfo__copy(
  const carla_msgs__msg__CarlaActorInfo * input,
  carla_msgs__msg__CarlaActorInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // parent_id
  output->parent_id = input->parent_id;
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // rolename
  if (!rosidl_runtime_c__String__copy(
      &(input->rolename), &(output->rolename)))
  {
    return false;
  }
  return true;
}

carla_msgs__msg__CarlaActorInfo *
carla_msgs__msg__CarlaActorInfo__create()
{
  carla_msgs__msg__CarlaActorInfo * msg = (carla_msgs__msg__CarlaActorInfo *)malloc(sizeof(carla_msgs__msg__CarlaActorInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaActorInfo));
  bool success = carla_msgs__msg__CarlaActorInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaActorInfo__destroy(carla_msgs__msg__CarlaActorInfo * msg)
{
  if (msg) {
    carla_msgs__msg__CarlaActorInfo__fini(msg);
  }
  free(msg);
}


bool
carla_msgs__msg__CarlaActorInfo__Sequence__init(carla_msgs__msg__CarlaActorInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  carla_msgs__msg__CarlaActorInfo * data = NULL;
  if (size) {
    data = (carla_msgs__msg__CarlaActorInfo *)calloc(size, sizeof(carla_msgs__msg__CarlaActorInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaActorInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaActorInfo__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaActorInfo__Sequence__fini(carla_msgs__msg__CarlaActorInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_msgs__msg__CarlaActorInfo__fini(&array->data[i]);
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

carla_msgs__msg__CarlaActorInfo__Sequence *
carla_msgs__msg__CarlaActorInfo__Sequence__create(size_t size)
{
  carla_msgs__msg__CarlaActorInfo__Sequence * array = (carla_msgs__msg__CarlaActorInfo__Sequence *)malloc(sizeof(carla_msgs__msg__CarlaActorInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaActorInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaActorInfo__Sequence__destroy(carla_msgs__msg__CarlaActorInfo__Sequence * array)
{
  if (array) {
    carla_msgs__msg__CarlaActorInfo__Sequence__fini(array);
  }
  free(array);
}

bool
carla_msgs__msg__CarlaActorInfo__Sequence__are_equal(const carla_msgs__msg__CarlaActorInfo__Sequence * lhs, const carla_msgs__msg__CarlaActorInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaActorInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaActorInfo__Sequence__copy(
  const carla_msgs__msg__CarlaActorInfo__Sequence * input,
  carla_msgs__msg__CarlaActorInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaActorInfo);
    carla_msgs__msg__CarlaActorInfo * data =
      (carla_msgs__msg__CarlaActorInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaActorInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaActorInfo__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaActorInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
