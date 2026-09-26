# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target messages::messages
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${messages_TARGETS}.
if(messages_TARGETS AND NOT TARGET messages::messages)
  add_library(messages::messages INTERFACE IMPORTED)
  set_target_properties(messages::messages PROPERTIES
    INTERFACE_LINK_LIBRARIES "${messages_TARGETS}")
endif()
