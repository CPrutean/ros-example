// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/msg/example_msg.h"


#ifndef MESSAGES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_
#define MESSAGES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ExampleMsg in the package messages.
typedef struct messages__msg__ExampleMsg
{
  int64_t a;
  int64_t b;
} messages__msg__ExampleMsg;

// Struct for a sequence of messages__msg__ExampleMsg.
typedef struct messages__msg__ExampleMsg__Sequence
{
  messages__msg__ExampleMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__msg__ExampleMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_
