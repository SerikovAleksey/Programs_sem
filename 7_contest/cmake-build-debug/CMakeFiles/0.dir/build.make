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
CMAKE_SOURCE_DIR = C:\Programs\7_contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\7_contest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0.dir/flags.make

CMakeFiles/0.dir/0.cpp.obj: CMakeFiles/0.dir/flags.make
CMakeFiles/0.dir/0.cpp.obj: ../0.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\7_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0.dir/0.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0.dir\0.cpp.obj -c C:\Programs\7_contest\0.cpp

CMakeFiles/0.dir/0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0.dir/0.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\7_contest\0.cpp > CMakeFiles\0.dir\0.cpp.i

CMakeFiles/0.dir/0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0.dir/0.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\7_contest\0.cpp -o CMakeFiles\0.dir\0.cpp.s

# Object files for target 0
0_OBJECTS = \
"CMakeFiles/0.dir/0.cpp.obj"

# External object files for target 0
0_EXTERNAL_OBJECTS =

0.exe: CMakeFiles/0.dir/0.cpp.obj
0.exe: CMakeFiles/0.dir/build.make
0.exe: CMakeFiles/0.dir/linklibs.rsp
0.exe: CMakeFiles/0.dir/objects1.rsp
0.exe: CMakeFiles/0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\7_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0.dir/build: 0.exe
.PHONY : CMakeFiles/0.dir/build

CMakeFiles/0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0.dir/clean

CMakeFiles/0.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\7_contest C:\Programs\7_contest C:\Programs\7_contest\cmake-build-debug C:\Programs\7_contest\cmake-build-debug C:\Programs\7_contest\cmake-build-debug\CMakeFiles\0.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0.dir/depend

