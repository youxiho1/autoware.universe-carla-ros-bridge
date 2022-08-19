// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_control_msgs:msg/LongitudinalCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__STRUCT_H_

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
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/LongitudinalCommand in the package autoware_auto_control_msgs.
typedef struct autoware_auto_control_msgs__msg__LongitudinalCommand
{
  builtin_interfaces__msg__Time stamp;
  float speed;
  float acceleration;
  float jerk;
} autoware_auto_control_msgs__msg__LongitudinalCommand;

// Struct for a sequence of autoware_auto_control_msgs__msg__LongitudinalCommand.
typedef struct autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence
{
  autoware_auto_control_msgs__msg__LongitudinalCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__STRUCT_H_
