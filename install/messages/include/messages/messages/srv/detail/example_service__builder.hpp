// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages:srv/ExampleService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/srv/example_service.hpp"


#ifndef MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__BUILDER_HPP_
#define MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages/srv/detail/example_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages
{

namespace srv
{

namespace builder
{

class Init_ExampleService_Request_b
{
public:
  explicit Init_ExampleService_Request_b(::messages::srv::ExampleService_Request & msg)
  : msg_(msg)
  {}
  ::messages::srv::ExampleService_Request b(::messages::srv::ExampleService_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::srv::ExampleService_Request msg_;
};

class Init_ExampleService_Request_a
{
public:
  Init_ExampleService_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleService_Request_b a(::messages::srv::ExampleService_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_ExampleService_Request_b(msg_);
  }

private:
  ::messages::srv::ExampleService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::srv::ExampleService_Request>()
{
  return messages::srv::builder::Init_ExampleService_Request_a();
}

}  // namespace messages


namespace messages
{

namespace srv
{

namespace builder
{

class Init_ExampleService_Response_response
{
public:
  Init_ExampleService_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages::srv::ExampleService_Response response(::messages::srv::ExampleService_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::srv::ExampleService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::srv::ExampleService_Response>()
{
  return messages::srv::builder::Init_ExampleService_Response_response();
}

}  // namespace messages


namespace messages
{

namespace srv
{

namespace builder
{

class Init_ExampleService_Event_response
{
public:
  explicit Init_ExampleService_Event_response(::messages::srv::ExampleService_Event & msg)
  : msg_(msg)
  {}
  ::messages::srv::ExampleService_Event response(::messages::srv::ExampleService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::srv::ExampleService_Event msg_;
};

class Init_ExampleService_Event_request
{
public:
  explicit Init_ExampleService_Event_request(::messages::srv::ExampleService_Event & msg)
  : msg_(msg)
  {}
  Init_ExampleService_Event_response request(::messages::srv::ExampleService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExampleService_Event_response(msg_);
  }

private:
  ::messages::srv::ExampleService_Event msg_;
};

class Init_ExampleService_Event_info
{
public:
  Init_ExampleService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleService_Event_request info(::messages::srv::ExampleService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExampleService_Event_request(msg_);
  }

private:
  ::messages::srv::ExampleService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::srv::ExampleService_Event>()
{
  return messages::srv::builder::Init_ExampleService_Event_info();
}

}  // namespace messages

#endif  // MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__BUILDER_HPP_
