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
CMAKE_SOURCE_DIR = C:\Programs\1_contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\1_contest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/max_element.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/max_element.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/max_element.dir/flags.make

CMakeFiles/max_element.dir/max_element.cpp.obj: CMakeFiles/max_element.dir/flags.make
CMakeFiles/max_element.dir/max_element.cpp.obj: ../max_element.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\1_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/max_element.dir/max_element.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\max_element.dir\max_element.cpp.obj -c C:\Programs\1_contest\max_element.cpp

CMakeFiles/max_element.dir/max_element.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/max_element.dir/max_element.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\1_contest\max_element.cpp > CMakeFiles\max_element.dir\max_element.cpp.i

CMakeFiles/max_element.dir/max_element.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/max_element.dir/max_element.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\1_contest\max_element.cpp -o CMakeFiles\max_element.dir\max_element.cpp.s

# Object files for target max_element
max_element_OBJECTS = \
"CMakeFiles/max_element.dir/max_element.cpp.obj"

# External object files for target max_element
max_element_EXTERNAL_OBJECTS =

max_element.exe: CMakeFiles/max_element.dir/max_element.cpp.obj
max_element.exe: CMakeFiles/max_element.dir/build.make
max_element.exe: CMakeFiles/max_element.dir/linklibs.rsp
max_element.exe: CMakeFiles/max_element.dir/objects1.rsp
max_element.exe: CMakeFiles/max_element.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\1_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable max_element.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\max_element.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/max_element.dir/build: max_element.exe
.PHONY : CMakeFiles/max_element.dir/build

CMakeFiles/max_element.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\max_element.dir\cmake_clean.cmake
.PHONY : CMakeFiles/max_element.dir/clean

CMakeFiles/max_element.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\1_contest C:\Programs\1_contest C:\Programs\1_contest\cmake-build-debug C:\Programs\1_contest\cmake-build-debug C:\Programs\1_contest\cmake-build-debug\CMakeFiles\max_element.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/max_element.dir/depend

