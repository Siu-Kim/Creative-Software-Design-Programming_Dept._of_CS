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
CMAKE_SOURCE_DIR = /home/s1u/2022_ite1015_2022090537/10-1-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s1u/2022_ite1015_2022090537/10-1-1/build

# Include any dependencies generated for this target.
include CMakeFiles/shapes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shapes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shapes.dir/flags.make

CMakeFiles/shapes.dir/main.cpp.o: CMakeFiles/shapes.dir/flags.make
CMakeFiles/shapes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s1u/2022_ite1015_2022090537/10-1-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shapes.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shapes.dir/main.cpp.o -c /home/s1u/2022_ite1015_2022090537/10-1-1/main.cpp

CMakeFiles/shapes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shapes.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1u/2022_ite1015_2022090537/10-1-1/main.cpp > CMakeFiles/shapes.dir/main.cpp.i

CMakeFiles/shapes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shapes.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1u/2022_ite1015_2022090537/10-1-1/main.cpp -o CMakeFiles/shapes.dir/main.cpp.s

CMakeFiles/shapes.dir/shape.cpp.o: CMakeFiles/shapes.dir/flags.make
CMakeFiles/shapes.dir/shape.cpp.o: ../shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s1u/2022_ite1015_2022090537/10-1-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/shapes.dir/shape.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shapes.dir/shape.cpp.o -c /home/s1u/2022_ite1015_2022090537/10-1-1/shape.cpp

CMakeFiles/shapes.dir/shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shapes.dir/shape.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1u/2022_ite1015_2022090537/10-1-1/shape.cpp > CMakeFiles/shapes.dir/shape.cpp.i

CMakeFiles/shapes.dir/shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shapes.dir/shape.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1u/2022_ite1015_2022090537/10-1-1/shape.cpp -o CMakeFiles/shapes.dir/shape.cpp.s

# Object files for target shapes
shapes_OBJECTS = \
"CMakeFiles/shapes.dir/main.cpp.o" \
"CMakeFiles/shapes.dir/shape.cpp.o"

# External object files for target shapes
shapes_EXTERNAL_OBJECTS =

shapes: CMakeFiles/shapes.dir/main.cpp.o
shapes: CMakeFiles/shapes.dir/shape.cpp.o
shapes: CMakeFiles/shapes.dir/build.make
shapes: CMakeFiles/shapes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s1u/2022_ite1015_2022090537/10-1-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable shapes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shapes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shapes.dir/build: shapes

.PHONY : CMakeFiles/shapes.dir/build

CMakeFiles/shapes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shapes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shapes.dir/clean

CMakeFiles/shapes.dir/depend:
	cd /home/s1u/2022_ite1015_2022090537/10-1-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s1u/2022_ite1015_2022090537/10-1-1 /home/s1u/2022_ite1015_2022090537/10-1-1 /home/s1u/2022_ite1015_2022090537/10-1-1/build /home/s1u/2022_ite1015_2022090537/10-1-1/build /home/s1u/2022_ite1015_2022090537/10-1-1/build/CMakeFiles/shapes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shapes.dir/depend

