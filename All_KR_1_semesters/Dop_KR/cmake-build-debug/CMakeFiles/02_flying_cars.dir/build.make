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
CMAKE_SOURCE_DIR = C:\Programs\Dop_KR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\Dop_KR\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/02_flying_cars.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/02_flying_cars.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/02_flying_cars.dir/flags.make

CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.obj: CMakeFiles/02_flying_cars.dir/flags.make
CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.obj: ../02_flying_cars.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\Dop_KR\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\02_flying_cars.dir\02_flying_cars.cpp.obj -c C:\Programs\Dop_KR\02_flying_cars.cpp

CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\Dop_KR\02_flying_cars.cpp > CMakeFiles\02_flying_cars.dir\02_flying_cars.cpp.i

CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\Dop_KR\02_flying_cars.cpp -o CMakeFiles\02_flying_cars.dir\02_flying_cars.cpp.s

# Object files for target 02_flying_cars
02_flying_cars_OBJECTS = \
"CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.obj"

# External object files for target 02_flying_cars
02_flying_cars_EXTERNAL_OBJECTS =

02_flying_cars.exe: CMakeFiles/02_flying_cars.dir/02_flying_cars.cpp.obj
02_flying_cars.exe: CMakeFiles/02_flying_cars.dir/build.make
02_flying_cars.exe: CMakeFiles/02_flying_cars.dir/linklibs.rsp
02_flying_cars.exe: CMakeFiles/02_flying_cars.dir/objects1.rsp
02_flying_cars.exe: CMakeFiles/02_flying_cars.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\Dop_KR\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 02_flying_cars.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\02_flying_cars.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/02_flying_cars.dir/build: 02_flying_cars.exe
.PHONY : CMakeFiles/02_flying_cars.dir/build

CMakeFiles/02_flying_cars.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\02_flying_cars.dir\cmake_clean.cmake
.PHONY : CMakeFiles/02_flying_cars.dir/clean

CMakeFiles/02_flying_cars.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\Dop_KR C:\Programs\Dop_KR C:\Programs\Dop_KR\cmake-build-debug C:\Programs\Dop_KR\cmake-build-debug C:\Programs\Dop_KR\cmake-build-debug\CMakeFiles\02_flying_cars.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/02_flying_cars.dir/depend
