# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/itkxl/Documents/c/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/itkxl/Documents/c/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/itkxl/Documents/do-it/fat32/xfat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/xfat.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/xfat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xfat.dir/flags.make

CMakeFiles/xfat.dir/main.c.o: CMakeFiles/xfat.dir/flags.make
CMakeFiles/xfat.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/xfat.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/xfat.dir/main.c.o -c /home/itkxl/Documents/do-it/fat32/xfat/main.c

CMakeFiles/xfat.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xfat.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/itkxl/Documents/do-it/fat32/xfat/main.c > CMakeFiles/xfat.dir/main.c.i

CMakeFiles/xfat.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xfat.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/itkxl/Documents/do-it/fat32/xfat/main.c -o CMakeFiles/xfat.dir/main.c.s

CMakeFiles/xfat.dir/xdisk.c.o: CMakeFiles/xfat.dir/flags.make
CMakeFiles/xfat.dir/xdisk.c.o: ../xdisk.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/xfat.dir/xdisk.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/xfat.dir/xdisk.c.o -c /home/itkxl/Documents/do-it/fat32/xfat/xdisk.c

CMakeFiles/xfat.dir/xdisk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xfat.dir/xdisk.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/itkxl/Documents/do-it/fat32/xfat/xdisk.c > CMakeFiles/xfat.dir/xdisk.c.i

CMakeFiles/xfat.dir/xdisk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xfat.dir/xdisk.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/itkxl/Documents/do-it/fat32/xfat/xdisk.c -o CMakeFiles/xfat.dir/xdisk.c.s

CMakeFiles/xfat.dir/driver.c.o: CMakeFiles/xfat.dir/flags.make
CMakeFiles/xfat.dir/driver.c.o: ../driver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/xfat.dir/driver.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/xfat.dir/driver.c.o -c /home/itkxl/Documents/do-it/fat32/xfat/driver.c

CMakeFiles/xfat.dir/driver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xfat.dir/driver.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/itkxl/Documents/do-it/fat32/xfat/driver.c > CMakeFiles/xfat.dir/driver.c.i

CMakeFiles/xfat.dir/driver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xfat.dir/driver.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/itkxl/Documents/do-it/fat32/xfat/driver.c -o CMakeFiles/xfat.dir/driver.c.s

# Object files for target xfat
xfat_OBJECTS = \
"CMakeFiles/xfat.dir/main.c.o" \
"CMakeFiles/xfat.dir/xdisk.c.o" \
"CMakeFiles/xfat.dir/driver.c.o"

# External object files for target xfat
xfat_EXTERNAL_OBJECTS =

xfat: CMakeFiles/xfat.dir/main.c.o
xfat: CMakeFiles/xfat.dir/xdisk.c.o
xfat: CMakeFiles/xfat.dir/driver.c.o
xfat: CMakeFiles/xfat.dir/build.make
xfat: CMakeFiles/xfat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable xfat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xfat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xfat.dir/build: xfat
.PHONY : CMakeFiles/xfat.dir/build

CMakeFiles/xfat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/xfat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/xfat.dir/clean

CMakeFiles/xfat.dir/depend:
	cd /home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/itkxl/Documents/do-it/fat32/xfat /home/itkxl/Documents/do-it/fat32/xfat /home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug /home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug /home/itkxl/Documents/do-it/fat32/xfat/cmake-build-debug/CMakeFiles/xfat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xfat.dir/depend

