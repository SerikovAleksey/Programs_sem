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
include CMakeFiles/sensor.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/sensor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sensor.dir/flags.make

CMakeFiles/sensor.dir/sensor.cpp.obj: CMakeFiles/sensor.dir/flags.make
CMakeFiles/sensor.dir/sensor.cpp.obj: ../sensor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sensor.dir/sensor.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sensor.dir\sensor.cpp.obj -c C:\Programs\KR2018_2\sensor.cpp

CMakeFiles/sensor.dir/sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sensor.dir/sensor.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR2018_2\sensor.cpp > CMakeFiles\sensor.dir\sensor.cpp.i

CMakeFiles/sensor.dir/sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sensor.dir/sensor.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR2018_2\sensor.cpp -o CMakeFiles\sensor.dir\sensor.cpp.s

# Object files for target sensor
sensor_OBJECTS = \
"CMakeFiles/sensor.dir/sensor.cpp.obj"

# External object files for target sensor
sensor_EXTERNAL_OBJECTS =

sensor.exe: CMakeFiles/sensor.dir/sensor.cpp.obj
sensor.exe: CMakeFiles/sensor.dir/build.make
sensor.exe: CMakeFiles/sensor.dir/linklibs.rsp
sensor.exe: CMakeFiles/sensor.dir/objects1.rsp
sensor.exe: CMakeFiles/sensor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sensor.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sensor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sensor.dir/build: sensor.exe
.PHONY : CMakeFiles/sensor.dir/build

CMakeFiles/sensor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sensor.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sensor.dir/clean

CMakeFiles/sensor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR2018_2 C:\Programs\KR2018_2 C:\Programs\KR2018_2\cmake-build-debug C:\Programs\KR2018_2\cmake-build-debug C:\Programs\KR2018_2\cmake-build-debug\CMakeFiles\sensor.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sensor.dir/depend
