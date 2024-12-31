// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pad_msg/msg/detail/pad__rosidl_typesupport_introspection_c.h"
#include "pad_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pad_msg/msg/detail/pad__functions.h"
#include "pad_msg/msg/detail/pad__struct.h"


// Include directives for member types
// Member `buttons`
// Member `axes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pad_msg__msg__Pad__init(message_memory);
}

void pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_fini_function(void * message_memory)
{
  pad_msg__msg__Pad__fini(message_memory);
}

size_t pad_msg__msg__Pad__rosidl_typesupport_introspection_c__size_function__Pad__buttons(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_const_function__Pad__buttons(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_function__Pad__buttons(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void pad_msg__msg__Pad__rosidl_typesupport_introspection_c__fetch_function__Pad__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_const_function__Pad__buttons(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void pad_msg__msg__Pad__rosidl_typesupport_introspection_c__assign_function__Pad__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_function__Pad__buttons(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool pad_msg__msg__Pad__rosidl_typesupport_introspection_c__resize_function__Pad__buttons(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t pad_msg__msg__Pad__rosidl_typesupport_introspection_c__size_function__Pad__axes(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_const_function__Pad__axes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_function__Pad__axes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pad_msg__msg__Pad__rosidl_typesupport_introspection_c__fetch_function__Pad__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_const_function__Pad__axes(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pad_msg__msg__Pad__rosidl_typesupport_introspection_c__assign_function__Pad__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_function__Pad__axes(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pad_msg__msg__Pad__rosidl_typesupport_introspection_c__resize_function__Pad__axes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_member_array[2] = {
  {
    "buttons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pad_msg__msg__Pad, buttons),  // bytes offset in struct
    NULL,  // default value
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__size_function__Pad__buttons,  // size() function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_const_function__Pad__buttons,  // get_const(index) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_function__Pad__buttons,  // get(index) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__fetch_function__Pad__buttons,  // fetch(index, &value) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__assign_function__Pad__buttons,  // assign(index, value) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__resize_function__Pad__buttons  // resize(index) function pointer
  },
  {
    "axes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pad_msg__msg__Pad, axes),  // bytes offset in struct
    NULL,  // default value
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__size_function__Pad__axes,  // size() function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_const_function__Pad__axes,  // get_const(index) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__get_function__Pad__axes,  // get(index) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__fetch_function__Pad__axes,  // fetch(index, &value) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__assign_function__Pad__axes,  // assign(index, value) function pointer
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__resize_function__Pad__axes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_members = {
  "pad_msg__msg",  // message namespace
  "Pad",  // message name
  2,  // number of fields
  sizeof(pad_msg__msg__Pad),
  false,  // has_any_key_member_
  pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_member_array,  // message members
  pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_init_function,  // function to initialize message memory (memory has to be allocated)
  pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_type_support_handle = {
  0,
  &pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_members,
  get_message_typesupport_handle_function,
  &pad_msg__msg__Pad__get_type_hash,
  &pad_msg__msg__Pad__get_type_description,
  &pad_msg__msg__Pad__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pad_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pad_msg, msg, Pad)() {
  if (!pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_type_support_handle.typesupport_identifier) {
    pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pad_msg__msg__Pad__rosidl_typesupport_introspection_c__Pad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
