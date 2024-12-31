cmake_minimum_required(VERSION 3.8)
project(gamepad)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

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

find_package(rclcpp REQUIRED)
find_package(pad_msg REQUIRED)

# publisher config
add_executable(publisher src/padpub.cpp)
ament_target_dependencies(publisher rclcpp pad_msg)
# 自作共有ライブラリのリンク
target_link_libraries(publisher padros ps5pad)


# subscriber config
add_executable(subscriber src/padsub.cpp)
ament_target_dependencies(subscriber rclcpp pad_msg)
target_link_libraries(subscriber padros ps5pad)

add_executable(subscriber2 src/padsub2.cpp)
ament_target_dependencies(subscriber2 rclcpp pad_msg)
target_link_libraries(subscriber2 padros ps5pad)

install(TARGETS
  publisher
  subscriber
  subscriber2
  DESTINATION lib/${PROJECT_NAME}
)