# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target mars_msgs::mars_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${mars_msgs_TARGETS}.
if(mars_msgs_TARGETS AND NOT TARGET mars_msgs::mars_msgs)
  add_library(mars_msgs::mars_msgs INTERFACE IMPORTED)
  set_target_properties(mars_msgs::mars_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${mars_msgs_TARGETS}")
endif()
