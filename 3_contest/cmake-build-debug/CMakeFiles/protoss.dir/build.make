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
include CMakeFiles/protoss.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/protoss.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/protoss.dir/flags.make

CMakeFiles/protoss.dir/protoss.cpp.obj: CMakeFiles/protoss.dir/flags.make
CMakeFiles/protoss.dir/protoss.cpp.obj: ../protoss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\3_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/protoss.dir/protoss.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\protoss.dir\protoss.cpp.obj -c C:\Programs\3_contest\protoss.cpp

CMakeFiles/protoss.dir/protoss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protoss.dir/protoss.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\3_contest\protoss.cpp > CMakeFiles\protoss.dir\protoss.cpp.i

CMakeFiles/protoss.dir/protoss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protoss.dir/protoss.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\3_contest\protoss.cpp -o CMakeFiles\protoss.dir\protoss.cpp.s

# Object files for target protoss
protoss_OBJECTS = \
"CMakeFiles/protoss.dir/protoss.cpp.obj"

# External object files for target protoss
protoss_EXTERNAL_OBJECTS =

protoss.exe: CMakeFiles/protoss.dir/protoss.cpp.obj
protoss.exe: CMakeFiles/protoss.dir/build.make
protoss.exe: CMakeFiles/protoss.dir/linklibs.rsp
protoss.exe: CMakeFiles/protoss.dir/objects1.rsp
protoss.exe: CMakeFiles/protoss.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\3_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable protoss.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\protoss.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/protoss.dir/build: protoss.exe
.PHONY : CMakeFiles/protoss.dir/build

CMakeFiles/protoss.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\protoss.dir\cmake_clean.cmake
.PHONY : CMakeFiles/protoss.dir/clean

CMakeFiles/protoss.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\3_contest C:\Programs\3_contest C:\Programs\3_contest\cmake-build-debug C:\Programs\3_contest\cmake-build-debug C:\Programs\3_contest\cmake-build-debug\CMakeFiles\protoss.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/protoss.dir/depend

