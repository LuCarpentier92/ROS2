// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actions_quiz_msg:srv/MyCustomServiceMessage.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS_QUIZ_MSG__SRV__DETAIL__MY_CUSTOM_SERVICE_MESSAGE__TRAITS_HPP_
#define ACTIONS_QUIZ_MSG__SRV__DETAIL__MY_CUSTOM_SERVICE_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "actions_quiz_msg/srv/detail/my_custom_service_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace actions_quiz_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const MyCustomServiceMessage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: move
  {
    out << "move: ";
    rosidl_generator_traits::value_to_yaml(msg.move, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyCustomServiceMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move: ";
    rosidl_generator_traits::value_to_yaml(msg.move, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyCustomServiceMessage_Request & msg, bool use_flow_style = false)
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

}  // namespace actions_quiz_msg

namespace rosidl_generator_traits
{

[[deprecated("use actions_quiz_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_quiz_msg::srv::MyCustomServiceMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_quiz_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_quiz_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const actions_quiz_msg::srv::MyCustomServiceMessage_Request & msg)
{
  return actions_quiz_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<actions_quiz_msg::srv::MyCustomServiceMessage_Request>()
{
  return "actions_quiz_msg::srv::MyCustomServiceMessage_Request";
}

template<>
inline const char * name<actions_quiz_msg::srv::MyCustomServiceMessage_Request>()
{
  return "actions_quiz_msg/srv/MyCustomServiceMessage_Request";
}

template<>
struct has_fixed_size<actions_quiz_msg::srv::MyCustomServiceMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actions_quiz_msg::srv::MyCustomServiceMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actions_quiz_msg::srv::MyCustomServiceMessage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace actions_quiz_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const MyCustomServiceMessage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyCustomServiceMessage_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyCustomServiceMessage_Response & msg, bool use_flow_style = false)
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

}  // namespace actions_quiz_msg

namespace rosidl_generator_traits
{

[[deprecated("use actions_quiz_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_quiz_msg::srv::MyCustomServiceMessage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_quiz_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_quiz_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const actions_quiz_msg::srv::MyCustomServiceMessage_Response & msg)
{
  return actions_quiz_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<actions_quiz_msg::srv::MyCustomServiceMessage_Response>()
{
  return "actions_quiz_msg::srv::MyCustomServiceMessage_Response";
}

template<>
inline const char * name<actions_quiz_msg::srv::MyCustomServiceMessage_Response>()
{
  return "actions_quiz_msg/srv/MyCustomServiceMessage_Response";
}

template<>
struct has_fixed_size<actions_quiz_msg::srv::MyCustomServiceMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actions_quiz_msg::srv::MyCustomServiceMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actions_quiz_msg::srv::MyCustomServiceMessage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actions_quiz_msg::srv::MyCustomServiceMessage>()
{
  return "actions_quiz_msg::srv::MyCustomServiceMessage";
}

template<>
inline const char * name<actions_quiz_msg::srv::MyCustomServiceMessage>()
{
  return "actions_quiz_msg/srv/MyCustomServiceMessage";
}

template<>
struct has_fixed_size<actions_quiz_msg::srv::MyCustomServiceMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<actions_quiz_msg::srv::MyCustomServiceMessage_Request>::value &&
    has_fixed_size<actions_quiz_msg::srv::MyCustomServiceMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<actions_quiz_msg::srv::MyCustomServiceMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<actions_quiz_msg::srv::MyCustomServiceMessage_Request>::value &&
    has_bounded_size<actions_quiz_msg::srv::MyCustomServiceMessage_Response>::value
  >
{
};

template<>
struct is_service<actions_quiz_msg::srv::MyCustomServiceMessage>
  : std::true_type
{
};

template<>
struct is_service_request<actions_quiz_msg::srv::MyCustomServiceMessage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<actions_quiz_msg::srv::MyCustomServiceMessage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ACTIONS_QUIZ_MSG__SRV__DETAIL__MY_CUSTOM_SERVICE_MESSAGE__TRAITS_HPP_
