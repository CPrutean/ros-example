cmake_minimum_required(VERSION 3.23)
project(messages)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
# Required to install new message files If you investigate further this is
# actually how std_msgs does it to
# https://deepwiki.com/ros2/common_interfaces/5.1-cmake-and-message-generation
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME} "msg/ExampleMsg.msg"
                           "srv/ExampleService.srv")

ament_export_dependencies(rosidl_default_runtime)

ament_package()
