// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_control_msgs/msg/detail/control_horizon__rosidl_typesupport_introspection_c.h"
#include "autoware_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_control_msgs/msg/detail/control_horizon__functions.h"
#include "autoware_control_msgs/msg/detail/control_horizon__struct.h"


// Include directives for member types
// Member `stamp`
// Member `control_time`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
// Member `control_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `controls`
#include "autoware_control_msgs/msg/control.h"
// Member `controls`
#include "autoware_control_msgs/msg/detail/control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_control_msgs__msg__ControlHorizon__init(message_memory);
}

void ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_fini_function(void * message_memory)
{
  autoware_control_msgs__msg__ControlHorizon__fini(message_memory);
}

size_t ControlHorizon__rosidl_typesupport_introspection_c__size_function__Control__controls(
  const void * untyped_member)
{
  const autoware_control_msgs__msg__Control__Sequence * member =
    (const autoware_control_msgs__msg__Control__Sequence *)(untyped_member);
  return member->size;
}

const void * ControlHorizon__rosidl_typesupport_introspection_c__get_const_function__Control__controls(
  const void * untyped_member, size_t index)
{
  const autoware_control_msgs__msg__Control__Sequence * member =
    (const autoware_control_msgs__msg__Control__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ControlHorizon__rosidl_typesupport_introspection_c__get_function__Control__controls(
  void * untyped_member, size_t index)
{
  autoware_control_msgs__msg__Control__Sequence * member =
    (autoware_control_msgs__msg__Control__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ControlHorizon__rosidl_typesupport_introspection_c__resize_function__Control__controls(
  void * untyped_member, size_t size)
{
  autoware_control_msgs__msg__Control__Sequence * member =
    (autoware_control_msgs__msg__Control__Sequence *)(untyped_member);
  autoware_control_msgs__msg__Control__Sequence__fini(member);
  return autoware_control_msgs__msg__Control__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs__msg__ControlHorizon, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs__msg__ControlHorizon, control_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_step_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs__msg__ControlHorizon, time_step_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs__msg__ControlHorizon, controls),  // bytes offset in struct
    NULL,  // default value
    ControlHorizon__rosidl_typesupport_introspection_c__size_function__Control__controls,  // size() function pointer
    ControlHorizon__rosidl_typesupport_introspection_c__get_const_function__Control__controls,  // get_const(index) function pointer
    ControlHorizon__rosidl_typesupport_introspection_c__get_function__Control__controls,  // get(index) function pointer
    ControlHorizon__rosidl_typesupport_introspection_c__resize_function__Control__controls  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_members = {
  "autoware_control_msgs__msg",  // message namespace
  "ControlHorizon",  // message name
  4,  // number of fields
  sizeof(autoware_control_msgs__msg__ControlHorizon),
  ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_member_array,  // message members
  ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_type_support_handle = {
  0,
  &ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_control_msgs, msg, ControlHorizon)() {
  ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_control_msgs, msg, Control)();
  if (!ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_type_support_handle.typesupport_identifier) {
    ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ControlHorizon__rosidl_typesupport_introspection_c__ControlHorizon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
