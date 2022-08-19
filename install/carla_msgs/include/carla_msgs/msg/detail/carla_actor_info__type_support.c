// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaActorInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_actor_info__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_actor_info__functions.h"
#include "carla_msgs/msg/detail/carla_actor_info__struct.h"


// Include directives for member types
// Member `type`
// Member `rolename`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaActorInfo__init(message_memory);
}

void CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaActorInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaActorInfo, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parent_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaActorInfo, parent_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaActorInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rolename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaActorInfo, rolename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaActorInfo",  // message name
  4,  // number of fields
  sizeof(carla_msgs__msg__CarlaActorInfo),
  CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_member_array,  // message members
  CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_type_support_handle = {
  0,
  &CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaActorInfo)() {
  if (!CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_type_support_handle.typesupport_identifier) {
    CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaActorInfo__rosidl_typesupport_introspection_c__CarlaActorInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
