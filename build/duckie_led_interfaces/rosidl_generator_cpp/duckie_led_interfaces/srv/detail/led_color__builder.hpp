// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duckie_led_interfaces:srv/LedColor.idl
// generated code does not contain a copyright notice

#ifndef DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__BUILDER_HPP_
#define DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duckie_led_interfaces/srv/detail/led_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duckie_led_interfaces
{

namespace srv
{

namespace builder
{

class Init_LedColor_Request_color
{
public:
  Init_LedColor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duckie_led_interfaces::srv::LedColor_Request color(::duckie_led_interfaces::srv::LedColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duckie_led_interfaces::srv::LedColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duckie_led_interfaces::srv::LedColor_Request>()
{
  return duckie_led_interfaces::srv::builder::Init_LedColor_Request_color();
}

}  // namespace duckie_led_interfaces


namespace duckie_led_interfaces
{

namespace srv
{

namespace builder
{

class Init_LedColor_Response_message
{
public:
  explicit Init_LedColor_Response_message(::duckie_led_interfaces::srv::LedColor_Response & msg)
  : msg_(msg)
  {}
  ::duckie_led_interfaces::srv::LedColor_Response message(::duckie_led_interfaces::srv::LedColor_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duckie_led_interfaces::srv::LedColor_Response msg_;
};

class Init_LedColor_Response_success
{
public:
  Init_LedColor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedColor_Response_message success(::duckie_led_interfaces::srv::LedColor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LedColor_Response_message(msg_);
  }

private:
  ::duckie_led_interfaces::srv::LedColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duckie_led_interfaces::srv::LedColor_Response>()
{
  return duckie_led_interfaces::srv::builder::Init_LedColor_Response_success();
}

}  // namespace duckie_led_interfaces

#endif  // DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__BUILDER_HPP_
