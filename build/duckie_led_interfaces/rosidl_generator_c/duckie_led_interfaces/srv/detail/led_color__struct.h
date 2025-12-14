// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckie_led_interfaces:srv/LedColor.idl
// generated code does not contain a copyright notice

#ifndef DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__STRUCT_H_
#define DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LedColor in the package duckie_led_interfaces.
typedef struct duckie_led_interfaces__srv__LedColor_Request
{
  rosidl_runtime_c__String color;
} duckie_led_interfaces__srv__LedColor_Request;

// Struct for a sequence of duckie_led_interfaces__srv__LedColor_Request.
typedef struct duckie_led_interfaces__srv__LedColor_Request__Sequence
{
  duckie_led_interfaces__srv__LedColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckie_led_interfaces__srv__LedColor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LedColor in the package duckie_led_interfaces.
typedef struct duckie_led_interfaces__srv__LedColor_Response
{
  bool success;
  rosidl_runtime_c__String message;
} duckie_led_interfaces__srv__LedColor_Response;

// Struct for a sequence of duckie_led_interfaces__srv__LedColor_Response.
typedef struct duckie_led_interfaces__srv__LedColor_Response__Sequence
{
  duckie_led_interfaces__srv__LedColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckie_led_interfaces__srv__LedColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__STRUCT_H_
