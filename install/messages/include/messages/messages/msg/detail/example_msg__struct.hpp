// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/msg/example_msg.hpp"


#ifndef MESSAGES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_HPP_
#define MESSAGES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages__msg__ExampleMsg __attribute__((deprecated))
#else
# define DEPRECATED__messages__msg__ExampleMsg __declspec(deprecated)
#endif

namespace messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExampleMsg_
{
  using Type = ExampleMsg_<ContainerAllocator>;

  explicit ExampleMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit ExampleMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages::msg::ExampleMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::msg::ExampleMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::msg::ExampleMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::msg::ExampleMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::msg::ExampleMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::msg::ExampleMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::msg::ExampleMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::msg::ExampleMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::msg::ExampleMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::msg::ExampleMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__msg__ExampleMsg
    std::shared_ptr<messages::msg::ExampleMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__msg__ExampleMsg
    std::shared_ptr<messages::msg::ExampleMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleMsg_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleMsg_

// alias to use template instance with default allocator
using ExampleMsg =
  messages::msg::ExampleMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_HPP_
