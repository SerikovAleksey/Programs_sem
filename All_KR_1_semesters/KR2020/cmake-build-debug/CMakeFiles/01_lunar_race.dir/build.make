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
CMAKE_SOURCE_DIR = C:\Programs\KR2020

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\KR2020\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/01_lunar_race.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/01_lunar_race.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01_lunar_race.dir/flags.make

CMakeFiles/01_lunar_race.dir/02.cpp.obj: CMakeFiles/01_lunar_race.dir/flags.make
CMakeFiles/01_lunar_race.dir/02.cpp.obj: ../02.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR2020\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/01_lunar_race.dir/02.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\01_lunar_race.dir\02.cpp.obj -c C:\Programs\KR2020\02.cpp

CMakeFiles/01_lunar_race.dir/02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01_lunar_race.dir/02.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR2020\02.cpp > CMakeFiles\01_lunar_race.dir\02.cpp.i

CMakeFiles/01_lunar_race.dir/02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01_lunar_race.dir/02.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR2020\02.cpp -o CMakeFiles\01_lunar_race.dir\02.cpp.s

# Object files for target 01_lunar_race
01_lunar_race_OBJECTS = \
"CMakeFiles/01_lunar_race.dir/02.cpp.obj"

# External object files for target 01_lunar_race
01_lunar_race_EXTERNAL_OBJECTS =

01_lunar_race.exe: CMakeFiles/01_lunar_race.dir/02.cpp.obj
01_lunar_race.exe: CMakeFiles/01_lunar_race.dir/build.make
01_lunar_race.exe: CMakeFiles/01_lunar_race.dir/linklibs.rsp
01_lunar_race.exe: CMakeFiles/01_lunar_race.dir/objects1.rsp
01_lunar_race.exe: CMakeFiles/01_lunar_race.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR2020\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 01_lunar_race.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\01_lunar_race.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01_lunar_race.dir/build: 01_lunar_race.exe
.PHONY : CMakeFiles/01_lunar_race.dir/build

CMakeFiles/01_lunar_race.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\01_lunar_race.dir\cmake_clean.cmake
.PHONY : CMakeFiles/01_lunar_race.dir/clean

CMakeFiles/01_lunar_race.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR2020 C:\Programs\KR2020 C:\Programs\KR2020\cmake-build-debug C:\Programs\KR2020\cmake-build-debug C:\Programs\KR2020\cmake-build-debug\CMakeFiles\01_lunar_race.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/01_lunar_race.dir/depend
