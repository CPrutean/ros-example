// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/msg/example_msg.hpp"


#ifndef MESSAGES__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_
#define MESSAGES__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages/msg/detail/example_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages
{

namespace msg
{

namespace builder
{

class Init_ExampleMsg_b
{
public:
  explicit Init_ExampleMsg_b(::messages::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  ::messages::msg::ExampleMsg b(::messages::msg::ExampleMsg::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_a
{
public:
  Init_ExampleMsg_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleMsg_b a(::messages::msg::ExampleMsg::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_ExampleMsg_b(msg_);
  }

private:
  ::messages::msg::ExampleMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::msg::ExampleMsg>()
{
  return messages::msg::builder::Init_ExampleMsg_a();
}

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_
