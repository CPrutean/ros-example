// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages:srv/ExampleService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/srv/example_service.h"


#ifndef MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__STRUCT_H_
#define MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ExampleService in the package messages.
typedef struct messages__srv__ExampleService_Request
{
  int64_t a;
  int64_t b;
} messages__srv__ExampleService_Request;

// Struct for a sequence of messages__srv__ExampleService_Request.
typedef struct messages__srv__ExampleService_Request__Sequence
{
  messages__srv__ExampleService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__srv__ExampleService_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ExampleService in the package messages.
typedef struct messages__srv__ExampleService_Response
{
  int64_t response;
} messages__srv__ExampleService_Response;

// Struct for a sequence of messages__srv__ExampleService_Response.
typedef struct messages__srv__ExampleService_Response__Sequence
{
  messages__srv__ExampleService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__srv__ExampleService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  messages__srv__ExampleService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  messages__srv__ExampleService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ExampleService in the package messages.
typedef struct messages__srv__ExampleService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  messages__srv__ExampleService_Request__Sequence request;
  messages__srv__ExampleService_Response__Sequence response;
} messages__srv__ExampleService_Event;

// Struct for a sequence of messages__srv__ExampleService_Event.
typedef struct messages__srv__ExampleService_Event__Sequence
{
  messages__srv__ExampleService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__srv__ExampleService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__STRUCT_H_
