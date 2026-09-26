// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from messages:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#include "messages/msg/detail/example_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_messages
const rosidl_type_hash_t *
messages__msg__ExampleMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0x15, 0xaa, 0x01, 0x37, 0x81, 0x8e, 0xcc,
      0x04, 0xa8, 0x75, 0x2b, 0xcb, 0xe4, 0xe9, 0x5d,
      0x74, 0xc1, 0x31, 0x01, 0x04, 0x9c, 0x10, 0x7d,
      0xf6, 0x77, 0xd4, 0x9a, 0x72, 0x58, 0xd1, 0xc9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char messages__msg__ExampleMsg__TYPE_NAME[] = "messages/msg/ExampleMsg";

// Define type names, field names, and default values
static char messages__msg__ExampleMsg__FIELD_NAME__a[] = "a";
static char messages__msg__ExampleMsg__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field messages__msg__ExampleMsg__FIELDS[] = {
  {
    {messages__msg__ExampleMsg__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {messages__msg__ExampleMsg__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
messages__msg__ExampleMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {messages__msg__ExampleMsg__TYPE_NAME, 23, 23},
      {messages__msg__ExampleMsg__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a\n"
  "int64 b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
messages__msg__ExampleMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {messages__msg__ExampleMsg__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
messages__msg__ExampleMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *messages__msg__ExampleMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
