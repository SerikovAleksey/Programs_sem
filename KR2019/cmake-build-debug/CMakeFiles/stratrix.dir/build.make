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
CMAKE_SOURCE_DIR = C:\Programs\KR2019

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\KR2019\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stratrix.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/stratrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stratrix.dir/flags.make

CMakeFiles/stratrix.dir/stratrix.cpp.obj: CMakeFiles/stratrix.dir/flags.make
CMakeFiles/stratrix.dir/stratrix.cpp.obj: ../stratrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR2019\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stratrix.dir/stratrix.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stratrix.dir\stratrix.cpp.obj -c C:\Programs\KR2019\stratrix.cpp

CMakeFiles/stratrix.dir/stratrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stratrix.dir/stratrix.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR2019\stratrix.cpp > CMakeFiles\stratrix.dir\stratrix.cpp.i

CMakeFiles/stratrix.dir/stratrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stratrix.dir/stratrix.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR2019\stratrix.cpp -o CMakeFiles\stratrix.dir\stratrix.cpp.s

# Object files for target stratrix
stratrix_OBJECTS = \
"CMakeFiles/stratrix.dir/stratrix.cpp.obj"

# External object files for target stratrix
stratrix_EXTERNAL_OBJECTS =

stratrix.exe: CMakeFiles/stratrix.dir/stratrix.cpp.obj
stratrix.exe: CMakeFiles/stratrix.dir/build.make
stratrix.exe: CMakeFiles/stratrix.dir/linklibs.rsp
stratrix.exe: CMakeFiles/stratrix.dir/objects1.rsp
stratrix.exe: CMakeFiles/stratrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR2019\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stratrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stratrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stratrix.dir/build: stratrix.exe
.PHONY : CMakeFiles/stratrix.dir/build

CMakeFiles/stratrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stratrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stratrix.dir/clean

CMakeFiles/stratrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR2019 C:\Programs\KR2019 C:\Programs\KR2019\cmake-build-debug C:\Programs\KR2019\cmake-build-debug C:\Programs\KR2019\cmake-build-debug\CMakeFiles\stratrix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stratrix.dir/depend

