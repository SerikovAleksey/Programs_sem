# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Programs\KR2018_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\KR2018_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stepback.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/stepback.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stepback.dir/flags.make

CMakeFiles/stepback.dir/stepback.cpp.obj: CMakeFiles/stepback.dir/flags.make
CMakeFiles/stepback.dir/stepback.cpp.obj: ../stepback.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stepback.dir/stepback.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stepback.dir\stepback.cpp.obj -c C:\Programs\KR2018_2\stepback.cpp

CMakeFiles/stepback.dir/stepback.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stepback.dir/stepback.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR2018_2\stepback.cpp > CMakeFiles\stepback.dir\stepback.cpp.i

CMakeFiles/stepback.dir/stepback.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stepback.dir/stepback.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR2018_2\stepback.cpp -o CMakeFiles\stepback.dir\stepback.cpp.s

# Object files for target stepback
stepback_OBJECTS = \
"CMakeFiles/stepback.dir/stepback.cpp.obj"

# External object files for target stepback
stepback_EXTERNAL_OBJECTS =

stepback.exe: CMakeFiles/stepback.dir/stepback.cpp.obj
stepback.exe: CMakeFiles/stepback.dir/build.make
stepback.exe: CMakeFiles/stepback.dir/linklibs.rsp
stepback.exe: CMakeFiles/stepback.dir/objects1.rsp
stepback.exe: CMakeFiles/stepback.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stepback.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stepback.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stepback.dir/build: stepback.exe
.PHONY : CMakeFiles/stepback.dir/build

CMakeFiles/stepback.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stepback.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stepback.dir/clean

CMakeFiles/stepback.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR2018_2 C:\Programs\KR2018_2 C:\Programs\KR2018_2\cmake-build-debug C:\Programs\KR2018_2\cmake-build-debug C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles\stepback.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stepback.dir/depend

