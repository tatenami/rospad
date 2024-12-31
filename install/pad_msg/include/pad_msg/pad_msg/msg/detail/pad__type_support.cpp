// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pad_msg/msg/detail/pad__functions.h"
#include "pad_msg/msg/detail/pad__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pad_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pad_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pad_msg::msg::Pad(_init);
}

void Pad_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pad_msg::msg::Pad *>(message_memory);
  typed_message->~Pad();
}

size_t size_function__Pad__buttons(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__Pad__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__Pad__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__Pad__buttons(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Pad__axes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pad__axes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Pad__axes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pad__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Pad__axes(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Pad__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Pad__axes(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Pad__axes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pad_message_member_array[2] = {
  {
    "buttons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pad_msg::msg::Pad, buttons),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pad__buttons,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__Pad__buttons,  // fetch(index, &value) function pointer
    assign_function__Pad__buttons,  // assign(index, value) function pointer
    resize_function__Pad__buttons  // resize(index) function pointer
  },
  {
    "axes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pad_msg::msg::Pad, axes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pad__axes,  // size() function pointer
    get_const_function__Pad__axes,  // get_const(index) function pointer
    get_function__Pad__axes,  // get(index) function pointer
    fetch_function__Pad__axes,  // fetch(index, &value) function pointer
    assign_function__Pad__axes,  // assign(index, value) function pointer
    resize_function__Pad__axes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pad_message_members = {
  "pad_msg::msg",  // message namespace
  "Pad",  // message name
  2,  // number of fields
  sizeof(pad_msg::msg::Pad),
  false,  // has_any_key_member_
  Pad_message_member_array,  // message members
  Pad_init_function,  // function to initialize message memory (memory has to be allocated)
  Pad_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pad_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pad_message_members,
  get_message_typesupport_handle_function,
  &pad_msg__msg__Pad__get_type_hash,
  &pad_msg__msg__Pad__get_type_description,
  &pad_msg__msg__Pad__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pad_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pad_msg::msg::Pad>()
{
  return &::pad_msg::msg::rosidl_typesupport_introspection_cpp::Pad_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pad_msg, msg, Pad)() {
  return &::pad_msg::msg::rosidl_typesupport_introspection_cpp::Pad_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
