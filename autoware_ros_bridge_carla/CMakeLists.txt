cmake_minimum_required(VERSION 3.8)
project(autoware_ros_bridge_carla)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_msgs REQUIRED)
find_package(ackermann_msgs REQUIRED)
find_package(autoware_auto_control_msgs REQUIRED)
find_package(autoware_auto_vehicle_msgs REQUIRED)
find_package(carla_msgs REQUIRED)

add_executable(listener src/testControlCommand.cpp)
add_executable(jsontest src/simpledom.cpp)
add_executable(sender src/controlCommandForwarding.cpp)
add_executable(control_command_converter src/control_command_converter.cpp)
add_executable(odometry_remapper src/odometry_remapper.cpp)
add_executable(velocity_reporter src/velocity_reporter.cpp)
add_executable(steering_reporter src/steering_reporter.cpp)
add_executable(gnss_converter src/gnss_converter.cpp)
add_executable(sensor_converter src/sensor_message_converter.cpp)

ament_target_dependencies(
  listener rclcpp std_msgs autoware_auto_control_msgs)
ament_target_dependencies(
  sender rclcpp ackermann_msgs autoware_auto_control_msgs)
ament_target_dependencies(
  control_command_converter rclcpp ackermann_msgs autoware_auto_control_msgs)
ament_target_dependencies(
  odometry_remapper rclcpp nav_msgs geometry_msgs tf2_msgs std_msgs)
ament_target_dependencies(
  velocity_reporter rclcpp std_msgs autoware_auto_vehicle_msgs)
ament_target_dependencies(
  steering_reporter rclcpp carla_msgs autoware_auto_vehicle_msgs autoware_auto_control_msgs)
ament_target_dependencies(
  gnss_converter rclcpp sensor_msgs)
  
ament_target_dependencies(
  sensor_converter rclcpp geometry_msgs nav_msgs sensor_msgs)

install(TARGETS
  listener
  jsontest
  sender
  control_command_converter
  odometry_remapper
  velocity_reporter
  steering_reporter
  gnss_converter
  sensor_converter
  DESTINATION lib/${PROJECT_NAME})
        
        


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
