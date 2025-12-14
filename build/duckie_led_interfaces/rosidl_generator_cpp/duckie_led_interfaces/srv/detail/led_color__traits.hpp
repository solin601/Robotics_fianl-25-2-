// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duckie_led_interfaces:srv/LedColor.idl
// generated code does not contain a copyright notice

#ifndef DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__TRAITS_HPP_
#define DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duckie_led_interfaces/srv/detail/led_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace duckie_led_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedColor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace duckie_led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use duckie_led_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const duckie_led_interfaces::srv::LedColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  duckie_led_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duckie_led_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const duckie_led_interfaces::srv::LedColor_Request & msg)
{
  return duckie_led_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duckie_led_interfaces::srv::LedColor_Request>()
{
  return "duckie_led_interfaces::srv::LedColor_Request";
}

template<>
inline const char * name<duckie_led_interfaces::srv::LedColor_Request>()
{
  return "duckie_led_interfaces/srv/LedColor_Request";
}

template<>
struct has_fixed_size<duckie_led_interfaces::srv::LedColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duckie_led_interfaces::srv::LedColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duckie_led_interfaces::srv::LedColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace duckie_led_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedColor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedColor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace duckie_led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use duckie_led_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const duckie_led_interfaces::srv::LedColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  duckie_led_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duckie_led_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const duckie_led_interfaces::srv::LedColor_Response & msg)
{
  return duckie_led_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duckie_led_interfaces::srv::LedColor_Response>()
{
  return "duckie_led_interfaces::srv::LedColor_Response";
}

template<>
inline const char * name<duckie_led_interfaces::srv::LedColor_Response>()
{
  return "duckie_led_interfaces/srv/LedColor_Response";
}

template<>
struct has_fixed_size<duckie_led_interfaces::srv::LedColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duckie_led_interfaces::srv::LedColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duckie_led_interfaces::srv::LedColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<duckie_led_interfaces::srv::LedColor>()
{
  return "duckie_led_interfaces::srv::LedColor";
}

template<>
inline const char * name<duckie_led_interfaces::srv::LedColor>()
{
  return "duckie_led_interfaces/srv/LedColor";
}

template<>
struct has_fixed_size<duckie_led_interfaces::srv::LedColor>
  : std::integral_constant<
    bool,
    has_fixed_size<duckie_led_interfaces::srv::LedColor_Request>::value &&
    has_fixed_size<duckie_led_interfaces::srv::LedColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<duckie_led_interfaces::srv::LedColor>
  : std::integral_constant<
    bool,
    has_bounded_size<duckie_led_interfaces::srv::LedColor_Request>::value &&
    has_bounded_size<duckie_led_interfaces::srv::LedColor_Response>::value
  >
{
};

template<>
struct is_service<duckie_led_interfaces::srv::LedColor>
  : std::true_type
{
};

template<>
struct is_service_request<duckie_led_interfaces::srv::LedColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<duckie_led_interfaces::srv::LedColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__TRAITS_HPP_
