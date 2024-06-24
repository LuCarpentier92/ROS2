// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from actions_quiz_msg:srv/MyCustomServiceMessage.idl
// generated code does not contain a copyright notice
#include "actions_quiz_msg/srv/detail/my_custom_service_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `move`
#include "rosidl_runtime_c/string_functions.h"

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Request__init(actions_quiz_msg__srv__MyCustomServiceMessage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__init(&msg->move)) {
    actions_quiz_msg__srv__MyCustomServiceMessage_Request__fini(msg);
    return false;
  }
  return true;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Request__fini(actions_quiz_msg__srv__MyCustomServiceMessage_Request * msg)
{
  if (!msg) {
    return;
  }
  // move
  rosidl_runtime_c__String__fini(&msg->move);
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Request__are_equal(const actions_quiz_msg__srv__MyCustomServiceMessage_Request * lhs, const actions_quiz_msg__srv__MyCustomServiceMessage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move), &(rhs->move)))
  {
    return false;
  }
  return true;
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Request__copy(
  const actions_quiz_msg__srv__MyCustomServiceMessage_Request * input,
  actions_quiz_msg__srv__MyCustomServiceMessage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__copy(
      &(input->move), &(output->move)))
  {
    return false;
  }
  return true;
}

actions_quiz_msg__srv__MyCustomServiceMessage_Request *
actions_quiz_msg__srv__MyCustomServiceMessage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions_quiz_msg__srv__MyCustomServiceMessage_Request * msg = (actions_quiz_msg__srv__MyCustomServiceMessage_Request *)allocator.allocate(sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Request));
  bool success = actions_quiz_msg__srv__MyCustomServiceMessage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Request__destroy(actions_quiz_msg__srv__MyCustomServiceMessage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions_quiz_msg__srv__MyCustomServiceMessage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__init(actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions_quiz_msg__srv__MyCustomServiceMessage_Request * data = NULL;

  if (size) {
    data = (actions_quiz_msg__srv__MyCustomServiceMessage_Request *)allocator.zero_allocate(size, sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions_quiz_msg__srv__MyCustomServiceMessage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions_quiz_msg__srv__MyCustomServiceMessage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__fini(actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions_quiz_msg__srv__MyCustomServiceMessage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence *
actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * array = (actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence *)allocator.allocate(sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__destroy(actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__are_equal(const actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * lhs, const actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions_quiz_msg__srv__MyCustomServiceMessage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence__copy(
  const actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * input,
  actions_quiz_msg__srv__MyCustomServiceMessage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions_quiz_msg__srv__MyCustomServiceMessage_Request * data =
      (actions_quiz_msg__srv__MyCustomServiceMessage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions_quiz_msg__srv__MyCustomServiceMessage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions_quiz_msg__srv__MyCustomServiceMessage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions_quiz_msg__srv__MyCustomServiceMessage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
actions_quiz_msg__srv__MyCustomServiceMessage_Response__init(actions_quiz_msg__srv__MyCustomServiceMessage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Response__fini(actions_quiz_msg__srv__MyCustomServiceMessage_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Response__are_equal(const actions_quiz_msg__srv__MyCustomServiceMessage_Response * lhs, const actions_quiz_msg__srv__MyCustomServiceMessage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Response__copy(
  const actions_quiz_msg__srv__MyCustomServiceMessage_Response * input,
  actions_quiz_msg__srv__MyCustomServiceMessage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

actions_quiz_msg__srv__MyCustomServiceMessage_Response *
actions_quiz_msg__srv__MyCustomServiceMessage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions_quiz_msg__srv__MyCustomServiceMessage_Response * msg = (actions_quiz_msg__srv__MyCustomServiceMessage_Response *)allocator.allocate(sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Response));
  bool success = actions_quiz_msg__srv__MyCustomServiceMessage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Response__destroy(actions_quiz_msg__srv__MyCustomServiceMessage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions_quiz_msg__srv__MyCustomServiceMessage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__init(actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions_quiz_msg__srv__MyCustomServiceMessage_Response * data = NULL;

  if (size) {
    data = (actions_quiz_msg__srv__MyCustomServiceMessage_Response *)allocator.zero_allocate(size, sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions_quiz_msg__srv__MyCustomServiceMessage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions_quiz_msg__srv__MyCustomServiceMessage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__fini(actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions_quiz_msg__srv__MyCustomServiceMessage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence *
actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * array = (actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence *)allocator.allocate(sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__destroy(actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__are_equal(const actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * lhs, const actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions_quiz_msg__srv__MyCustomServiceMessage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence__copy(
  const actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * input,
  actions_quiz_msg__srv__MyCustomServiceMessage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions_quiz_msg__srv__MyCustomServiceMessage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions_quiz_msg__srv__MyCustomServiceMessage_Response * data =
      (actions_quiz_msg__srv__MyCustomServiceMessage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions_quiz_msg__srv__MyCustomServiceMessage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions_quiz_msg__srv__MyCustomServiceMessage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions_quiz_msg__srv__MyCustomServiceMessage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
