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
CMAKE_SOURCE_DIR = C:\Programs\2_contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\2_contest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sum.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sum.dir/flags.make

CMakeFiles/sum.dir/sum.cpp.obj: CMakeFiles/sum.dir/flags.make
CMakeFiles/sum.dir/sum.cpp.obj: ../sum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\2_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sum.dir/sum.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sum.dir\sum.cpp.obj -c C:\Programs\2_contest\sum.cpp

CMakeFiles/sum.dir/sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum.dir/sum.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\2_contest\sum.cpp > CMakeFiles\sum.dir\sum.cpp.i

CMakeFiles/sum.dir/sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum.dir/sum.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\2_contest\sum.cpp -o CMakeFiles\sum.dir\sum.cpp.s

# Object files for target sum
sum_OBJECTS = \
"CMakeFiles/sum.dir/sum.cpp.obj"

# External object files for target sum
sum_EXTERNAL_OBJECTS =

sum.exe: CMakeFiles/sum.dir/sum.cpp.obj
sum.exe: CMakeFiles/sum.dir/build.make
sum.exe: CMakeFiles/sum.dir/linklibs.rsp
sum.exe: CMakeFiles/sum.dir/objects1.rsp
sum.exe: CMakeFiles/sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\2_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sum.dir/build: sum.exe
.PHONY : CMakeFiles/sum.dir/build

CMakeFiles/sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sum.dir/clean

CMakeFiles/sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\2_contest C:\Programs\2_contest C:\Programs\2_contest\cmake-build-debug C:\Programs\2_contest\cmake-build-debug C:\Programs\2_contest\cmake-build-debug\CMakeFiles\sum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sum.dir/depend

