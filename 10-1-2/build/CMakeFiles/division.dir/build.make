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
CMAKE_SOURCE_DIR = /home/s1u/2022_ite1015_2022090537/10-1-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s1u/2022_ite1015_2022090537/10-1-2/build

# Include any dependencies generated for this target.
include CMakeFiles/division.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/division.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/division.dir/flags.make

CMakeFiles/division.dir/main.cpp.o: CMakeFiles/division.dir/flags.make
CMakeFiles/division.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s1u/2022_ite1015_2022090537/10-1-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/division.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/division.dir/main.cpp.o -c /home/s1u/2022_ite1015_2022090537/10-1-2/main.cpp

CMakeFiles/division.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/division.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1u/2022_ite1015_2022090537/10-1-2/main.cpp > CMakeFiles/division.dir/main.cpp.i

CMakeFiles/division.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/division.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1u/2022_ite1015_2022090537/10-1-2/main.cpp -o CMakeFiles/division.dir/main.cpp.s

# Object files for target division
division_OBJECTS = \
"CMakeFiles/division.dir/main.cpp.o"

# External object files for target division
division_EXTERNAL_OBJECTS =

division: CMakeFiles/division.dir/main.cpp.o
division: CMakeFiles/division.dir/build.make
division: CMakeFiles/division.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s1u/2022_ite1015_2022090537/10-1-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable division"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/division.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/division.dir/build: division

.PHONY : CMakeFiles/division.dir/build

CMakeFiles/division.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/division.dir/cmake_clean.cmake
.PHONY : CMakeFiles/division.dir/clean

CMakeFiles/division.dir/depend:
	cd /home/s1u/2022_ite1015_2022090537/10-1-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s1u/2022_ite1015_2022090537/10-1-2 /home/s1u/2022_ite1015_2022090537/10-1-2 /home/s1u/2022_ite1015_2022090537/10-1-2/build /home/s1u/2022_ite1015_2022090537/10-1-2/build /home/s1u/2022_ite1015_2022090537/10-1-2/build/CMakeFiles/division.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/division.dir/depend

