// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_control_msgs:msg/Lateral.idl
// generated code does not contain a copyright notice
#include "autoware_control_msgs/msg/detail/lateral__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_control_msgs/msg/detail/lateral__struct.h"
#include "autoware_control_msgs/msg/detail/lateral__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // control_time, stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_control_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_control_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _Lateral__ros_msg_type = autoware_control_msgs__msg__Lateral;

static bool _Lateral__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Lateral__ros_msg_type * ros_message = static_cast<const _Lateral__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: control_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->control_time, cdr))
    {
      return false;
    }
  }

  // Field name: steering_tire_angle
  {
    cdr << ros_message->steering_tire_angle;
  }

  // Field name: steering_tire_rotation_rate
  {
    cdr << ros_message->steering_tire_rotation_rate;
  }

  // Field name: is_defined_steering_tire_rotation_rate
  {
    cdr << (ros_message->is_defined_steering_tire_rotation_rate ? true : false);
  }

  return true;
}

static bool _Lateral__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Lateral__ros_msg_type * ros_message = static_cast<_Lateral__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: control_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->control_time))
    {
      return false;
    }
  }

  // Field name: steering_tire_angle
  {
    cdr >> ros_message->steering_tire_angle;
  }

  // Field name: steering_tire_rotation_rate
  {
    cdr >> ros_message->steering_tire_rotation_rate;
  }

  // Field name: is_defined_steering_tire_rotation_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_defined_steering_tire_rotation_rate = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_control_msgs
size_t get_serialized_size_autoware_control_msgs__msg__Lateral(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Lateral__ros_msg_type * ros_message = static_cast<const _Lateral__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name control_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->control_time), current_alignment);
  // field.name steering_tire_angle
  {
    size_t item_size = sizeof(ros_message->steering_tire_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_tire_rotation_rate
  {
    size_t item_size = sizeof(ros_message->steering_tire_rotation_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_defined_steering_tire_rotation_rate
  {
    size_t item_size = sizeof(ros_message->is_defined_steering_tire_rotation_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Lateral__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_control_msgs__msg__Lateral(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_control_msgs
size_t max_serialized_size_autoware_control_msgs__msg__Lateral(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: control_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: steering_tire_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_tire_rotation_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_defined_steering_tire_rotation_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Lateral__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_control_msgs__msg__Lateral(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Lateral = {
  "autoware_control_msgs::msg",
  "Lateral",
  _Lateral__cdr_serialize,
  _Lateral__cdr_deserialize,
  _Lateral__get_serialized_size,
  _Lateral__max_serialized_size
};

static rosidl_message_type_support_t _Lateral__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Lateral,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_control_msgs, msg, Lateral)() {
  return &_Lateral__type_support;
}

#if defined(__cplusplus)
}
#endif
