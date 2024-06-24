// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actions_quiz_msg:msg/Age.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__BUILDER_HPP_
#define ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actions_quiz_msg/msg/detail/age__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actions_quiz_msg
{

namespace msg
{

namespace builder
{

class Init_Age_day
{
public:
  explicit Init_Age_day(::actions_quiz_msg::msg::Age & msg)
  : msg_(msg)
  {}
  ::actions_quiz_msg::msg::Age day(::actions_quiz_msg::msg::Age::_day_type arg)
  {
    msg_.day = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_quiz_msg::msg::Age msg_;
};

class Init_Age_month
{
public:
  explicit Init_Age_month(::actions_quiz_msg::msg::Age & msg)
  : msg_(msg)
  {}
  Init_Age_day month(::actions_quiz_msg::msg::Age::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_Age_day(msg_);
  }

private:
  ::actions_quiz_msg::msg::Age msg_;
};

class Init_Age_year
{
public:
  Init_Age_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Age_month year(::actions_quiz_msg::msg::Age::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_Age_month(msg_);
  }

private:
  ::actions_quiz_msg::msg::Age msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_quiz_msg::msg::Age>()
{
  return actions_quiz_msg::msg::builder::Init_Age_year();
}

}  // namespace actions_quiz_msg

#endif  // ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__BUILDER_HPP_
