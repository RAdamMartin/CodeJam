# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/adam/Repos/CodeJam/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adam/Repos/CodeJam/trunk/build

# Include any dependencies generated for this target.
include gflags/CMakeFiles/gflags_static.dir/depend.make

# Include the progress variables for this target.
include gflags/CMakeFiles/gflags_static.dir/progress.make

# Include the compile flags for this target's objects.
include gflags/CMakeFiles/gflags_static.dir/flags.make

gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o: gflags/CMakeFiles/gflags_static.dir/flags.make
gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o: ../gflags/src/gflags.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adam/Repos/CodeJam/trunk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gflags_static.dir/src/gflags.cc.o -c /home/adam/Repos/CodeJam/trunk/gflags/src/gflags.cc

gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gflags_static.dir/src/gflags.cc.i"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adam/Repos/CodeJam/trunk/gflags/src/gflags.cc > CMakeFiles/gflags_static.dir/src/gflags.cc.i

gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gflags_static.dir/src/gflags.cc.s"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adam/Repos/CodeJam/trunk/gflags/src/gflags.cc -o CMakeFiles/gflags_static.dir/src/gflags.cc.s

gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.requires:

.PHONY : gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.requires

gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.provides: gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.requires
	$(MAKE) -f gflags/CMakeFiles/gflags_static.dir/build.make gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.provides.build
.PHONY : gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.provides

gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.provides.build: gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o


gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o: gflags/CMakeFiles/gflags_static.dir/flags.make
gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o: ../gflags/src/gflags_reporting.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adam/Repos/CodeJam/trunk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o -c /home/adam/Repos/CodeJam/trunk/gflags/src/gflags_reporting.cc

gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.i"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adam/Repos/CodeJam/trunk/gflags/src/gflags_reporting.cc > CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.i

gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.s"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adam/Repos/CodeJam/trunk/gflags/src/gflags_reporting.cc -o CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.s

gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.requires:

.PHONY : gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.requires

gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.provides: gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.requires
	$(MAKE) -f gflags/CMakeFiles/gflags_static.dir/build.make gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.provides.build
.PHONY : gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.provides

gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.provides.build: gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o


gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o: gflags/CMakeFiles/gflags_static.dir/flags.make
gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o: ../gflags/src/gflags_completions.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adam/Repos/CodeJam/trunk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o -c /home/adam/Repos/CodeJam/trunk/gflags/src/gflags_completions.cc

gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gflags_static.dir/src/gflags_completions.cc.i"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adam/Repos/CodeJam/trunk/gflags/src/gflags_completions.cc > CMakeFiles/gflags_static.dir/src/gflags_completions.cc.i

gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gflags_static.dir/src/gflags_completions.cc.s"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adam/Repos/CodeJam/trunk/gflags/src/gflags_completions.cc -o CMakeFiles/gflags_static.dir/src/gflags_completions.cc.s

gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.requires:

.PHONY : gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.requires

gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.provides: gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.requires
	$(MAKE) -f gflags/CMakeFiles/gflags_static.dir/build.make gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.provides.build
.PHONY : gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.provides

gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.provides.build: gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o


# Object files for target gflags_static
gflags_static_OBJECTS = \
"CMakeFiles/gflags_static.dir/src/gflags.cc.o" \
"CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o" \
"CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o"

# External object files for target gflags_static
gflags_static_EXTERNAL_OBJECTS =

gflags/libgflags.a: gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o
gflags/libgflags.a: gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o
gflags/libgflags.a: gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o
gflags/libgflags.a: gflags/CMakeFiles/gflags_static.dir/build.make
gflags/libgflags.a: gflags/CMakeFiles/gflags_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adam/Repos/CodeJam/trunk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libgflags.a"
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && $(CMAKE_COMMAND) -P CMakeFiles/gflags_static.dir/cmake_clean_target.cmake
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gflags_static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gflags/CMakeFiles/gflags_static.dir/build: gflags/libgflags.a

.PHONY : gflags/CMakeFiles/gflags_static.dir/build

gflags/CMakeFiles/gflags_static.dir/requires: gflags/CMakeFiles/gflags_static.dir/src/gflags.cc.o.requires
gflags/CMakeFiles/gflags_static.dir/requires: gflags/CMakeFiles/gflags_static.dir/src/gflags_reporting.cc.o.requires
gflags/CMakeFiles/gflags_static.dir/requires: gflags/CMakeFiles/gflags_static.dir/src/gflags_completions.cc.o.requires

.PHONY : gflags/CMakeFiles/gflags_static.dir/requires

gflags/CMakeFiles/gflags_static.dir/clean:
	cd /home/adam/Repos/CodeJam/trunk/build/gflags && $(CMAKE_COMMAND) -P CMakeFiles/gflags_static.dir/cmake_clean.cmake
.PHONY : gflags/CMakeFiles/gflags_static.dir/clean

gflags/CMakeFiles/gflags_static.dir/depend:
	cd /home/adam/Repos/CodeJam/trunk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adam/Repos/CodeJam/trunk /home/adam/Repos/CodeJam/trunk/gflags /home/adam/Repos/CodeJam/trunk/build /home/adam/Repos/CodeJam/trunk/build/gflags /home/adam/Repos/CodeJam/trunk/build/gflags/CMakeFiles/gflags_static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gflags/CMakeFiles/gflags_static.dir/depend
