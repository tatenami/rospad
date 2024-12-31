// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice
#include "pad_msg/msg/detail/pad__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `buttons`
// Member `axes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pad_msg__msg__Pad__init(pad_msg__msg__Pad * msg)
{
  if (!msg) {
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->buttons, 0)) {
    pad_msg__msg__Pad__fini(msg);
    return false;
  }
  // axes
  if (!rosidl_runtime_c__float__Sequence__init(&msg->axes, 0)) {
    pad_msg__msg__Pad__fini(msg);
    return false;
  }
  return true;
}

void
pad_msg__msg__Pad__fini(pad_msg__msg__Pad * msg)
{
  if (!msg) {
    return;
  }
  // buttons
  rosidl_runtime_c__boolean__Sequence__fini(&msg->buttons);
  // axes
  rosidl_runtime_c__float__Sequence__fini(&msg->axes);
}

bool
pad_msg__msg__Pad__are_equal(const pad_msg__msg__Pad * lhs, const pad_msg__msg__Pad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->buttons), &(rhs->buttons)))
  {
    return false;
  }
  // axes
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->axes), &(rhs->axes)))
  {
    return false;
  }
  return true;
}

bool
pad_msg__msg__Pad__copy(
  const pad_msg__msg__Pad * input,
  pad_msg__msg__Pad * output)
{
  if (!input || !output) {
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->buttons), &(output->buttons)))
  {
    return false;
  }
  // axes
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->axes), &(output->axes)))
  {
    return false;
  }
  return true;
}

pad_msg__msg__Pad *
pad_msg__msg__Pad__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pad_msg__msg__Pad * msg = (pad_msg__msg__Pad *)allocator.allocate(sizeof(pad_msg__msg__Pad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pad_msg__msg__Pad));
  bool success = pad_msg__msg__Pad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pad_msg__msg__Pad__destroy(pad_msg__msg__Pad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pad_msg__msg__Pad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pad_msg__msg__Pad__Sequence__init(pad_msg__msg__Pad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pad_msg__msg__Pad * data = NULL;

  if (size) {
    data = (pad_msg__msg__Pad *)allocator.zero_allocate(size, sizeof(pad_msg__msg__Pad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pad_msg__msg__Pad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pad_msg__msg__Pad__fini(&data[i - 1]);
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
pad_msg__msg__Pad__Sequence__fini(pad_msg__msg__Pad__Sequence * array)
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
      pad_msg__msg__Pad__fini(&array->data[i]);
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

pad_msg__msg__Pad__Sequence *
pad_msg__msg__Pad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pad_msg__msg__Pad__Sequence * array = (pad_msg__msg__Pad__Sequence *)allocator.allocate(sizeof(pad_msg__msg__Pad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pad_msg__msg__Pad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pad_msg__msg__Pad__Sequence__destroy(pad_msg__msg__Pad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pad_msg__msg__Pad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pad_msg__msg__Pad__Sequence__are_equal(const pad_msg__msg__Pad__Sequence * lhs, const pad_msg__msg__Pad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pad_msg__msg__Pad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pad_msg__msg__Pad__Sequence__copy(
  const pad_msg__msg__Pad__Sequence * input,
  pad_msg__msg__Pad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pad_msg__msg__Pad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pad_msg__msg__Pad * data =
      (pad_msg__msg__Pad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pad_msg__msg__Pad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pad_msg__msg__Pad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pad_msg__msg__Pad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
