# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2019.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xel/projects/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xel/projects/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/speedtest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/speedtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/speedtest.dir/flags.make

CMakeFiles/speedtest.dir/speed_test.c.o: CMakeFiles/speedtest.dir/flags.make
CMakeFiles/speedtest.dir/speed_test.c.o: ../speed_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/speedtest.dir/speed_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speedtest.dir/speed_test.c.o   -c /home/xel/projects/push_swap/speed_test.c

CMakeFiles/speedtest.dir/speed_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speedtest.dir/speed_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/speed_test.c > CMakeFiles/speedtest.dir/speed_test.c.i

CMakeFiles/speedtest.dir/speed_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speedtest.dir/speed_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/speed_test.c -o CMakeFiles/speedtest.dir/speed_test.c.s

# Object files for target speedtest
speedtest_OBJECTS = \
"CMakeFiles/speedtest.dir/speed_test.c.o"

# External object files for target speedtest
speedtest_EXTERNAL_OBJECTS =

speedtest: CMakeFiles/speedtest.dir/speed_test.c.o
speedtest: CMakeFiles/speedtest.dir/build.make
speedtest: lib/libft/liblibft.a
speedtest: CMakeFiles/speedtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable speedtest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/speedtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/speedtest.dir/build: speedtest

.PHONY : CMakeFiles/speedtest.dir/build

CMakeFiles/speedtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/speedtest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/speedtest.dir/clean

CMakeFiles/speedtest.dir/depend:
	cd /home/xel/projects/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xel/projects/push_swap /home/xel/projects/push_swap /home/xel/projects/push_swap/cmake-build-debug /home/xel/projects/push_swap/cmake-build-debug /home/xel/projects/push_swap/cmake-build-debug/CMakeFiles/speedtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/speedtest.dir/depend
