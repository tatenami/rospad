# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/st/stm32cubeclt_1.16.0/CMake/bin/cmake

# The command to remove a file.
RM = /opt/st/stm32cubeclt_1.16.0/CMake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tatenami/ros2/ws/pad/src/pad_msg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tatenami/ros2/ws/pad/src/pad_msg/build/pad_msg

# Utility rule file for pad_msg__rosidl_generator_type_description.

# Include any custom commands dependencies for this target.
include CMakeFiles/pad_msg__rosidl_generator_type_description.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pad_msg__rosidl_generator_type_description.dir/progress.make

CMakeFiles/pad_msg__rosidl_generator_type_description: rosidl_generator_type_description/pad_msg/msg/Pad.json

rosidl_generator_type_description/pad_msg/msg/Pad.json: /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description
rosidl_generator_type_description/pad_msg/msg/Pad.json: /opt/ros/jazzy/lib/python3.12/site-packages/rosidl_generator_type_description/__init__.py
rosidl_generator_type_description/pad_msg/msg/Pad.json: rosidl_adapter/pad_msg/msg/Pad.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/tatenami/ros2/ws/pad/src/pad_msg/build/pad_msg/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating type hashes for ROS interfaces"
	/usr/bin/python3 /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description --generator-arguments-file /home/tatenami/ros2/ws/pad/src/pad_msg/build/pad_msg/rosidl_generator_type_description__arguments.json

pad_msg__rosidl_generator_type_description: CMakeFiles/pad_msg__rosidl_generator_type_description
pad_msg__rosidl_generator_type_description: rosidl_generator_type_description/pad_msg/msg/Pad.json
pad_msg__rosidl_generator_type_description: CMakeFiles/pad_msg__rosidl_generator_type_description.dir/build.make
.PHONY : pad_msg__rosidl_generator_type_description

# Rule to build all files generated by this target.
CMakeFiles/pad_msg__rosidl_generator_type_description.dir/build: pad_msg__rosidl_generator_type_description
.PHONY : CMakeFiles/pad_msg__rosidl_generator_type_description.dir/build

CMakeFiles/pad_msg__rosidl_generator_type_description.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pad_msg__rosidl_generator_type_description.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pad_msg__rosidl_generator_type_description.dir/clean

CMakeFiles/pad_msg__rosidl_generator_type_description.dir/depend:
	cd /home/tatenami/ros2/ws/pad/src/pad_msg/build/pad_msg && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tatenami/ros2/ws/pad/src/pad_msg /home/tatenami/ros2/ws/pad/src/pad_msg /home/tatenami/ros2/ws/pad/src/pad_msg/build/pad_msg /home/tatenami/ros2/ws/pad/src/pad_msg/build/pad_msg /home/tatenami/ros2/ws/pad/src/pad_msg/build/pad_msg/CMakeFiles/pad_msg__rosidl_generator_type_description.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/pad_msg__rosidl_generator_type_description.dir/depend

