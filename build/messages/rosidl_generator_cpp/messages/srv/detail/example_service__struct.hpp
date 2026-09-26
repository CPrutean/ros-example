// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages:srv/ExampleService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "messages/srv/example_service.hpp"


#ifndef MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__STRUCT_HPP_
#define MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages__srv__ExampleService_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages__srv__ExampleService_Request __declspec(deprecated)
#endif

namespace messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExampleService_Request_
{
  using Type = ExampleService_Request_<ContainerAllocator>;

  explicit ExampleService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit ExampleService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages::srv::ExampleService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::srv::ExampleService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::srv::ExampleService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::srv::ExampleService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::srv::ExampleService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::srv::ExampleService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::srv::ExampleService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::srv::ExampleService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::srv::ExampleService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::srv::ExampleService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__srv__ExampleService_Request
    std::shared_ptr<messages::srv::ExampleService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__srv__ExampleService_Request
    std::shared_ptr<messages::srv::ExampleService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleService_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleService_Request_

// alias to use template instance with default allocator
using ExampleService_Request =
  messages::srv::ExampleService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages


#ifndef _WIN32
# define DEPRECATED__messages__srv__ExampleService_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages__srv__ExampleService_Response __declspec(deprecated)
#endif

namespace messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExampleService_Response_
{
  using Type = ExampleService_Response_<ContainerAllocator>;

  explicit ExampleService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = 0ll;
    }
  }

  explicit ExampleService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = 0ll;
    }
  }

  // field types and members
  using _response_type =
    int64_t;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const int64_t & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages::srv::ExampleService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::srv::ExampleService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::srv::ExampleService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::srv::ExampleService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::srv::ExampleService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::srv::ExampleService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::srv::ExampleService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::srv::ExampleService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::srv::ExampleService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::srv::ExampleService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__srv__ExampleService_Response
    std::shared_ptr<messages::srv::ExampleService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__srv__ExampleService_Response
    std::shared_ptr<messages::srv::ExampleService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleService_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleService_Response_

// alias to use template instance with default allocator
using ExampleService_Response =
  messages::srv::ExampleService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages__srv__ExampleService_Event __attribute__((deprecated))
#else
# define DEPRECATED__messages__srv__ExampleService_Event __declspec(deprecated)
#endif

namespace messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExampleService_Event_
{
  using Type = ExampleService_Event_<ContainerAllocator>;

  explicit ExampleService_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExampleService_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<messages::srv::ExampleService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<messages::srv::ExampleService_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<messages::srv::ExampleService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<messages::srv::ExampleService_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<messages::srv::ExampleService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<messages::srv::ExampleService_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<messages::srv::ExampleService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<messages::srv::ExampleService_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages::srv::ExampleService_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::srv::ExampleService_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::srv::ExampleService_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::srv::ExampleService_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::srv::ExampleService_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::srv::ExampleService_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::srv::ExampleService_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::srv::ExampleService_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::srv::ExampleService_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::srv::ExampleService_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__srv__ExampleService_Event
    std::shared_ptr<messages::srv::ExampleService_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__srv__ExampleService_Event
    std::shared_ptr<messages::srv::ExampleService_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleService_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleService_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleService_Event_

// alias to use template instance with default allocator
using ExampleService_Event =
  messages::srv::ExampleService_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages

namespace messages
{

namespace srv
{

struct ExampleService
{
  using Request = messages::srv::ExampleService_Request;
  using Response = messages::srv::ExampleService_Response;
  using Event = messages::srv::ExampleService_Event;
};

}  // namespace srv

}  // namespace messages

#endif  // MESSAGES__SRV__DETAIL__EXAMPLE_SERVICE__STRUCT_HPP_
