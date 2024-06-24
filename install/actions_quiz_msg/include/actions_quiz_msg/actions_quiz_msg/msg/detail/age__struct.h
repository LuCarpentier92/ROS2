// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actions_quiz_msg:msg/Age.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__STRUCT_H_
#define ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Age in the package actions_quiz_msg.
typedef struct actions_quiz_msg__msg__Age
{
  int32_t year;
  int32_t month;
  int32_t day;
} actions_quiz_msg__msg__Age;

// Struct for a sequence of actions_quiz_msg__msg__Age.
typedef struct actions_quiz_msg__msg__Age__Sequence
{
  actions_quiz_msg__msg__Age * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions_quiz_msg__msg__Age__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONS_QUIZ_MSG__MSG__DETAIL__AGE__STRUCT_H_
