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
include CMakeFiles/transpose.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/transpose.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/transpose.dir/flags.make

CMakeFiles/transpose.dir/transpose.cpp.obj: CMakeFiles/transpose.dir/flags.make
CMakeFiles/transpose.dir/transpose.cpp.obj: ../transpose.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\7_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/transpose.dir/transpose.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\transpose.dir\transpose.cpp.obj -c C:\Programs\7_contest\transpose.cpp

CMakeFiles/transpose.dir/transpose.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/transpose.dir/transpose.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\7_contest\transpose.cpp > CMakeFiles\transpose.dir\transpose.cpp.i

CMakeFiles/transpose.dir/transpose.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/transpose.dir/transpose.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\7_contest\transpose.cpp -o CMakeFiles\transpose.dir\transpose.cpp.s

# Object files for target transpose
transpose_OBJECTS = \
"CMakeFiles/transpose.dir/transpose.cpp.obj"

# External object files for target transpose
transpose_EXTERNAL_OBJECTS =

transpose.exe: CMakeFiles/transpose.dir/transpose.cpp.obj
transpose.exe: CMakeFiles/transpose.dir/build.make
transpose.exe: CMakeFiles/transpose.dir/linklibs.rsp
transpose.exe: CMakeFiles/transpose.dir/objects1.rsp
transpose.exe: CMakeFiles/transpose.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\7_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable transpose.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\transpose.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/transpose.dir/build: transpose.exe
.PHONY : CMakeFiles/transpose.dir/build

CMakeFiles/transpose.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\transpose.dir\cmake_clean.cmake
.PHONY : CMakeFiles/transpose.dir/clean

CMakeFiles/transpose.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\7_contest C:\Programs\7_contest C:\Programs\7_contest\cmake-build-debug C:\Programs\7_contest\cmake-build-debug C:\Programs\7_contest\cmake-build-debug\CMakeFiles\transpose.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/transpose.dir/depend

