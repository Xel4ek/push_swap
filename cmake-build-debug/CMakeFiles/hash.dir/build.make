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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hwolf/projects/push

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hwolf/projects/push/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hash.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hash.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hash.dir/flags.make

CMakeFiles/hash.dir/src/is_sorted.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/is_sorted.c.o: ../src/is_sorted.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hash.dir/src/is_sorted.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/is_sorted.c.o   -c /Users/hwolf/projects/push/src/is_sorted.c

CMakeFiles/hash.dir/src/is_sorted.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/is_sorted.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/is_sorted.c > CMakeFiles/hash.dir/src/is_sorted.c.i

CMakeFiles/hash.dir/src/is_sorted.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/is_sorted.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/is_sorted.c -o CMakeFiles/hash.dir/src/is_sorted.c.s

CMakeFiles/hash.dir/src/ft_lstd_swap.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_lstd_swap.c.o: ../src/ft_lstd_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/hash.dir/src/ft_lstd_swap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_lstd_swap.c.o   -c /Users/hwolf/projects/push/src/ft_lstd_swap.c

CMakeFiles/hash.dir/src/ft_lstd_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_lstd_swap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_lstd_swap.c > CMakeFiles/hash.dir/src/ft_lstd_swap.c.i

CMakeFiles/hash.dir/src/ft_lstd_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_lstd_swap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_lstd_swap.c -o CMakeFiles/hash.dir/src/ft_lstd_swap.c.s

CMakeFiles/hash.dir/src/ft_lstprint.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_lstprint.c.o: ../src/ft_lstprint.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/hash.dir/src/ft_lstprint.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_lstprint.c.o   -c /Users/hwolf/projects/push/src/ft_lstprint.c

CMakeFiles/hash.dir/src/ft_lstprint.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_lstprint.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_lstprint.c > CMakeFiles/hash.dir/src/ft_lstprint.c.i

CMakeFiles/hash.dir/src/ft_lstprint.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_lstprint.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_lstprint.c -o CMakeFiles/hash.dir/src/ft_lstprint.c.s

CMakeFiles/hash.dir/src/read.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/read.c.o: ../src/read.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/hash.dir/src/read.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/read.c.o   -c /Users/hwolf/projects/push/src/read.c

CMakeFiles/hash.dir/src/read.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/read.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/read.c > CMakeFiles/hash.dir/src/read.c.i

CMakeFiles/hash.dir/src/read.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/read.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/read.c -o CMakeFiles/hash.dir/src/read.c.s

CMakeFiles/hash.dir/src/ft_operation.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_operation.c.o: ../src/ft_operation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/hash.dir/src/ft_operation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_operation.c.o   -c /Users/hwolf/projects/push/src/ft_operation.c

CMakeFiles/hash.dir/src/ft_operation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_operation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_operation.c > CMakeFiles/hash.dir/src/ft_operation.c.i

CMakeFiles/hash.dir/src/ft_operation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_operation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_operation.c -o CMakeFiles/hash.dir/src/ft_operation.c.s

CMakeFiles/hash.dir/src/dfs.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/dfs.c.o: ../src/dfs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/hash.dir/src/dfs.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/dfs.c.o   -c /Users/hwolf/projects/push/src/dfs.c

CMakeFiles/hash.dir/src/dfs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/dfs.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/dfs.c > CMakeFiles/hash.dir/src/dfs.c.i

CMakeFiles/hash.dir/src/dfs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/dfs.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/dfs.c -o CMakeFiles/hash.dir/src/dfs.c.s

CMakeFiles/hash.dir/src/ft_quick_sort.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_quick_sort.c.o: ../src/ft_quick_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/hash.dir/src/ft_quick_sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_quick_sort.c.o   -c /Users/hwolf/projects/push/src/ft_quick_sort.c

CMakeFiles/hash.dir/src/ft_quick_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_quick_sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_quick_sort.c > CMakeFiles/hash.dir/src/ft_quick_sort.c.i

CMakeFiles/hash.dir/src/ft_quick_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_quick_sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_quick_sort.c -o CMakeFiles/hash.dir/src/ft_quick_sort.c.s

CMakeFiles/hash.dir/src/ft_ps_new_content.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_ps_new_content.c.o: ../src/ft_ps_new_content.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/hash.dir/src/ft_ps_new_content.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_ps_new_content.c.o   -c /Users/hwolf/projects/push/src/ft_ps_new_content.c

CMakeFiles/hash.dir/src/ft_ps_new_content.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_ps_new_content.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_ps_new_content.c > CMakeFiles/hash.dir/src/ft_ps_new_content.c.i

CMakeFiles/hash.dir/src/ft_ps_new_content.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_ps_new_content.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_ps_new_content.c -o CMakeFiles/hash.dir/src/ft_ps_new_content.c.s

CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.o: ../src/ft_strsplit_to_inttab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.o   -c /Users/hwolf/projects/push/src/ft_strsplit_to_inttab.c

CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_strsplit_to_inttab.c > CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.i

CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_strsplit_to_inttab.c -o CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.s

CMakeFiles/hash.dir/src/ft_lstd_del_2.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_lstd_del_2.c.o: ../src/ft_lstd_del_2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/hash.dir/src/ft_lstd_del_2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_lstd_del_2.c.o   -c /Users/hwolf/projects/push/src/ft_lstd_del_2.c

CMakeFiles/hash.dir/src/ft_lstd_del_2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_lstd_del_2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_lstd_del_2.c > CMakeFiles/hash.dir/src/ft_lstd_del_2.c.i

CMakeFiles/hash.dir/src/ft_lstd_del_2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_lstd_del_2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_lstd_del_2.c -o CMakeFiles/hash.dir/src/ft_lstd_del_2.c.s

CMakeFiles/hash.dir/src/ft_lstd_to_array.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_lstd_to_array.c.o: ../src/ft_lstd_to_array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/hash.dir/src/ft_lstd_to_array.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_lstd_to_array.c.o   -c /Users/hwolf/projects/push/src/ft_lstd_to_array.c

CMakeFiles/hash.dir/src/ft_lstd_to_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_lstd_to_array.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_lstd_to_array.c > CMakeFiles/hash.dir/src/ft_lstd_to_array.c.i

CMakeFiles/hash.dir/src/ft_lstd_to_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_lstd_to_array.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_lstd_to_array.c -o CMakeFiles/hash.dir/src/ft_lstd_to_array.c.s

CMakeFiles/hash.dir/src/ft_array_to_lstd.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_array_to_lstd.c.o: ../src/ft_array_to_lstd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/hash.dir/src/ft_array_to_lstd.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_array_to_lstd.c.o   -c /Users/hwolf/projects/push/src/ft_array_to_lstd.c

CMakeFiles/hash.dir/src/ft_array_to_lstd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_array_to_lstd.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_array_to_lstd.c > CMakeFiles/hash.dir/src/ft_array_to_lstd.c.i

CMakeFiles/hash.dir/src/ft_array_to_lstd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_array_to_lstd.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_array_to_lstd.c -o CMakeFiles/hash.dir/src/ft_array_to_lstd.c.s

CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.o: ../src/ft_is_array_in_lstd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.o   -c /Users/hwolf/projects/push/src/ft_is_array_in_lstd.c

CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_is_array_in_lstd.c > CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.i

CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_is_array_in_lstd.c -o CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.s

CMakeFiles/hash.dir/src/ft_sort_ratio.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_sort_ratio.c.o: ../src/ft_sort_ratio.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/hash.dir/src/ft_sort_ratio.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_sort_ratio.c.o   -c /Users/hwolf/projects/push/src/ft_sort_ratio.c

CMakeFiles/hash.dir/src/ft_sort_ratio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_sort_ratio.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_sort_ratio.c > CMakeFiles/hash.dir/src/ft_sort_ratio.c.i

CMakeFiles/hash.dir/src/ft_sort_ratio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_sort_ratio.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_sort_ratio.c -o CMakeFiles/hash.dir/src/ft_sort_ratio.c.s

CMakeFiles/hash.dir/src/ft_queue_sort.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_queue_sort.c.o: ../src/ft_queue_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/hash.dir/src/ft_queue_sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_queue_sort.c.o   -c /Users/hwolf/projects/push/src/ft_queue_sort.c

CMakeFiles/hash.dir/src/ft_queue_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_queue_sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_queue_sort.c > CMakeFiles/hash.dir/src/ft_queue_sort.c.i

CMakeFiles/hash.dir/src/ft_queue_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_queue_sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_queue_sort.c -o CMakeFiles/hash.dir/src/ft_queue_sort.c.s

CMakeFiles/hash.dir/src/ft_sort_tools.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_sort_tools.c.o: ../src/ft_sort_tools.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/hash.dir/src/ft_sort_tools.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_sort_tools.c.o   -c /Users/hwolf/projects/push/src/ft_sort_tools.c

CMakeFiles/hash.dir/src/ft_sort_tools.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_sort_tools.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_sort_tools.c > CMakeFiles/hash.dir/src/ft_sort_tools.c.i

CMakeFiles/hash.dir/src/ft_sort_tools.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_sort_tools.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_sort_tools.c -o CMakeFiles/hash.dir/src/ft_sort_tools.c.s

CMakeFiles/hash.dir/src/ft_checker_tools.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_checker_tools.c.o: ../src/ft_checker_tools.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/hash.dir/src/ft_checker_tools.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_checker_tools.c.o   -c /Users/hwolf/projects/push/src/ft_checker_tools.c

CMakeFiles/hash.dir/src/ft_checker_tools.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_checker_tools.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_checker_tools.c > CMakeFiles/hash.dir/src/ft_checker_tools.c.i

CMakeFiles/hash.dir/src/ft_checker_tools.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_checker_tools.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_checker_tools.c -o CMakeFiles/hash.dir/src/ft_checker_tools.c.s

CMakeFiles/hash.dir/src/ft_operation2.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_operation2.c.o: ../src/ft_operation2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/hash.dir/src/ft_operation2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_operation2.c.o   -c /Users/hwolf/projects/push/src/ft_operation2.c

CMakeFiles/hash.dir/src/ft_operation2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_operation2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_operation2.c > CMakeFiles/hash.dir/src/ft_operation2.c.i

CMakeFiles/hash.dir/src/ft_operation2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_operation2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_operation2.c -o CMakeFiles/hash.dir/src/ft_operation2.c.s

CMakeFiles/hash.dir/src/ft_sort_tools2.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_sort_tools2.c.o: ../src/ft_sort_tools2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/hash.dir/src/ft_sort_tools2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_sort_tools2.c.o   -c /Users/hwolf/projects/push/src/ft_sort_tools2.c

CMakeFiles/hash.dir/src/ft_sort_tools2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_sort_tools2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_sort_tools2.c > CMakeFiles/hash.dir/src/ft_sort_tools2.c.i

CMakeFiles/hash.dir/src/ft_sort_tools2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_sort_tools2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_sort_tools2.c -o CMakeFiles/hash.dir/src/ft_sort_tools2.c.s

CMakeFiles/hash.dir/src/ft_sort_tools3.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_sort_tools3.c.o: ../src/ft_sort_tools3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/hash.dir/src/ft_sort_tools3.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_sort_tools3.c.o   -c /Users/hwolf/projects/push/src/ft_sort_tools3.c

CMakeFiles/hash.dir/src/ft_sort_tools3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_sort_tools3.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_sort_tools3.c > CMakeFiles/hash.dir/src/ft_sort_tools3.c.i

CMakeFiles/hash.dir/src/ft_sort_tools3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_sort_tools3.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_sort_tools3.c -o CMakeFiles/hash.dir/src/ft_sort_tools3.c.s

CMakeFiles/hash.dir/src/ft_sort_tools4.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_sort_tools4.c.o: ../src/ft_sort_tools4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/hash.dir/src/ft_sort_tools4.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_sort_tools4.c.o   -c /Users/hwolf/projects/push/src/ft_sort_tools4.c

CMakeFiles/hash.dir/src/ft_sort_tools4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_sort_tools4.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_sort_tools4.c > CMakeFiles/hash.dir/src/ft_sort_tools4.c.i

CMakeFiles/hash.dir/src/ft_sort_tools4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_sort_tools4.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_sort_tools4.c -o CMakeFiles/hash.dir/src/ft_sort_tools4.c.s

CMakeFiles/hash.dir/src/ft_output.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/ft_output.c.o: ../src/ft_output.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building C object CMakeFiles/hash.dir/src/ft_output.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/ft_output.c.o   -c /Users/hwolf/projects/push/src/ft_output.c

CMakeFiles/hash.dir/src/ft_output.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/ft_output.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/ft_output.c > CMakeFiles/hash.dir/src/ft_output.c.i

CMakeFiles/hash.dir/src/ft_output.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/ft_output.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/ft_output.c -o CMakeFiles/hash.dir/src/ft_output.c.s

CMakeFiles/hash.dir/src/dfs_tool.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/src/dfs_tool.c.o: ../src/dfs_tool.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building C object CMakeFiles/hash.dir/src/dfs_tool.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/src/dfs_tool.c.o   -c /Users/hwolf/projects/push/src/dfs_tool.c

CMakeFiles/hash.dir/src/dfs_tool.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/src/dfs_tool.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/src/dfs_tool.c > CMakeFiles/hash.dir/src/dfs_tool.c.i

CMakeFiles/hash.dir/src/dfs_tool.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/src/dfs_tool.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/src/dfs_tool.c -o CMakeFiles/hash.dir/src/dfs_tool.c.s

CMakeFiles/hash.dir/hash.c.o: CMakeFiles/hash.dir/flags.make
CMakeFiles/hash.dir/hash.c.o: ../hash.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Building C object CMakeFiles/hash.dir/hash.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hash.dir/hash.c.o   -c /Users/hwolf/projects/push/hash.c

CMakeFiles/hash.dir/hash.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hash.dir/hash.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hwolf/projects/push/hash.c > CMakeFiles/hash.dir/hash.c.i

CMakeFiles/hash.dir/hash.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hash.dir/hash.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hwolf/projects/push/hash.c -o CMakeFiles/hash.dir/hash.c.s

# Object files for target hash
hash_OBJECTS = \
"CMakeFiles/hash.dir/src/is_sorted.c.o" \
"CMakeFiles/hash.dir/src/ft_lstd_swap.c.o" \
"CMakeFiles/hash.dir/src/ft_lstprint.c.o" \
"CMakeFiles/hash.dir/src/read.c.o" \
"CMakeFiles/hash.dir/src/ft_operation.c.o" \
"CMakeFiles/hash.dir/src/dfs.c.o" \
"CMakeFiles/hash.dir/src/ft_quick_sort.c.o" \
"CMakeFiles/hash.dir/src/ft_ps_new_content.c.o" \
"CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.o" \
"CMakeFiles/hash.dir/src/ft_lstd_del_2.c.o" \
"CMakeFiles/hash.dir/src/ft_lstd_to_array.c.o" \
"CMakeFiles/hash.dir/src/ft_array_to_lstd.c.o" \
"CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.o" \
"CMakeFiles/hash.dir/src/ft_sort_ratio.c.o" \
"CMakeFiles/hash.dir/src/ft_queue_sort.c.o" \
"CMakeFiles/hash.dir/src/ft_sort_tools.c.o" \
"CMakeFiles/hash.dir/src/ft_checker_tools.c.o" \
"CMakeFiles/hash.dir/src/ft_operation2.c.o" \
"CMakeFiles/hash.dir/src/ft_sort_tools2.c.o" \
"CMakeFiles/hash.dir/src/ft_sort_tools3.c.o" \
"CMakeFiles/hash.dir/src/ft_sort_tools4.c.o" \
"CMakeFiles/hash.dir/src/ft_output.c.o" \
"CMakeFiles/hash.dir/src/dfs_tool.c.o" \
"CMakeFiles/hash.dir/hash.c.o"

# External object files for target hash
hash_EXTERNAL_OBJECTS =

hash: CMakeFiles/hash.dir/src/is_sorted.c.o
hash: CMakeFiles/hash.dir/src/ft_lstd_swap.c.o
hash: CMakeFiles/hash.dir/src/ft_lstprint.c.o
hash: CMakeFiles/hash.dir/src/read.c.o
hash: CMakeFiles/hash.dir/src/ft_operation.c.o
hash: CMakeFiles/hash.dir/src/dfs.c.o
hash: CMakeFiles/hash.dir/src/ft_quick_sort.c.o
hash: CMakeFiles/hash.dir/src/ft_ps_new_content.c.o
hash: CMakeFiles/hash.dir/src/ft_strsplit_to_inttab.c.o
hash: CMakeFiles/hash.dir/src/ft_lstd_del_2.c.o
hash: CMakeFiles/hash.dir/src/ft_lstd_to_array.c.o
hash: CMakeFiles/hash.dir/src/ft_array_to_lstd.c.o
hash: CMakeFiles/hash.dir/src/ft_is_array_in_lstd.c.o
hash: CMakeFiles/hash.dir/src/ft_sort_ratio.c.o
hash: CMakeFiles/hash.dir/src/ft_queue_sort.c.o
hash: CMakeFiles/hash.dir/src/ft_sort_tools.c.o
hash: CMakeFiles/hash.dir/src/ft_checker_tools.c.o
hash: CMakeFiles/hash.dir/src/ft_operation2.c.o
hash: CMakeFiles/hash.dir/src/ft_sort_tools2.c.o
hash: CMakeFiles/hash.dir/src/ft_sort_tools3.c.o
hash: CMakeFiles/hash.dir/src/ft_sort_tools4.c.o
hash: CMakeFiles/hash.dir/src/ft_output.c.o
hash: CMakeFiles/hash.dir/src/dfs_tool.c.o
hash: CMakeFiles/hash.dir/hash.c.o
hash: CMakeFiles/hash.dir/build.make
hash: lib/libft/liblibft.a
hash: CMakeFiles/hash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hwolf/projects/push/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Linking C executable hash"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hash.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hash.dir/build: hash

.PHONY : CMakeFiles/hash.dir/build

CMakeFiles/hash.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hash.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hash.dir/clean

CMakeFiles/hash.dir/depend:
	cd /Users/hwolf/projects/push/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hwolf/projects/push /Users/hwolf/projects/push /Users/hwolf/projects/push/cmake-build-debug /Users/hwolf/projects/push/cmake-build-debug /Users/hwolf/projects/push/cmake-build-debug/CMakeFiles/hash.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hash.dir/depend

