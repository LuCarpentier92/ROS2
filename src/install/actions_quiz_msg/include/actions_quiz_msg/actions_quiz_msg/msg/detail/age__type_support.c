// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from actions_quiz_msg:msg/Age.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "actions_quiz_msg/msg/detail/age__rosidl_typesupport_introspection_c.h"
#include "actions_quiz_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "actions_quiz_msg/msg/detail/age__functions.h"
#include "actions_quiz_msg/msg/detail/age__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  actions_quiz_msg__msg__Age__init(message_memory);
}

void actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_fini_function(void * message_memory)
{
  actions_quiz_msg__msg__Age__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_member_array[3] = {
  {
    "year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actions_quiz_msg__msg__Age, year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actions_quiz_msg__msg__Age, month),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actions_quiz_msg__msg__Age, day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_members = {
  "actions_quiz_msg__msg",  // message namespace
  "Age",  // message name
  3,  // number of fields
  sizeof(actions_quiz_msg__msg__Age),
  actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_member_array,  // message members
  actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_init_function,  // function to initialize message memory (memory has to be allocated)
  actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_type_support_handle = {
  0,
  &actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_actions_quiz_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions_quiz_msg, msg, Age)() {
  if (!actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_type_support_handle.typesupport_identifier) {
    actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &actions_quiz_msg__msg__Age__rosidl_typesupport_introspection_c__Age_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
