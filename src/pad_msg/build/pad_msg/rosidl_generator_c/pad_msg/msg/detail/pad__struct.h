// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pad_msg/msg/pad.h"


#ifndef PAD_MSG__MSG__DETAIL__PAD__STRUCT_H_
#define PAD_MSG__MSG__DETAIL__PAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'buttons'
// Member 'axes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Pad in the package pad_msg.
typedef struct pad_msg__msg__Pad
{
  rosidl_runtime_c__boolean__Sequence buttons;
  rosidl_runtime_c__float__Sequence axes;
} pad_msg__msg__Pad;

// Struct for a sequence of pad_msg__msg__Pad.
typedef struct pad_msg__msg__Pad__Sequence
{
  pad_msg__msg__Pad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pad_msg__msg__Pad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAD_MSG__MSG__DETAIL__PAD__STRUCT_H_
