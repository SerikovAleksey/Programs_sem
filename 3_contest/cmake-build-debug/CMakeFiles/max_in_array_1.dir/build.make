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
include CMakeFiles/max_in_array_1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/max_in_array_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/max_in_array_1.dir/flags.make

CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.obj: CMakeFiles/max_in_array_1.dir/flags.make
CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.obj: ../max_in_array_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\3_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\max_in_array_1.dir\max_in_array_1.cpp.obj -c C:\Programs\3_contest\max_in_array_1.cpp

CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\3_contest\max_in_array_1.cpp > CMakeFiles\max_in_array_1.dir\max_in_array_1.cpp.i

CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\3_contest\max_in_array_1.cpp -o CMakeFiles\max_in_array_1.dir\max_in_array_1.cpp.s

# Object files for target max_in_array_1
max_in_array_1_OBJECTS = \
"CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.obj"

# External object files for target max_in_array_1
max_in_array_1_EXTERNAL_OBJECTS =

max_in_array_1.exe: CMakeFiles/max_in_array_1.dir/max_in_array_1.cpp.obj
max_in_array_1.exe: CMakeFiles/max_in_array_1.dir/build.make
max_in_array_1.exe: CMakeFiles/max_in_array_1.dir/linklibs.rsp
max_in_array_1.exe: CMakeFiles/max_in_array_1.dir/objects1.rsp
max_in_array_1.exe: CMakeFiles/max_in_array_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\3_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable max_in_array_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\max_in_array_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/max_in_array_1.dir/build: max_in_array_1.exe
.PHONY : CMakeFiles/max_in_array_1.dir/build

CMakeFiles/max_in_array_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\max_in_array_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/max_in_array_1.dir/clean

CMakeFiles/max_in_array_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\3_contest C:\Programs\3_contest C:\Programs\3_contest\cmake-build-debug C:\Programs\3_contest\cmake-build-debug C:\Programs\3_contest\cmake-build-debug\CMakeFiles\max_in_array_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/max_in_array_1.dir/depend

