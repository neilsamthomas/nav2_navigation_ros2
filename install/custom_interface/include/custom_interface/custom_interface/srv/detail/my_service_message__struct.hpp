// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:srv/MyServiceMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__STRUCT_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interface__srv__MyServiceMessage_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__srv__MyServiceMessage_Request __declspec(deprecated)
#endif

namespace custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyServiceMessage_Request_
{
  using Type = MyServiceMessage_Request_<ContainerAllocator>;

  explicit MyServiceMessage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  explicit MyServiceMessage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__srv__MyServiceMessage_Request
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__srv__MyServiceMessage_Request
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyServiceMessage_Request_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyServiceMessage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyServiceMessage_Request_

// alias to use template instance with default allocator
using MyServiceMessage_Request =
  custom_interface::srv::MyServiceMessage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interface


#ifndef _WIN32
# define DEPRECATED__custom_interface__srv__MyServiceMessage_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__srv__MyServiceMessage_Response __declspec(deprecated)
#endif

namespace custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyServiceMessage_Response_
{
  using Type = MyServiceMessage_Response_<ContainerAllocator>;

  explicit MyServiceMessage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navigation_successful = false;
      this->message = "";
    }
  }

  explicit MyServiceMessage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navigation_successful = false;
      this->message = "";
    }
  }

  // field types and members
  using _navigation_successful_type =
    bool;
  _navigation_successful_type navigation_successful;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__navigation_successful(
    const bool & _arg)
  {
    this->navigation_successful = _arg;
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
    custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__srv__MyServiceMessage_Response
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__srv__MyServiceMessage_Response
    std::shared_ptr<custom_interface::srv::MyServiceMessage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyServiceMessage_Response_ & other) const
  {
    if (this->navigation_successful != other.navigation_successful) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyServiceMessage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyServiceMessage_Response_

// alias to use template instance with default allocator
using MyServiceMessage_Response =
  custom_interface::srv::MyServiceMessage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interface

namespace custom_interface
{

namespace srv
{

struct MyServiceMessage
{
  using Request = custom_interface::srv::MyServiceMessage_Request;
  using Response = custom_interface::srv::MyServiceMessage_Response;
};

}  // namespace srv

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__STRUCT_HPP_
