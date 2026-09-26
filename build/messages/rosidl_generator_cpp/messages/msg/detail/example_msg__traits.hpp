// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/msg/example_msg.hpp"


#ifndef MESSAGES__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_
#define MESSAGES__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages/msg/detail/example_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExampleMsg & msg,
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
  const ExampleMsg & msg,
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

inline std::string to_yaml(const ExampleMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace messages

namespace rosidl_generator_traits
{

[[deprecated("use messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages::msg::ExampleMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const messages::msg::ExampleMsg & msg)
{
  return messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<messages::msg::ExampleMsg>()
{
  return "messages::msg::ExampleMsg";
}

template<>
inline const char * name<messages::msg::ExampleMsg>()
{
  return "messages/msg/ExampleMsg";
}

template<>
struct has_fixed_size<messages::msg::ExampleMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages::msg::ExampleMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages::msg::ExampleMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_
