// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duckie_led_interfaces:srv/LedColor.idl
// generated code does not contain a copyright notice

#ifndef DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__STRUCT_HPP_
#define DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duckie_led_interfaces__srv__LedColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__duckie_led_interfaces__srv__LedColor_Request __declspec(deprecated)
#endif

namespace duckie_led_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedColor_Request_
{
  using Type = LedColor_Request_<ContainerAllocator>;

  explicit LedColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  explicit LedColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duckie_led_interfaces__srv__LedColor_Request
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duckie_led_interfaces__srv__LedColor_Request
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedColor_Request_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedColor_Request_

// alias to use template instance with default allocator
using LedColor_Request =
  duckie_led_interfaces::srv::LedColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duckie_led_interfaces


#ifndef _WIN32
# define DEPRECATED__duckie_led_interfaces__srv__LedColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__duckie_led_interfaces__srv__LedColor_Response __declspec(deprecated)
#endif

namespace duckie_led_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedColor_Response_
{
  using Type = LedColor_Response_<ContainerAllocator>;

  explicit LedColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit LedColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duckie_led_interfaces__srv__LedColor_Response
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duckie_led_interfaces__srv__LedColor_Response
    std::shared_ptr<duckie_led_interfaces::srv::LedColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedColor_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedColor_Response_

// alias to use template instance with default allocator
using LedColor_Response =
  duckie_led_interfaces::srv::LedColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duckie_led_interfaces

namespace duckie_led_interfaces
{

namespace srv
{

struct LedColor
{
  using Request = duckie_led_interfaces::srv::LedColor_Request;
  using Response = duckie_led_interfaces::srv::LedColor_Response;
};

}  // namespace srv

}  // namespace duckie_led_interfaces

#endif  // DUCKIE_LED_INTERFACES__SRV__DETAIL__LED_COLOR__STRUCT_HPP_
