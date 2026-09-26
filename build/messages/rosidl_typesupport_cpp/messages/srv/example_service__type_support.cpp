// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from messages:srv/ExampleService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "messages/srv/detail/example_service__functions.h"
#include "messages/srv/detail/example_service__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExampleService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExampleService_Request_type_support_ids_t;

static const _ExampleService_Request_type_support_ids_t _ExampleService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExampleService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExampleService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExampleService_Request_type_support_symbol_names_t _ExampleService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages, srv, ExampleService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages, srv, ExampleService_Request)),
  }
};

typedef struct _ExampleService_Request_type_support_data_t
{
  void * data[2];
} _ExampleService_Request_type_support_data_t;

static _ExampleService_Request_type_support_data_t _ExampleService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExampleService_Request_message_typesupport_map = {
  2,
  "messages",
  &_ExampleService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExampleService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExampleService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExampleService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExampleService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &messages__srv__ExampleService_Request__get_type_hash,
  &messages__srv__ExampleService_Request__get_type_description,
  &messages__srv__ExampleService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages::srv::ExampleService_Request>()
{
  return &::messages::srv::rosidl_typesupport_cpp::ExampleService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages, srv, ExampleService_Request)() {
  return get_message_type_support_handle<messages::srv::ExampleService_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages/srv/detail/example_service__functions.h"
// already included above
// #include "messages/srv/detail/example_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExampleService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExampleService_Response_type_support_ids_t;

static const _ExampleService_Response_type_support_ids_t _ExampleService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExampleService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExampleService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExampleService_Response_type_support_symbol_names_t _ExampleService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages, srv, ExampleService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages, srv, ExampleService_Response)),
  }
};

typedef struct _ExampleService_Response_type_support_data_t
{
  void * data[2];
} _ExampleService_Response_type_support_data_t;

static _ExampleService_Response_type_support_data_t _ExampleService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExampleService_Response_message_typesupport_map = {
  2,
  "messages",
  &_ExampleService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExampleService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExampleService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExampleService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExampleService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &messages__srv__ExampleService_Response__get_type_hash,
  &messages__srv__ExampleService_Response__get_type_description,
  &messages__srv__ExampleService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages::srv::ExampleService_Response>()
{
  return &::messages::srv::rosidl_typesupport_cpp::ExampleService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages, srv, ExampleService_Response)() {
  return get_message_type_support_handle<messages::srv::ExampleService_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages/srv/detail/example_service__functions.h"
// already included above
// #include "messages/srv/detail/example_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExampleService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExampleService_Event_type_support_ids_t;

static const _ExampleService_Event_type_support_ids_t _ExampleService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExampleService_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExampleService_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExampleService_Event_type_support_symbol_names_t _ExampleService_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages, srv, ExampleService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages, srv, ExampleService_Event)),
  }
};

typedef struct _ExampleService_Event_type_support_data_t
{
  void * data[2];
} _ExampleService_Event_type_support_data_t;

static _ExampleService_Event_type_support_data_t _ExampleService_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExampleService_Event_message_typesupport_map = {
  2,
  "messages",
  &_ExampleService_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExampleService_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExampleService_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExampleService_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExampleService_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &messages__srv__ExampleService_Event__get_type_hash,
  &messages__srv__ExampleService_Event__get_type_description,
  &messages__srv__ExampleService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages::srv::ExampleService_Event>()
{
  return &::messages::srv::rosidl_typesupport_cpp::ExampleService_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages, srv, ExampleService_Event)() {
  return get_message_type_support_handle<messages::srv::ExampleService_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "messages/srv/detail/example_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExampleService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExampleService_type_support_ids_t;

static const _ExampleService_type_support_ids_t _ExampleService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExampleService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExampleService_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExampleService_type_support_symbol_names_t _ExampleService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages, srv, ExampleService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages, srv, ExampleService)),
  }
};

typedef struct _ExampleService_type_support_data_t
{
  void * data[2];
} _ExampleService_type_support_data_t;

static _ExampleService_type_support_data_t _ExampleService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExampleService_service_typesupport_map = {
  2,
  "messages",
  &_ExampleService_service_typesupport_ids.typesupport_identifier[0],
  &_ExampleService_service_typesupport_symbol_names.symbol_name[0],
  &_ExampleService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExampleService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExampleService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<messages::srv::ExampleService_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<messages::srv::ExampleService_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<messages::srv::ExampleService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<messages::srv::ExampleService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<messages::srv::ExampleService>,
  &messages__srv__ExampleService__get_type_hash,
  &messages__srv__ExampleService__get_type_description,
  &messages__srv__ExampleService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<messages::srv::ExampleService>()
{
  return &::messages::srv::rosidl_typesupport_cpp::ExampleService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, messages, srv, ExampleService)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<messages::srv::ExampleService>();
}

#ifdef __cplusplus
}
#endif
