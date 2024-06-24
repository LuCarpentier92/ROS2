// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actions_quiz_msg:msg/Age.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__TRAITS_HPP_
#define ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "actions_quiz_msg/msg/detail/age__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace actions_quiz_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Age & msg,
  std::ostream & out)
{
  out << "{";
  // member: year
  {
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << ", ";
  }

  // member: month
  {
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << ", ";
  }

  // member: day
  {
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Age & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << "\n";
  }

  // member: month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << "\n";
  }

  // member: day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Age & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace actions_quiz_msg

namespace rosidl_generator_traits
{

[[deprecated("use actions_quiz_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_quiz_msg::msg::Age & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_quiz_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_quiz_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const actions_quiz_msg::msg::Age & msg)
{
  return actions_quiz_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<actions_quiz_msg::msg::Age>()
{
  return "actions_quiz_msg::msg::Age";
}

template<>
inline const char * name<actions_quiz_msg::msg::Age>()
{
  return "actions_quiz_msg/msg/Age";
}

template<>
struct has_fixed_size<actions_quiz_msg::msg::Age>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actions_quiz_msg::msg::Age>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actions_quiz_msg::msg::Age>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__TRAITS_HPP_
