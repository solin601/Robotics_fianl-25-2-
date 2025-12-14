// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckie_led_interfaces:srv/LedColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckie_led_interfaces/srv/detail/led_color__rosidl_typesupport_introspection_c.h"
#include "duckie_led_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckie_led_interfaces/srv/detail/led_color__functions.h"
#include "duckie_led_interfaces/srv/detail/led_color__struct.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckie_led_interfaces__srv__LedColor_Request__init(message_memory);
}

void duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_fini_function(void * message_memory)
{
  duckie_led_interfaces__srv__LedColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_member_array[1] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckie_led_interfaces__srv__LedColor_Request, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_members = {
  "duckie_led_interfaces__srv",  // message namespace
  "LedColor_Request",  // message name
  1,  // number of fields
  sizeof(duckie_led_interfaces__srv__LedColor_Request),
  duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_member_array,  // message members
  duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_type_support_handle = {
  0,
  &duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckie_led_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckie_led_interfaces, srv, LedColor_Request)() {
  if (!duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_type_support_handle.typesupport_identifier) {
    duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckie_led_interfaces__srv__LedColor_Request__rosidl_typesupport_introspection_c__LedColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "duckie_led_interfaces/srv/detail/led_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "duckie_led_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "duckie_led_interfaces/srv/detail/led_color__functions.h"
// already included above
// #include "duckie_led_interfaces/srv/detail/led_color__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckie_led_interfaces__srv__LedColor_Response__init(message_memory);
}

void duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_fini_function(void * message_memory)
{
  duckie_led_interfaces__srv__LedColor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckie_led_interfaces__srv__LedColor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckie_led_interfaces__srv__LedColor_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_members = {
  "duckie_led_interfaces__srv",  // message namespace
  "LedColor_Response",  // message name
  2,  // number of fields
  sizeof(duckie_led_interfaces__srv__LedColor_Response),
  duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_member_array,  // message members
  duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_type_support_handle = {
  0,
  &duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckie_led_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckie_led_interfaces, srv, LedColor_Response)() {
  if (!duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_type_support_handle.typesupport_identifier) {
    duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckie_led_interfaces__srv__LedColor_Response__rosidl_typesupport_introspection_c__LedColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "duckie_led_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "duckie_led_interfaces/srv/detail/led_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_service_members = {
  "duckie_led_interfaces__srv",  // service namespace
  "LedColor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_Request_message_type_support_handle,
  NULL  // response message
  // duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_Response_message_type_support_handle
};

static rosidl_service_type_support_t duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_service_type_support_handle = {
  0,
  &duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckie_led_interfaces, srv, LedColor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckie_led_interfaces, srv, LedColor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckie_led_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckie_led_interfaces, srv, LedColor)() {
  if (!duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_service_type_support_handle.typesupport_identifier) {
    duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckie_led_interfaces, srv, LedColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckie_led_interfaces, srv, LedColor_Response)()->data;
  }

  return &duckie_led_interfaces__srv__detail__led_color__rosidl_typesupport_introspection_c__LedColor_service_type_support_handle;
}
