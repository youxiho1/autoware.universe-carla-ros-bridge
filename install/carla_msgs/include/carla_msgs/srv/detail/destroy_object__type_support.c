// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:srv/DestroyObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/srv/detail/destroy_object__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/srv/detail/destroy_object__functions.h"
#include "carla_msgs/srv/detail/destroy_object__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__srv__DestroyObject_Request__init(message_memory);
}

void DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_fini_function(void * message_memory)
{
  carla_msgs__srv__DestroyObject_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__DestroyObject_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_members = {
  "carla_msgs__srv",  // message namespace
  "DestroyObject_Request",  // message name
  1,  // number of fields
  sizeof(carla_msgs__srv__DestroyObject_Request),
  DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_member_array,  // message members
  DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_type_support_handle = {
  0,
  &DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, DestroyObject_Request)() {
  if (!DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_type_support_handle.typesupport_identifier) {
    DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DestroyObject_Request__rosidl_typesupport_introspection_c__DestroyObject_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carla_msgs/srv/detail/destroy_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carla_msgs/srv/detail/destroy_object__functions.h"
// already included above
// #include "carla_msgs/srv/detail/destroy_object__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__srv__DestroyObject_Response__init(message_memory);
}

void DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_fini_function(void * message_memory)
{
  carla_msgs__srv__DestroyObject_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__DestroyObject_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_members = {
  "carla_msgs__srv",  // message namespace
  "DestroyObject_Response",  // message name
  1,  // number of fields
  sizeof(carla_msgs__srv__DestroyObject_Response),
  DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_member_array,  // message members
  DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_type_support_handle = {
  0,
  &DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, DestroyObject_Response)() {
  if (!DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_type_support_handle.typesupport_identifier) {
    DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DestroyObject_Response__rosidl_typesupport_introspection_c__DestroyObject_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carla_msgs/srv/detail/destroy_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_service_members = {
  "carla_msgs__srv",  // service namespace
  "DestroyObject",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_Request_message_type_support_handle,
  NULL  // response message
  // carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_Response_message_type_support_handle
};

static rosidl_service_type_support_t carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_service_type_support_handle = {
  0,
  &carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, DestroyObject_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, DestroyObject_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, DestroyObject)() {
  if (!carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_service_type_support_handle.typesupport_identifier) {
    carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, DestroyObject_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, DestroyObject_Response)()->data;
  }

  return &carla_msgs__srv__detail__destroy_object__rosidl_typesupport_introspection_c__DestroyObject_service_type_support_handle;
}
