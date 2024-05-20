// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:srv/MyServiceMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__BUILDER_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interface/srv/detail/my_service_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_MyServiceMessage_Request_label
{
public:
  Init_MyServiceMessage_Request_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::MyServiceMessage_Request label(::custom_interface::srv::MyServiceMessage_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::MyServiceMessage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::MyServiceMessage_Request>()
{
  return custom_interface::srv::builder::Init_MyServiceMessage_Request_label();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_MyServiceMessage_Response_message
{
public:
  explicit Init_MyServiceMessage_Response_message(::custom_interface::srv::MyServiceMessage_Response & msg)
  : msg_(msg)
  {}
  ::custom_interface::srv::MyServiceMessage_Response message(::custom_interface::srv::MyServiceMessage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::MyServiceMessage_Response msg_;
};

class Init_MyServiceMessage_Response_navigation_successful
{
public:
  Init_MyServiceMessage_Response_navigation_successful()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyServiceMessage_Response_message navigation_successful(::custom_interface::srv::MyServiceMessage_Response::_navigation_successful_type arg)
  {
    msg_.navigation_successful = std::move(arg);
    return Init_MyServiceMessage_Response_message(msg_);
  }

private:
  ::custom_interface::srv::MyServiceMessage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::MyServiceMessage_Response>()
{
  return custom_interface::srv::builder::Init_MyServiceMessage_Response_navigation_successful();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__BUILDER_HPP_
