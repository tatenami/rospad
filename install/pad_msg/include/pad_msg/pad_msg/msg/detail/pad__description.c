// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice

#include "pad_msg/msg/detail/pad__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pad_msg
const rosidl_type_hash_t *
pad_msg__msg__Pad__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x62, 0x18, 0xe7, 0xd3, 0x72, 0x1b, 0xa3,
      0x6d, 0x1b, 0x99, 0x00, 0x3e, 0x4a, 0x47, 0x4b,
      0x9c, 0xbb, 0x9b, 0xcd, 0x51, 0xca, 0x52, 0x60,
      0xd3, 0x22, 0xbe, 0xc3, 0x8c, 0xc3, 0xac, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pad_msg__msg__Pad__TYPE_NAME[] = "pad_msg/msg/Pad";

// Define type names, field names, and default values
static char pad_msg__msg__Pad__FIELD_NAME__buttons[] = "buttons";
static char pad_msg__msg__Pad__FIELD_NAME__axes[] = "axes";

static rosidl_runtime_c__type_description__Field pad_msg__msg__Pad__FIELDS[] = {
  {
    {pad_msg__msg__Pad__FIELD_NAME__buttons, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pad_msg__msg__Pad__FIELD_NAME__axes, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pad_msg__msg__Pad__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pad_msg__msg__Pad__TYPE_NAME, 15, 15},
      {pad_msg__msg__Pad__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool[] buttons\n"
  "float32[] axes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pad_msg__msg__Pad__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pad_msg__msg__Pad__TYPE_NAME, 15, 15},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pad_msg__msg__Pad__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pad_msg__msg__Pad__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
