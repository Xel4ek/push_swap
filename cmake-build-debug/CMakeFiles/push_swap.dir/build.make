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
CMAKE_COMMAND = /cygdrive/c/Users/Admin/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Admin/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/shcool_42/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/shcool_42/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/src/is_sorted.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/is_sorted.c.o: ../src/is_sorted.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/src/is_sorted.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/is_sorted.c.o   -c /cygdrive/e/shcool_42/push_swap/src/is_sorted.c

CMakeFiles/push_swap.dir/src/is_sorted.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/is_sorted.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/is_sorted.c > CMakeFiles/push_swap.dir/src/is_sorted.c.i

CMakeFiles/push_swap.dir/src/is_sorted.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/is_sorted.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/is_sorted.c -o CMakeFiles/push_swap.dir/src/is_sorted.c.s

CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.o: ../src/ft_lstd_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.o   -c /cygdrive/e/shcool_42/push_swap/src/ft_lstd_swap.c

CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/ft_lstd_swap.c > CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.i

CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/ft_lstd_swap.c -o CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.s

CMakeFiles/push_swap.dir/src/ft_lstprint.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/ft_lstprint.c.o: ../src/ft_lstprint.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/push_swap.dir/src/ft_lstprint.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/ft_lstprint.c.o   -c /cygdrive/e/shcool_42/push_swap/src/ft_lstprint.c

CMakeFiles/push_swap.dir/src/ft_lstprint.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/ft_lstprint.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/ft_lstprint.c > CMakeFiles/push_swap.dir/src/ft_lstprint.c.i

CMakeFiles/push_swap.dir/src/ft_lstprint.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/ft_lstprint.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/ft_lstprint.c -o CMakeFiles/push_swap.dir/src/ft_lstprint.c.s

CMakeFiles/push_swap.dir/src/read.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/read.c.o: ../src/read.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/push_swap.dir/src/read.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/read.c.o   -c /cygdrive/e/shcool_42/push_swap/src/read.c

CMakeFiles/push_swap.dir/src/read.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/read.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/read.c > CMakeFiles/push_swap.dir/src/read.c.i

CMakeFiles/push_swap.dir/src/read.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/read.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/read.c -o CMakeFiles/push_swap.dir/src/read.c.s

CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.o: ../src/ft_lstd_to_str.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.o   -c /cygdrive/e/shcool_42/push_swap/src/ft_lstd_to_str.c

CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/ft_lstd_to_str.c > CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.i

CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/ft_lstd_to_str.c -o CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.s

CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.o: ../src/ft_is_str_in_lstd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.o   -c /cygdrive/e/shcool_42/push_swap/src/ft_is_str_in_lstd.c

CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/ft_is_str_in_lstd.c > CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.i

CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/ft_is_str_in_lstd.c -o CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.s

CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.o: ../src/ft_swap_stacks.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.o   -c /cygdrive/e/shcool_42/push_swap/src/ft_swap_stacks.c

CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/ft_swap_stacks.c > CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.i

CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/ft_swap_stacks.c -o CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.s

CMakeFiles/push_swap.dir/src/ft_operation.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/ft_operation.c.o: ../src/ft_operation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/push_swap.dir/src/ft_operation.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/ft_operation.c.o   -c /cygdrive/e/shcool_42/push_swap/src/ft_operation.c

CMakeFiles/push_swap.dir/src/ft_operation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/ft_operation.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/src/ft_operation.c > CMakeFiles/push_swap.dir/src/ft_operation.c.i

CMakeFiles/push_swap.dir/src/ft_operation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/ft_operation.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/src/ft_operation.c -o CMakeFiles/push_swap.dir/src/ft_operation.c.s

CMakeFiles/push_swap.dir/main.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/push_swap.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/main.c.o   -c /cygdrive/e/shcool_42/push_swap/main.c

CMakeFiles/push_swap.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/shcool_42/push_swap/main.c > CMakeFiles/push_swap.dir/main.c.i

CMakeFiles/push_swap.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/shcool_42/push_swap/main.c -o CMakeFiles/push_swap.dir/main.c.s

# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/src/is_sorted.c.o" \
"CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.o" \
"CMakeFiles/push_swap.dir/src/ft_lstprint.c.o" \
"CMakeFiles/push_swap.dir/src/read.c.o" \
"CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.o" \
"CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.o" \
"CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.o" \
"CMakeFiles/push_swap.dir/src/ft_operation.c.o" \
"CMakeFiles/push_swap.dir/main.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap.exe: CMakeFiles/push_swap.dir/src/is_sorted.c.o
push_swap.exe: CMakeFiles/push_swap.dir/src/ft_lstd_swap.c.o
push_swap.exe: CMakeFiles/push_swap.dir/src/ft_lstprint.c.o
push_swap.exe: CMakeFiles/push_swap.dir/src/read.c.o
push_swap.exe: CMakeFiles/push_swap.dir/src/ft_lstd_to_str.c.o
push_swap.exe: CMakeFiles/push_swap.dir/src/ft_is_str_in_lstd.c.o
push_swap.exe: CMakeFiles/push_swap.dir/src/ft_swap_stacks.c.o
push_swap.exe: CMakeFiles/push_swap.dir/src/ft_operation.c.o
push_swap.exe: CMakeFiles/push_swap.dir/main.c.o
push_swap.exe: CMakeFiles/push_swap.dir/build.make
push_swap.exe: lib/libft/liblibft.a
push_swap.exe: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable push_swap.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap.exe

.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd /cygdrive/e/shcool_42/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/shcool_42/push_swap /cygdrive/e/shcool_42/push_swap /cygdrive/e/shcool_42/push_swap/cmake-build-debug /cygdrive/e/shcool_42/push_swap/cmake-build-debug /cygdrive/e/shcool_42/push_swap/cmake-build-debug/CMakeFiles/push_swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend

