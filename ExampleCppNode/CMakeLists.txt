cmake_minimum_required(VERSION 3.23)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
# ignore this this is for certain LSP's
set(CMAKE_EXPORT_COMPILE_COMMANDS
    ON
    CACHE INTERNAL "")

# Project information and configuration
project(ExampleCppNode VERSION 0.0.0)
# Required for the build system
find_package(ament_cmake REQUIRED)
# Required for bindings
find_package(rclcpp REQUIRED)
# Default message files
find_package(std_msgs REQUIRED)
# Colcon will link our msgs subfolder
find_package(messages REQUIRED)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include ${rclcpp_INCLUDE_DIRS})
add_executable(ros-node src/example_cpp_node.cpp)
ament_target_dependencies(ros-node rclcpp std_msgs messages)

target_include_directories(
  ros-node PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                  $<INSTALL_INTERFACE:include>)

include_directories("src")

install(TARGETS ros-node DESTINATION lib/${PROJECT_NAME})

ament_package()
