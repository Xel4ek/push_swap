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
include CMakeFiles/checker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/checker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/checker.dir/flags.make

CMakeFiles/checker.dir/src/is_sorted.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/is_sorted.c.o: ../src/is_sorted.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/checker.dir/src/is_sorted.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/is_sorted.c.o   -c /home/xel/projects/push_swap/src/is_sorted.c

CMakeFiles/checker.dir/src/is_sorted.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/is_sorted.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/is_sorted.c > CMakeFiles/checker.dir/src/is_sorted.c.i

CMakeFiles/checker.dir/src/is_sorted.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/is_sorted.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/is_sorted.c -o CMakeFiles/checker.dir/src/is_sorted.c.s

CMakeFiles/checker.dir/src/ft_lstd_swap.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_lstd_swap.c.o: ../src/ft_lstd_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/checker.dir/src/ft_lstd_swap.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_lstd_swap.c.o   -c /home/xel/projects/push_swap/src/ft_lstd_swap.c

CMakeFiles/checker.dir/src/ft_lstd_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_lstd_swap.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_lstd_swap.c > CMakeFiles/checker.dir/src/ft_lstd_swap.c.i

CMakeFiles/checker.dir/src/ft_lstd_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_lstd_swap.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_lstd_swap.c -o CMakeFiles/checker.dir/src/ft_lstd_swap.c.s

CMakeFiles/checker.dir/src/ft_lstprint.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_lstprint.c.o: ../src/ft_lstprint.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/checker.dir/src/ft_lstprint.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_lstprint.c.o   -c /home/xel/projects/push_swap/src/ft_lstprint.c

CMakeFiles/checker.dir/src/ft_lstprint.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_lstprint.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_lstprint.c > CMakeFiles/checker.dir/src/ft_lstprint.c.i

CMakeFiles/checker.dir/src/ft_lstprint.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_lstprint.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_lstprint.c -o CMakeFiles/checker.dir/src/ft_lstprint.c.s

CMakeFiles/checker.dir/src/read.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/read.c.o: ../src/read.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/checker.dir/src/read.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/read.c.o   -c /home/xel/projects/push_swap/src/read.c

CMakeFiles/checker.dir/src/read.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/read.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/read.c > CMakeFiles/checker.dir/src/read.c.i

CMakeFiles/checker.dir/src/read.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/read.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/read.c -o CMakeFiles/checker.dir/src/read.c.s

CMakeFiles/checker.dir/src/ft_operation.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_operation.c.o: ../src/ft_operation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/checker.dir/src/ft_operation.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_operation.c.o   -c /home/xel/projects/push_swap/src/ft_operation.c

CMakeFiles/checker.dir/src/ft_operation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_operation.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_operation.c > CMakeFiles/checker.dir/src/ft_operation.c.i

CMakeFiles/checker.dir/src/ft_operation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_operation.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_operation.c -o CMakeFiles/checker.dir/src/ft_operation.c.s

CMakeFiles/checker.dir/src/dfs.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/dfs.c.o: ../src/dfs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/checker.dir/src/dfs.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/dfs.c.o   -c /home/xel/projects/push_swap/src/dfs.c

CMakeFiles/checker.dir/src/dfs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/dfs.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/dfs.c > CMakeFiles/checker.dir/src/dfs.c.i

CMakeFiles/checker.dir/src/dfs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/dfs.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/dfs.c -o CMakeFiles/checker.dir/src/dfs.c.s

CMakeFiles/checker.dir/src/ft_quick_sort.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_quick_sort.c.o: ../src/ft_quick_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/checker.dir/src/ft_quick_sort.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_quick_sort.c.o   -c /home/xel/projects/push_swap/src/ft_quick_sort.c

CMakeFiles/checker.dir/src/ft_quick_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_quick_sort.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_quick_sort.c > CMakeFiles/checker.dir/src/ft_quick_sort.c.i

CMakeFiles/checker.dir/src/ft_quick_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_quick_sort.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_quick_sort.c -o CMakeFiles/checker.dir/src/ft_quick_sort.c.s

CMakeFiles/checker.dir/src/ft_ps_new_content.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_ps_new_content.c.o: ../src/ft_ps_new_content.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/checker.dir/src/ft_ps_new_content.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_ps_new_content.c.o   -c /home/xel/projects/push_swap/src/ft_ps_new_content.c

CMakeFiles/checker.dir/src/ft_ps_new_content.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_ps_new_content.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_ps_new_content.c > CMakeFiles/checker.dir/src/ft_ps_new_content.c.i

CMakeFiles/checker.dir/src/ft_ps_new_content.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_ps_new_content.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_ps_new_content.c -o CMakeFiles/checker.dir/src/ft_ps_new_content.c.s

CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.o: ../src/ft_strsplit_to_inttab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.o   -c /home/xel/projects/push_swap/src/ft_strsplit_to_inttab.c

CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_strsplit_to_inttab.c > CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.i

CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_strsplit_to_inttab.c -o CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.s

CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.o: ../src/ft_lstd_deep_del.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.o   -c /home/xel/projects/push_swap/src/ft_lstd_deep_del.c

CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_lstd_deep_del.c > CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.i

CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_lstd_deep_del.c -o CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.s

CMakeFiles/checker.dir/src/ft_lstd_to_array.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_lstd_to_array.c.o: ../src/ft_lstd_to_array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/checker.dir/src/ft_lstd_to_array.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_lstd_to_array.c.o   -c /home/xel/projects/push_swap/src/ft_lstd_to_array.c

CMakeFiles/checker.dir/src/ft_lstd_to_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_lstd_to_array.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_lstd_to_array.c > CMakeFiles/checker.dir/src/ft_lstd_to_array.c.i

CMakeFiles/checker.dir/src/ft_lstd_to_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_lstd_to_array.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_lstd_to_array.c -o CMakeFiles/checker.dir/src/ft_lstd_to_array.c.s

CMakeFiles/checker.dir/src/ft_array_to_lstd.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_array_to_lstd.c.o: ../src/ft_array_to_lstd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/checker.dir/src/ft_array_to_lstd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_array_to_lstd.c.o   -c /home/xel/projects/push_swap/src/ft_array_to_lstd.c

CMakeFiles/checker.dir/src/ft_array_to_lstd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_array_to_lstd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_array_to_lstd.c > CMakeFiles/checker.dir/src/ft_array_to_lstd.c.i

CMakeFiles/checker.dir/src/ft_array_to_lstd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_array_to_lstd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_array_to_lstd.c -o CMakeFiles/checker.dir/src/ft_array_to_lstd.c.s

CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.o: ../src/ft_is_array_in_lstd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.o   -c /home/xel/projects/push_swap/src/ft_is_array_in_lstd.c

CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_is_array_in_lstd.c > CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.i

CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_is_array_in_lstd.c -o CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.s

CMakeFiles/checker.dir/src/ft_sort_ratio.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_sort_ratio.c.o: ../src/ft_sort_ratio.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/checker.dir/src/ft_sort_ratio.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_sort_ratio.c.o   -c /home/xel/projects/push_swap/src/ft_sort_ratio.c

CMakeFiles/checker.dir/src/ft_sort_ratio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_sort_ratio.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_sort_ratio.c > CMakeFiles/checker.dir/src/ft_sort_ratio.c.i

CMakeFiles/checker.dir/src/ft_sort_ratio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_sort_ratio.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_sort_ratio.c -o CMakeFiles/checker.dir/src/ft_sort_ratio.c.s

CMakeFiles/checker.dir/src/ft_queue_sort.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_queue_sort.c.o: ../src/ft_queue_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/checker.dir/src/ft_queue_sort.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_queue_sort.c.o   -c /home/xel/projects/push_swap/src/ft_queue_sort.c

CMakeFiles/checker.dir/src/ft_queue_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_queue_sort.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_queue_sort.c > CMakeFiles/checker.dir/src/ft_queue_sort.c.i

CMakeFiles/checker.dir/src/ft_queue_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_queue_sort.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_queue_sort.c -o CMakeFiles/checker.dir/src/ft_queue_sort.c.s

CMakeFiles/checker.dir/src/ft_sort_tools.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_sort_tools.c.o: ../src/ft_sort_tools.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/checker.dir/src/ft_sort_tools.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_sort_tools.c.o   -c /home/xel/projects/push_swap/src/ft_sort_tools.c

CMakeFiles/checker.dir/src/ft_sort_tools.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_sort_tools.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_sort_tools.c > CMakeFiles/checker.dir/src/ft_sort_tools.c.i

CMakeFiles/checker.dir/src/ft_sort_tools.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_sort_tools.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_sort_tools.c -o CMakeFiles/checker.dir/src/ft_sort_tools.c.s

CMakeFiles/checker.dir/src/ft_checker_tools.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_checker_tools.c.o: ../src/ft_checker_tools.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/checker.dir/src/ft_checker_tools.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_checker_tools.c.o   -c /home/xel/projects/push_swap/src/ft_checker_tools.c

CMakeFiles/checker.dir/src/ft_checker_tools.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_checker_tools.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_checker_tools.c > CMakeFiles/checker.dir/src/ft_checker_tools.c.i

CMakeFiles/checker.dir/src/ft_checker_tools.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_checker_tools.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_checker_tools.c -o CMakeFiles/checker.dir/src/ft_checker_tools.c.s

CMakeFiles/checker.dir/src/ft_operation2.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_operation2.c.o: ../src/ft_operation2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/checker.dir/src/ft_operation2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_operation2.c.o   -c /home/xel/projects/push_swap/src/ft_operation2.c

CMakeFiles/checker.dir/src/ft_operation2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_operation2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_operation2.c > CMakeFiles/checker.dir/src/ft_operation2.c.i

CMakeFiles/checker.dir/src/ft_operation2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_operation2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_operation2.c -o CMakeFiles/checker.dir/src/ft_operation2.c.s

CMakeFiles/checker.dir/src/ft_sort_tools2.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_sort_tools2.c.o: ../src/ft_sort_tools2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/checker.dir/src/ft_sort_tools2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_sort_tools2.c.o   -c /home/xel/projects/push_swap/src/ft_sort_tools2.c

CMakeFiles/checker.dir/src/ft_sort_tools2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_sort_tools2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_sort_tools2.c > CMakeFiles/checker.dir/src/ft_sort_tools2.c.i

CMakeFiles/checker.dir/src/ft_sort_tools2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_sort_tools2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_sort_tools2.c -o CMakeFiles/checker.dir/src/ft_sort_tools2.c.s

CMakeFiles/checker.dir/src/ft_sort_tools3.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_sort_tools3.c.o: ../src/ft_sort_tools3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/checker.dir/src/ft_sort_tools3.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_sort_tools3.c.o   -c /home/xel/projects/push_swap/src/ft_sort_tools3.c

CMakeFiles/checker.dir/src/ft_sort_tools3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_sort_tools3.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_sort_tools3.c > CMakeFiles/checker.dir/src/ft_sort_tools3.c.i

CMakeFiles/checker.dir/src/ft_sort_tools3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_sort_tools3.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_sort_tools3.c -o CMakeFiles/checker.dir/src/ft_sort_tools3.c.s

CMakeFiles/checker.dir/src/ft_sort_tools4.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_sort_tools4.c.o: ../src/ft_sort_tools4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/checker.dir/src/ft_sort_tools4.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_sort_tools4.c.o   -c /home/xel/projects/push_swap/src/ft_sort_tools4.c

CMakeFiles/checker.dir/src/ft_sort_tools4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_sort_tools4.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_sort_tools4.c > CMakeFiles/checker.dir/src/ft_sort_tools4.c.i

CMakeFiles/checker.dir/src/ft_sort_tools4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_sort_tools4.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_sort_tools4.c -o CMakeFiles/checker.dir/src/ft_sort_tools4.c.s

CMakeFiles/checker.dir/src/ft_output.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/ft_output.c.o: ../src/ft_output.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building C object CMakeFiles/checker.dir/src/ft_output.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/ft_output.c.o   -c /home/xel/projects/push_swap/src/ft_output.c

CMakeFiles/checker.dir/src/ft_output.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/ft_output.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/ft_output.c > CMakeFiles/checker.dir/src/ft_output.c.i

CMakeFiles/checker.dir/src/ft_output.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/ft_output.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/ft_output.c -o CMakeFiles/checker.dir/src/ft_output.c.s

CMakeFiles/checker.dir/src/dfs_tool.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/dfs_tool.c.o: ../src/dfs_tool.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building C object CMakeFiles/checker.dir/src/dfs_tool.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/dfs_tool.c.o   -c /home/xel/projects/push_swap/src/dfs_tool.c

CMakeFiles/checker.dir/src/dfs_tool.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/dfs_tool.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/dfs_tool.c > CMakeFiles/checker.dir/src/dfs_tool.c.i

CMakeFiles/checker.dir/src/dfs_tool.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/dfs_tool.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/dfs_tool.c -o CMakeFiles/checker.dir/src/dfs_tool.c.s

CMakeFiles/checker.dir/src/checker.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/src/checker.c.o: ../src/checker.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Building C object CMakeFiles/checker.dir/src/checker.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/src/checker.c.o   -c /home/xel/projects/push_swap/src/checker.c

CMakeFiles/checker.dir/src/checker.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/src/checker.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xel/projects/push_swap/src/checker.c > CMakeFiles/checker.dir/src/checker.c.i

CMakeFiles/checker.dir/src/checker.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/src/checker.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xel/projects/push_swap/src/checker.c -o CMakeFiles/checker.dir/src/checker.c.s

# Object files for target checker
checker_OBJECTS = \
"CMakeFiles/checker.dir/src/is_sorted.c.o" \
"CMakeFiles/checker.dir/src/ft_lstd_swap.c.o" \
"CMakeFiles/checker.dir/src/ft_lstprint.c.o" \
"CMakeFiles/checker.dir/src/read.c.o" \
"CMakeFiles/checker.dir/src/ft_operation.c.o" \
"CMakeFiles/checker.dir/src/dfs.c.o" \
"CMakeFiles/checker.dir/src/ft_quick_sort.c.o" \
"CMakeFiles/checker.dir/src/ft_ps_new_content.c.o" \
"CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.o" \
"CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.o" \
"CMakeFiles/checker.dir/src/ft_lstd_to_array.c.o" \
"CMakeFiles/checker.dir/src/ft_array_to_lstd.c.o" \
"CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.o" \
"CMakeFiles/checker.dir/src/ft_sort_ratio.c.o" \
"CMakeFiles/checker.dir/src/ft_queue_sort.c.o" \
"CMakeFiles/checker.dir/src/ft_sort_tools.c.o" \
"CMakeFiles/checker.dir/src/ft_checker_tools.c.o" \
"CMakeFiles/checker.dir/src/ft_operation2.c.o" \
"CMakeFiles/checker.dir/src/ft_sort_tools2.c.o" \
"CMakeFiles/checker.dir/src/ft_sort_tools3.c.o" \
"CMakeFiles/checker.dir/src/ft_sort_tools4.c.o" \
"CMakeFiles/checker.dir/src/ft_output.c.o" \
"CMakeFiles/checker.dir/src/dfs_tool.c.o" \
"CMakeFiles/checker.dir/src/checker.c.o"

# External object files for target checker
checker_EXTERNAL_OBJECTS =

checker: CMakeFiles/checker.dir/src/is_sorted.c.o
checker: CMakeFiles/checker.dir/src/ft_lstd_swap.c.o
checker: CMakeFiles/checker.dir/src/ft_lstprint.c.o
checker: CMakeFiles/checker.dir/src/read.c.o
checker: CMakeFiles/checker.dir/src/ft_operation.c.o
checker: CMakeFiles/checker.dir/src/dfs.c.o
checker: CMakeFiles/checker.dir/src/ft_quick_sort.c.o
checker: CMakeFiles/checker.dir/src/ft_ps_new_content.c.o
checker: CMakeFiles/checker.dir/src/ft_strsplit_to_inttab.c.o
checker: CMakeFiles/checker.dir/src/ft_lstd_deep_del.c.o
checker: CMakeFiles/checker.dir/src/ft_lstd_to_array.c.o
checker: CMakeFiles/checker.dir/src/ft_array_to_lstd.c.o
checker: CMakeFiles/checker.dir/src/ft_is_array_in_lstd.c.o
checker: CMakeFiles/checker.dir/src/ft_sort_ratio.c.o
checker: CMakeFiles/checker.dir/src/ft_queue_sort.c.o
checker: CMakeFiles/checker.dir/src/ft_sort_tools.c.o
checker: CMakeFiles/checker.dir/src/ft_checker_tools.c.o
checker: CMakeFiles/checker.dir/src/ft_operation2.c.o
checker: CMakeFiles/checker.dir/src/ft_sort_tools2.c.o
checker: CMakeFiles/checker.dir/src/ft_sort_tools3.c.o
checker: CMakeFiles/checker.dir/src/ft_sort_tools4.c.o
checker: CMakeFiles/checker.dir/src/ft_output.c.o
checker: CMakeFiles/checker.dir/src/dfs_tool.c.o
checker: CMakeFiles/checker.dir/src/checker.c.o
checker: CMakeFiles/checker.dir/build.make
checker: lib/libft/liblibft.a
checker: CMakeFiles/checker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xel/projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Linking C executable checker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/checker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/checker.dir/build: checker

.PHONY : CMakeFiles/checker.dir/build

CMakeFiles/checker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/checker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/checker.dir/clean

CMakeFiles/checker.dir/depend:
	cd /home/xel/projects/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xel/projects/push_swap /home/xel/projects/push_swap /home/xel/projects/push_swap/cmake-build-debug /home/xel/projects/push_swap/cmake-build-debug /home/xel/projects/push_swap/cmake-build-debug/CMakeFiles/checker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/checker.dir/depend

