// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actions_quiz_msg:srv/MyCustomServiceMessage.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS_QUIZ_MSG__SRV__DETAIL__MY_CUSTOM_SERVICE_MESSAGE__BUILDER_HPP_
#define ACTIONS_QUIZ_MSG__SRV__DETAIL__MY_CUSTOM_SERVICE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actions_quiz_msg/srv/detail/my_custom_service_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actions_quiz_msg
{

namespace srv
{

namespace builder
{

class Init_MyCustomServiceMessage_Request_move
{
public:
  Init_MyCustomServiceMessage_Request_move()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions_quiz_msg::srv::MyCustomServiceMessage_Request move(::actions_quiz_msg::srv::MyCustomServiceMessage_Request::_move_type arg)
  {
    msg_.move = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_quiz_msg::srv::MyCustomServiceMessage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_quiz_msg::srv::MyCustomServiceMessage_Request>()
{
  return actions_quiz_msg::srv::builder::Init_MyCustomServiceMessage_Request_move();
}

}  // namespace actions_quiz_msg


namespace actions_quiz_msg
{

namespace srv
{

namespace builder
{

class Init_MyCustomServiceMessage_Response_success
{
public:
  Init_MyCustomServiceMessage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions_quiz_msg::srv::MyCustomServiceMessage_Response success(::actions_quiz_msg::srv::MyCustomServiceMessage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_quiz_msg::srv::MyCustomServiceMessage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_quiz_msg::srv::MyCustomServiceMessage_Response>()
{
  return actions_quiz_msg::srv::builder::Init_MyCustomServiceMessage_Response_success();
}

}  // namespace actions_quiz_msg

#endif  // ACTIONS_QUIZ_MSG__SRV__DETAIL__MY_CUSTOM_SERVICE_MESSAGE__BUILDER_HPP_
