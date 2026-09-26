// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages:srv/ExampleService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/srv/example_service.hpp"


#ifndef MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__TRAITS_HPP_
#define MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages/srv/detail/example_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExampleService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace messages

namespace rosidl_generator_traits
{

[[deprecated("use messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages::srv::ExampleService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const messages::srv::ExampleService_Request & msg)
{
  return messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<messages::srv::ExampleService_Request>()
{
  return "messages::srv::ExampleService_Request";
}

template<>
inline const char * name<messages::srv::ExampleService_Request>()
{
  return "messages/srv/ExampleService_Request";
}

template<>
struct has_fixed_size<messages::srv::ExampleService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages::srv::ExampleService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages::srv::ExampleService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExampleService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace messages

namespace rosidl_generator_traits
{

[[deprecated("use messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages::srv::ExampleService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const messages::srv::ExampleService_Response & msg)
{
  return messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<messages::srv::ExampleService_Response>()
{
  return "messages::srv::ExampleService_Response";
}

template<>
inline const char * name<messages::srv::ExampleService_Response>()
{
  return "messages/srv/ExampleService_Response";
}

template<>
struct has_fixed_size<messages::srv::ExampleService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages::srv::ExampleService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages::srv::ExampleService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExampleService_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleService_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace messages

namespace rosidl_generator_traits
{

[[deprecated("use messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages::srv::ExampleService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const messages::srv::ExampleService_Event & msg)
{
  return messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<messages::srv::ExampleService_Event>()
{
  return "messages::srv::ExampleService_Event";
}

template<>
inline const char * name<messages::srv::ExampleService_Event>()
{
  return "messages/srv/ExampleService_Event";
}

template<>
struct has_fixed_size<messages::srv::ExampleService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<messages::srv::ExampleService_Event>
  : std::integral_constant<bool, has_bounded_size<messages::srv::ExampleService_Request>::value && has_bounded_size<messages::srv::ExampleService_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<messages::srv::ExampleService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages::srv::ExampleService>()
{
  return "messages::srv::ExampleService";
}

template<>
inline const char * name<messages::srv::ExampleService>()
{
  return "messages/srv/ExampleService";
}

template<>
struct has_fixed_size<messages::srv::ExampleService>
  : std::integral_constant<
    bool,
    has_fixed_size<messages::srv::ExampleService_Request>::value &&
    has_fixed_size<messages::srv::ExampleService_Response>::value
  >
{
};

template<>
struct has_bounded_size<messages::srv::ExampleService>
  : std::integral_constant<
    bool,
    has_bounded_size<messages::srv::ExampleService_Request>::value &&
    has_bounded_size<messages::srv::ExampleService_Response>::value
  >
{
};

template<>
struct is_service<messages::srv::ExampleService>
  : std::true_type
{
};

template<>
struct is_service_request<messages::srv::ExampleService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<messages::srv::ExampleService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__TRAITS_HPP_
