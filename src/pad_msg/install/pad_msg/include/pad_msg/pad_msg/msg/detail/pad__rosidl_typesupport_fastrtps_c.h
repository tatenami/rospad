// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice
#ifndef PAD_MSG__MSG__DETAIL__PAD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PAD_MSG__MSG__DETAIL__PAD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pad_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pad_msg/msg/detail/pad__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
bool cdr_serialize_pad_msg__msg__Pad(
  const pad_msg__msg__Pad * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
bool cdr_deserialize_pad_msg__msg__Pad(
  eprosima::fastcdr::Cdr &,
  pad_msg__msg__Pad * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
size_t get_serialized_size_pad_msg__msg__Pad(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
size_t max_serialized_size_pad_msg__msg__Pad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
bool cdr_serialize_key_pad_msg__msg__Pad(
  const pad_msg__msg__Pad * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
size_t get_serialized_size_key_pad_msg__msg__Pad(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
size_t max_serialized_size_key_pad_msg__msg__Pad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pad_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pad_msg, msg, Pad)();

#ifdef __cplusplus
}
#endif

#endif  // PAD_MSG__MSG__DETAIL__PAD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
