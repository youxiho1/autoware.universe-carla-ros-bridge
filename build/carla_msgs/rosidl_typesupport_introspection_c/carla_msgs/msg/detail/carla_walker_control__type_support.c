// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaWalkerControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_walker_control__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_walker_control__functions.h"
#include "carla_msgs/msg/detail/carla_walker_control__struct.h"


// Include directives for member types
// Member `direction`
#include "geometry_msgs/msg/vector3.h"
// Member `direction`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaWalkerControl__init(message_memory);
}

void CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaWalkerControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_member_array[3] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaWalkerControl, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaWalkerControl, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jump",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaWalkerControl, jump),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaWalkerControl",  // message name
  3,  // number of fields
  sizeof(carla_msgs__msg__CarlaWalkerControl),
  CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_member_array,  // message members
  CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_type_support_handle = {
  0,
  &CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaWalkerControl)() {
  CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_type_support_handle.typesupport_identifier) {
    CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaWalkerControl__rosidl_typesupport_introspection_c__CarlaWalkerControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
