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
include CMakeFiles/copyreverse.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/copyreverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/copyreverse.dir/flags.make

CMakeFiles/copyreverse.dir/copyreverse.cpp.obj: CMakeFiles/copyreverse.dir/flags.make
CMakeFiles/copyreverse.dir/copyreverse.cpp.obj: ../copyreverse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/copyreverse.dir/copyreverse.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\copyreverse.dir\copyreverse.cpp.obj -c C:\Programs\KR2018_2\copyreverse.cpp

CMakeFiles/copyreverse.dir/copyreverse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/copyreverse.dir/copyreverse.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR2018_2\copyreverse.cpp > CMakeFiles\copyreverse.dir\copyreverse.cpp.i

CMakeFiles/copyreverse.dir/copyreverse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/copyreverse.dir/copyreverse.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR2018_2\copyreverse.cpp -o CMakeFiles\copyreverse.dir\copyreverse.cpp.s

# Object files for target copyreverse
copyreverse_OBJECTS = \
"CMakeFiles/copyreverse.dir/copyreverse.cpp.obj"

# External object files for target copyreverse
copyreverse_EXTERNAL_OBJECTS =

copyreverse.exe: CMakeFiles/copyreverse.dir/copyreverse.cpp.obj
copyreverse.exe: CMakeFiles/copyreverse.dir/build.make
copyreverse.exe: CMakeFiles/copyreverse.dir/linklibs.rsp
copyreverse.exe: CMakeFiles/copyreverse.dir/objects1.rsp
copyreverse.exe: CMakeFiles/copyreverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable copyreverse.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\copyreverse.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/copyreverse.dir/build: copyreverse.exe
.PHONY : CMakeFiles/copyreverse.dir/build

CMakeFiles/copyreverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\copyreverse.dir\cmake_clean.cmake
.PHONY : CMakeFiles/copyreverse.dir/clean

CMakeFiles/copyreverse.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR2018_2 C:\Programs\KR2018_2 C:\Programs\KR2018_2\cmake-build-debug C:\Programs\KR2018_2\cmake-build-debug C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles\copyreverse.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/copyreverse.dir/depend
