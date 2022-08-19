// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_control_msgs:msg/AckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_H_

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

// Struct defined in msg/AckermannLateralCommand in the package autoware_auto_control_msgs.
typedef struct autoware_auto_control_msgs__msg__AckermannLateralCommand
{
  builtin_interfaces__msg__Time stamp;
  float steering_tire_angle;
  float steering_tire_rotation_rate;
} autoware_auto_control_msgs__msg__AckermannLateralCommand;

// Struct for a sequence of autoware_auto_control_msgs__msg__AckermannLateralCommand.
typedef struct autoware_auto_control_msgs__msg__AckermannLateralCommand__Sequence
{
  autoware_auto_control_msgs__msg__AckermannLateralCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_control_msgs__msg__AckermannLateralCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_H_
