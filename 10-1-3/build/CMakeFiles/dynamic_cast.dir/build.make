# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/s1u/2022_ite1015_2022090537/10-1-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s1u/2022_ite1015_2022090537/10-1-3/build

# Include any dependencies generated for this target.
include CMakeFiles/dynamic_cast.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dynamic_cast.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dynamic_cast.dir/flags.make

CMakeFiles/dynamic_cast.dir/main.cpp.o: CMakeFiles/dynamic_cast.dir/flags.make
CMakeFiles/dynamic_cast.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s1u/2022_ite1015_2022090537/10-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dynamic_cast.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamic_cast.dir/main.cpp.o -c /home/s1u/2022_ite1015_2022090537/10-1-3/main.cpp

CMakeFiles/dynamic_cast.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamic_cast.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1u/2022_ite1015_2022090537/10-1-3/main.cpp > CMakeFiles/dynamic_cast.dir/main.cpp.i

CMakeFiles/dynamic_cast.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamic_cast.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1u/2022_ite1015_2022090537/10-1-3/main.cpp -o CMakeFiles/dynamic_cast.dir/main.cpp.s

# Object files for target dynamic_cast
dynamic_cast_OBJECTS = \
"CMakeFiles/dynamic_cast.dir/main.cpp.o"

# External object files for target dynamic_cast
dynamic_cast_EXTERNAL_OBJECTS =

dynamic_cast: CMakeFiles/dynamic_cast.dir/main.cpp.o
dynamic_cast: CMakeFiles/dynamic_cast.dir/build.make
dynamic_cast: CMakeFiles/dynamic_cast.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s1u/2022_ite1015_2022090537/10-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dynamic_cast"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dynamic_cast.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dynamic_cast.dir/build: dynamic_cast

.PHONY : CMakeFiles/dynamic_cast.dir/build

CMakeFiles/dynamic_cast.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dynamic_cast.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dynamic_cast.dir/clean

CMakeFiles/dynamic_cast.dir/depend:
	cd /home/s1u/2022_ite1015_2022090537/10-1-3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s1u/2022_ite1015_2022090537/10-1-3 /home/s1u/2022_ite1015_2022090537/10-1-3 /home/s1u/2022_ite1015_2022090537/10-1-3/build /home/s1u/2022_ite1015_2022090537/10-1-3/build /home/s1u/2022_ite1015_2022090537/10-1-3/build/CMakeFiles/dynamic_cast.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dynamic_cast.dir/depend

