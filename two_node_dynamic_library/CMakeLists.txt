cmake_minimum_required(VERSION 3.8)
project(two_node_dynamic_library)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

set(DYNAMIC_LIBRARY_NAME "two_node_dynamic_library")
# Collect all source files in this directory
file(GLOB SOURCES "src/*.cpp")

# Add the library target
add_library(${DYNAMIC_LIBRARY_NAME} SHARED ${SOURCES})

# Add the headers
target_include_directories(${DYNAMIC_LIBRARY_NAME} PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")

# Add the dependencies
# target_link_libraries(${DYNAMIC_LIBRARY_NAME} PRIVATE rclcpp::rclcpp ${std_msgs_TARGETS} rclcpp::rclcpp rclcpp_components::component)
ament_target_dependencies(${DYNAMIC_LIBRARY_NAME} rclcpp std_msgs rclcpp_components)

# install(TARGETS ${DYNAMIC_LIBRARY_NAME} ARCHIVE DESTINATION lib LIBRARY DESTINATION lib RUNTIME DESTINATION bin)
# rclcpp_components_register_nodes(${DYNAMIC_LIBRARY_NAME} "two_node_dynamic_library::Listener" "two_node_dynamic_library::Talker")

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
