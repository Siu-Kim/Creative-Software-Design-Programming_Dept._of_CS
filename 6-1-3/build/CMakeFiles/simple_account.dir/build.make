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
CMAKE_SOURCE_DIR = /home/s1u/2022_ite1015_2022090537/6-1-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s1u/2022_ite1015_2022090537/6-1-3/build

# Include any dependencies generated for this target.
include CMakeFiles/simple_account.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simple_account.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple_account.dir/flags.make

CMakeFiles/simple_account.dir/main.cc.o: CMakeFiles/simple_account.dir/flags.make
CMakeFiles/simple_account.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s1u/2022_ite1015_2022090537/6-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple_account.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_account.dir/main.cc.o -c /home/s1u/2022_ite1015_2022090537/6-1-3/main.cc

CMakeFiles/simple_account.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_account.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1u/2022_ite1015_2022090537/6-1-3/main.cc > CMakeFiles/simple_account.dir/main.cc.i

CMakeFiles/simple_account.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_account.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1u/2022_ite1015_2022090537/6-1-3/main.cc -o CMakeFiles/simple_account.dir/main.cc.s

CMakeFiles/simple_account.dir/accounts.cc.o: CMakeFiles/simple_account.dir/flags.make
CMakeFiles/simple_account.dir/accounts.cc.o: ../accounts.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s1u/2022_ite1015_2022090537/6-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simple_account.dir/accounts.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_account.dir/accounts.cc.o -c /home/s1u/2022_ite1015_2022090537/6-1-3/accounts.cc

CMakeFiles/simple_account.dir/accounts.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_account.dir/accounts.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1u/2022_ite1015_2022090537/6-1-3/accounts.cc > CMakeFiles/simple_account.dir/accounts.cc.i

CMakeFiles/simple_account.dir/accounts.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_account.dir/accounts.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1u/2022_ite1015_2022090537/6-1-3/accounts.cc -o CMakeFiles/simple_account.dir/accounts.cc.s

# Object files for target simple_account
simple_account_OBJECTS = \
"CMakeFiles/simple_account.dir/main.cc.o" \
"CMakeFiles/simple_account.dir/accounts.cc.o"

# External object files for target simple_account
simple_account_EXTERNAL_OBJECTS =

simple_account: CMakeFiles/simple_account.dir/main.cc.o
simple_account: CMakeFiles/simple_account.dir/accounts.cc.o
simple_account: CMakeFiles/simple_account.dir/build.make
simple_account: CMakeFiles/simple_account.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s1u/2022_ite1015_2022090537/6-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simple_account"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_account.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple_account.dir/build: simple_account

.PHONY : CMakeFiles/simple_account.dir/build

CMakeFiles/simple_account.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple_account.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple_account.dir/clean

CMakeFiles/simple_account.dir/depend:
	cd /home/s1u/2022_ite1015_2022090537/6-1-3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s1u/2022_ite1015_2022090537/6-1-3 /home/s1u/2022_ite1015_2022090537/6-1-3 /home/s1u/2022_ite1015_2022090537/6-1-3/build /home/s1u/2022_ite1015_2022090537/6-1-3/build /home/s1u/2022_ite1015_2022090537/6-1-3/build/CMakeFiles/simple_account.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple_account.dir/depend

