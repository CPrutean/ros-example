// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages:srv/ExampleService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages/srv/detail/example_service__rosidl_typesupport_introspection_c.h"
#include "messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages/srv/detail/example_service__functions.h"
#include "messages/srv/detail/example_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages__srv__ExampleService_Request__init(message_memory);
}

void messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_fini_function(void * message_memory)
{
  messages__srv__ExampleService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages__srv__ExampleService_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages__srv__ExampleService_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_members = {
  "messages__srv",  // message namespace
  "ExampleService_Request",  // message name
  2,  // number of fields
  sizeof(messages__srv__ExampleService_Request),
  false,  // has_any_key_member_
  messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_member_array,  // message members
  messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_type_support_handle = {
  0,
  &messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_members,
  get_message_typesupport_handle_function,
  &messages__srv__ExampleService_Request__get_type_hash,
  &messages__srv__ExampleService_Request__get_type_description,
  &messages__srv__ExampleService_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Request)() {
  if (!messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_type_support_handle.typesupport_identifier) {
    messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages/srv/detail/example_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages/srv/detail/example_service__functions.h"
// already included above
// #include "messages/srv/detail/example_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages__srv__ExampleService_Response__init(message_memory);
}

void messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_fini_function(void * message_memory)
{
  messages__srv__ExampleService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages__srv__ExampleService_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_members = {
  "messages__srv",  // message namespace
  "ExampleService_Response",  // message name
  1,  // number of fields
  sizeof(messages__srv__ExampleService_Response),
  false,  // has_any_key_member_
  messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_member_array,  // message members
  messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_type_support_handle = {
  0,
  &messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_members,
  get_message_typesupport_handle_function,
  &messages__srv__ExampleService_Response__get_type_hash,
  &messages__srv__ExampleService_Response__get_type_description,
  &messages__srv__ExampleService_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Response)() {
  if (!messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_type_support_handle.typesupport_identifier) {
    messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages/srv/detail/example_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages/srv/detail/example_service__functions.h"
// already included above
// #include "messages/srv/detail/example_service__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "messages/srv/example_service.h"
// Member `request`
// Member `response`
// already included above
// #include "messages/srv/detail/example_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages__srv__ExampleService_Event__init(message_memory);
}

void messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_fini_function(void * message_memory)
{
  messages__srv__ExampleService_Event__fini(message_memory);
}

size_t messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__size_function__ExampleService_Event__request(
  const void * untyped_member)
{
  const messages__srv__ExampleService_Request__Sequence * member =
    (const messages__srv__ExampleService_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_const_function__ExampleService_Event__request(
  const void * untyped_member, size_t index)
{
  const messages__srv__ExampleService_Request__Sequence * member =
    (const messages__srv__ExampleService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_function__ExampleService_Event__request(
  void * untyped_member, size_t index)
{
  messages__srv__ExampleService_Request__Sequence * member =
    (messages__srv__ExampleService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__fetch_function__ExampleService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const messages__srv__ExampleService_Request * item =
    ((const messages__srv__ExampleService_Request *)
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_const_function__ExampleService_Event__request(untyped_member, index));
  messages__srv__ExampleService_Request * value =
    (messages__srv__ExampleService_Request *)(untyped_value);
  *value = *item;
}

void messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__assign_function__ExampleService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  messages__srv__ExampleService_Request * item =
    ((messages__srv__ExampleService_Request *)
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_function__ExampleService_Event__request(untyped_member, index));
  const messages__srv__ExampleService_Request * value =
    (const messages__srv__ExampleService_Request *)(untyped_value);
  *item = *value;
}

bool messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__resize_function__ExampleService_Event__request(
  void * untyped_member, size_t size)
{
  messages__srv__ExampleService_Request__Sequence * member =
    (messages__srv__ExampleService_Request__Sequence *)(untyped_member);
  messages__srv__ExampleService_Request__Sequence__fini(member);
  return messages__srv__ExampleService_Request__Sequence__init(member, size);
}

size_t messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__size_function__ExampleService_Event__response(
  const void * untyped_member)
{
  const messages__srv__ExampleService_Response__Sequence * member =
    (const messages__srv__ExampleService_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_const_function__ExampleService_Event__response(
  const void * untyped_member, size_t index)
{
  const messages__srv__ExampleService_Response__Sequence * member =
    (const messages__srv__ExampleService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_function__ExampleService_Event__response(
  void * untyped_member, size_t index)
{
  messages__srv__ExampleService_Response__Sequence * member =
    (messages__srv__ExampleService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__fetch_function__ExampleService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const messages__srv__ExampleService_Response * item =
    ((const messages__srv__ExampleService_Response *)
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_const_function__ExampleService_Event__response(untyped_member, index));
  messages__srv__ExampleService_Response * value =
    (messages__srv__ExampleService_Response *)(untyped_value);
  *value = *item;
}

void messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__assign_function__ExampleService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  messages__srv__ExampleService_Response * item =
    ((messages__srv__ExampleService_Response *)
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_function__ExampleService_Event__response(untyped_member, index));
  const messages__srv__ExampleService_Response * value =
    (const messages__srv__ExampleService_Response *)(untyped_value);
  *item = *value;
}

bool messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__resize_function__ExampleService_Event__response(
  void * untyped_member, size_t size)
{
  messages__srv__ExampleService_Response__Sequence * member =
    (messages__srv__ExampleService_Response__Sequence *)(untyped_member);
  messages__srv__ExampleService_Response__Sequence__fini(member);
  return messages__srv__ExampleService_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages__srv__ExampleService_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(messages__srv__ExampleService_Event, request),  // bytes offset in struct
    NULL,  // default value
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__size_function__ExampleService_Event__request,  // size() function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_const_function__ExampleService_Event__request,  // get_const(index) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_function__ExampleService_Event__request,  // get(index) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__fetch_function__ExampleService_Event__request,  // fetch(index, &value) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__assign_function__ExampleService_Event__request,  // assign(index, value) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__resize_function__ExampleService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(messages__srv__ExampleService_Event, response),  // bytes offset in struct
    NULL,  // default value
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__size_function__ExampleService_Event__response,  // size() function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_const_function__ExampleService_Event__response,  // get_const(index) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__get_function__ExampleService_Event__response,  // get(index) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__fetch_function__ExampleService_Event__response,  // fetch(index, &value) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__assign_function__ExampleService_Event__response,  // assign(index, value) function pointer
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__resize_function__ExampleService_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_members = {
  "messages__srv",  // message namespace
  "ExampleService_Event",  // message name
  3,  // number of fields
  sizeof(messages__srv__ExampleService_Event),
  false,  // has_any_key_member_
  messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_member_array,  // message members
  messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_type_support_handle = {
  0,
  &messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_members,
  get_message_typesupport_handle_function,
  &messages__srv__ExampleService_Event__get_type_hash,
  &messages__srv__ExampleService_Event__get_type_description,
  &messages__srv__ExampleService_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Event)() {
  messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Request)();
  messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Response)();
  if (!messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_type_support_handle.typesupport_identifier) {
    messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages/srv/detail/example_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_service_members = {
  "messages__srv",  // service namespace
  "ExampleService",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_Request_message_type_support_handle,
  NULL,  // response message
  // messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_Response_message_type_support_handle
  NULL  // event_message
  // messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_Response_message_type_support_handle
};


static rosidl_service_type_support_t messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_service_type_support_handle = {
  0,
  &messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_service_members,
  get_service_typesupport_handle_function,
  &messages__srv__ExampleService_Request__rosidl_typesupport_introspection_c__ExampleService_Request_message_type_support_handle,
  &messages__srv__ExampleService_Response__rosidl_typesupport_introspection_c__ExampleService_Response_message_type_support_handle,
  &messages__srv__ExampleService_Event__rosidl_typesupport_introspection_c__ExampleService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    messages,
    srv,
    ExampleService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    messages,
    srv,
    ExampleService
  ),
  &messages__srv__ExampleService__get_type_hash,
  &messages__srv__ExampleService__get_type_description,
  &messages__srv__ExampleService__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService)(void) {
  if (!messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_service_type_support_handle.typesupport_identifier) {
    messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages, srv, ExampleService_Event)()->data;
  }

  return &messages__srv__detail__example_service__rosidl_typesupport_introspection_c__ExampleService_service_type_support_handle;
}
