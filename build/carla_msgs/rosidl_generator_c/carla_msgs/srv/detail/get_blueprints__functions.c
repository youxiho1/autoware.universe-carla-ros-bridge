// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:srv/GetBlueprints.idl
// generated code does not contain a copyright notice
#include "carla_msgs/srv/detail/get_blueprints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `filter`
#include "rosidl_runtime_c/string_functions.h"

bool
carla_msgs__srv__GetBlueprints_Request__init(carla_msgs__srv__GetBlueprints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filter
  if (!rosidl_runtime_c__String__init(&msg->filter)) {
    carla_msgs__srv__GetBlueprints_Request__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__srv__GetBlueprints_Request__fini(carla_msgs__srv__GetBlueprints_Request * msg)
{
  if (!msg) {
    return;
  }
  // filter
  rosidl_runtime_c__String__fini(&msg->filter);
}

bool
carla_msgs__srv__GetBlueprints_Request__are_equal(const carla_msgs__srv__GetBlueprints_Request * lhs, const carla_msgs__srv__GetBlueprints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // filter
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filter), &(rhs->filter)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__srv__GetBlueprints_Request__copy(
  const carla_msgs__srv__GetBlueprints_Request * input,
  carla_msgs__srv__GetBlueprints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // filter
  if (!rosidl_runtime_c__String__copy(
      &(input->filter), &(output->filter)))
  {
    return false;
  }
  return true;
}

carla_msgs__srv__GetBlueprints_Request *
carla_msgs__srv__GetBlueprints_Request__create()
{
  carla_msgs__srv__GetBlueprints_Request * msg = (carla_msgs__srv__GetBlueprints_Request *)malloc(sizeof(carla_msgs__srv__GetBlueprints_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__srv__GetBlueprints_Request));
  bool success = carla_msgs__srv__GetBlueprints_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
carla_msgs__srv__GetBlueprints_Request__destroy(carla_msgs__srv__GetBlueprints_Request * msg)
{
  if (msg) {
    carla_msgs__srv__GetBlueprints_Request__fini(msg);
  }
  free(msg);
}


bool
carla_msgs__srv__GetBlueprints_Request__Sequence__init(carla_msgs__srv__GetBlueprints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  carla_msgs__srv__GetBlueprints_Request * data = NULL;
  if (size) {
    data = (carla_msgs__srv__GetBlueprints_Request *)calloc(size, sizeof(carla_msgs__srv__GetBlueprints_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__srv__GetBlueprints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__srv__GetBlueprints_Request__fini(&data[i - 1]);
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
carla_msgs__srv__GetBlueprints_Request__Sequence__fini(carla_msgs__srv__GetBlueprints_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_msgs__srv__GetBlueprints_Request__fini(&array->data[i]);
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

carla_msgs__srv__GetBlueprints_Request__Sequence *
carla_msgs__srv__GetBlueprints_Request__Sequence__create(size_t size)
{
  carla_msgs__srv__GetBlueprints_Request__Sequence * array = (carla_msgs__srv__GetBlueprints_Request__Sequence *)malloc(sizeof(carla_msgs__srv__GetBlueprints_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__srv__GetBlueprints_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
carla_msgs__srv__GetBlueprints_Request__Sequence__destroy(carla_msgs__srv__GetBlueprints_Request__Sequence * array)
{
  if (array) {
    carla_msgs__srv__GetBlueprints_Request__Sequence__fini(array);
  }
  free(array);
}

bool
carla_msgs__srv__GetBlueprints_Request__Sequence__are_equal(const carla_msgs__srv__GetBlueprints_Request__Sequence * lhs, const carla_msgs__srv__GetBlueprints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__srv__GetBlueprints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__srv__GetBlueprints_Request__Sequence__copy(
  const carla_msgs__srv__GetBlueprints_Request__Sequence * input,
  carla_msgs__srv__GetBlueprints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__srv__GetBlueprints_Request);
    carla_msgs__srv__GetBlueprints_Request * data =
      (carla_msgs__srv__GetBlueprints_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__srv__GetBlueprints_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__srv__GetBlueprints_Request__fini(&data[i]);
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
    if (!carla_msgs__srv__GetBlueprints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `blueprints`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
carla_msgs__srv__GetBlueprints_Response__init(carla_msgs__srv__GetBlueprints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // blueprints
  if (!rosidl_runtime_c__String__Sequence__init(&msg->blueprints, 0)) {
    carla_msgs__srv__GetBlueprints_Response__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__srv__GetBlueprints_Response__fini(carla_msgs__srv__GetBlueprints_Response * msg)
{
  if (!msg) {
    return;
  }
  // blueprints
  rosidl_runtime_c__String__Sequence__fini(&msg->blueprints);
}

bool
carla_msgs__srv__GetBlueprints_Response__are_equal(const carla_msgs__srv__GetBlueprints_Response * lhs, const carla_msgs__srv__GetBlueprints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // blueprints
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->blueprints), &(rhs->blueprints)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__srv__GetBlueprints_Response__copy(
  const carla_msgs__srv__GetBlueprints_Response * input,
  carla_msgs__srv__GetBlueprints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // blueprints
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->blueprints), &(output->blueprints)))
  {
    return false;
  }
  return true;
}

carla_msgs__srv__GetBlueprints_Response *
carla_msgs__srv__GetBlueprints_Response__create()
{
  carla_msgs__srv__GetBlueprints_Response * msg = (carla_msgs__srv__GetBlueprints_Response *)malloc(sizeof(carla_msgs__srv__GetBlueprints_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__srv__GetBlueprints_Response));
  bool success = carla_msgs__srv__GetBlueprints_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
carla_msgs__srv__GetBlueprints_Response__destroy(carla_msgs__srv__GetBlueprints_Response * msg)
{
  if (msg) {
    carla_msgs__srv__GetBlueprints_Response__fini(msg);
  }
  free(msg);
}


bool
carla_msgs__srv__GetBlueprints_Response__Sequence__init(carla_msgs__srv__GetBlueprints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  carla_msgs__srv__GetBlueprints_Response * data = NULL;
  if (size) {
    data = (carla_msgs__srv__GetBlueprints_Response *)calloc(size, sizeof(carla_msgs__srv__GetBlueprints_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__srv__GetBlueprints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__srv__GetBlueprints_Response__fini(&data[i - 1]);
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
carla_msgs__srv__GetBlueprints_Response__Sequence__fini(carla_msgs__srv__GetBlueprints_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_msgs__srv__GetBlueprints_Response__fini(&array->data[i]);
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

carla_msgs__srv__GetBlueprints_Response__Sequence *
carla_msgs__srv__GetBlueprints_Response__Sequence__create(size_t size)
{
  carla_msgs__srv__GetBlueprints_Response__Sequence * array = (carla_msgs__srv__GetBlueprints_Response__Sequence *)malloc(sizeof(carla_msgs__srv__GetBlueprints_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__srv__GetBlueprints_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
carla_msgs__srv__GetBlueprints_Response__Sequence__destroy(carla_msgs__srv__GetBlueprints_Response__Sequence * array)
{
  if (array) {
    carla_msgs__srv__GetBlueprints_Response__Sequence__fini(array);
  }
  free(array);
}

bool
carla_msgs__srv__GetBlueprints_Response__Sequence__are_equal(const carla_msgs__srv__GetBlueprints_Response__Sequence * lhs, const carla_msgs__srv__GetBlueprints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__srv__GetBlueprints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__srv__GetBlueprints_Response__Sequence__copy(
  const carla_msgs__srv__GetBlueprints_Response__Sequence * input,
  carla_msgs__srv__GetBlueprints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__srv__GetBlueprints_Response);
    carla_msgs__srv__GetBlueprints_Response * data =
      (carla_msgs__srv__GetBlueprints_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__srv__GetBlueprints_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__srv__GetBlueprints_Response__fini(&data[i]);
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
    if (!carla_msgs__srv__GetBlueprints_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
