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
CMAKE_SOURCE_DIR = C:\Programs\3_contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\3_contest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/transpose_matrix.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/transpose_matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/transpose_matrix.dir/flags.make

CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.obj: CMakeFiles/transpose_matrix.dir/flags.make
CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.obj: ../transpose_matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\3_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\transpose_matrix.dir\transpose_matrix.cpp.obj -c C:\Programs\3_contest\transpose_matrix.cpp

CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\3_contest\transpose_matrix.cpp > CMakeFiles\transpose_matrix.dir\transpose_matrix.cpp.i

CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\3_contest\transpose_matrix.cpp -o CMakeFiles\transpose_matrix.dir\transpose_matrix.cpp.s

# Object files for target transpose_matrix
transpose_matrix_OBJECTS = \
"CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.obj"

# External object files for target transpose_matrix
transpose_matrix_EXTERNAL_OBJECTS =

transpose_matrix.exe: CMakeFiles/transpose_matrix.dir/transpose_matrix.cpp.obj
transpose_matrix.exe: CMakeFiles/transpose_matrix.dir/build.make
transpose_matrix.exe: CMakeFiles/transpose_matrix.dir/linklibs.rsp
transpose_matrix.exe: CMakeFiles/transpose_matrix.dir/objects1.rsp
transpose_matrix.exe: CMakeFiles/transpose_matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\3_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable transpose_matrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\transpose_matrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/transpose_matrix.dir/build: transpose_matrix.exe
.PHONY : CMakeFiles/transpose_matrix.dir/build

CMakeFiles/transpose_matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\transpose_matrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/transpose_matrix.dir/clean

CMakeFiles/transpose_matrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\3_contest C:\Programs\3_contest C:\Programs\3_contest\cmake-build-debug C:\Programs\3_contest\cmake-build-debug C:\Programs\3_contest\cmake-build-debug\CMakeFiles\transpose_matrix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/transpose_matrix.dir/depend

