// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_control_msgs:msg/Lateral.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__STRUCT_H_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/Lateral in the package autoware_control_msgs.
typedef struct autoware_control_msgs__msg__Lateral
{
  builtin_interfaces__msg__Time stamp;
  builtin_interfaces__msg__Time control_time;
  float steering_tire_angle;
  float steering_tire_rotation_rate;
  bool is_defined_steering_tire_rotation_rate;
} autoware_control_msgs__msg__Lateral;

// Struct for a sequence of autoware_control_msgs__msg__Lateral.
typedef struct autoware_control_msgs__msg__Lateral__Sequence
{
  autoware_control_msgs__msg__Lateral * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_control_msgs__msg__Lateral__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__STRUCT_H_
