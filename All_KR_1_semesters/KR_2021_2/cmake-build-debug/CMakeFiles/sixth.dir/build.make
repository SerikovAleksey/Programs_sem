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
CMAKE_SOURCE_DIR = C:\Programs\KR_2021_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\KR_2021_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sixth.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/sixth.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sixth.dir/flags.make

CMakeFiles/sixth.dir/sixth.cpp.obj: CMakeFiles/sixth.dir/flags.make
CMakeFiles/sixth.dir/sixth.cpp.obj: ../sixth.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR_2021_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sixth.dir/sixth.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sixth.dir\sixth.cpp.obj -c C:\Programs\KR_2021_2\sixth.cpp

CMakeFiles/sixth.dir/sixth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sixth.dir/sixth.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR_2021_2\sixth.cpp > CMakeFiles\sixth.dir\sixth.cpp.i

CMakeFiles/sixth.dir/sixth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sixth.dir/sixth.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR_2021_2\sixth.cpp -o CMakeFiles\sixth.dir\sixth.cpp.s

# Object files for target sixth
sixth_OBJECTS = \
"CMakeFiles/sixth.dir/sixth.cpp.obj"

# External object files for target sixth
sixth_EXTERNAL_OBJECTS =

sixth.exe: CMakeFiles/sixth.dir/sixth.cpp.obj
sixth.exe: CMakeFiles/sixth.dir/build.make
sixth.exe: CMakeFiles/sixth.dir/linklibs.rsp
sixth.exe: CMakeFiles/sixth.dir/objects1.rsp
sixth.exe: CMakeFiles/sixth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR_2021_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sixth.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sixth.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sixth.dir/build: sixth.exe
.PHONY : CMakeFiles/sixth.dir/build

CMakeFiles/sixth.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sixth.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sixth.dir/clean

CMakeFiles/sixth.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR_2021_2 C:\Programs\KR_2021_2 C:\Programs\KR_2021_2\cmake-build-debug C:\Programs\KR_2021_2\cmake-build-debug C:\Programs\KR_2021_2\cmake-build-debug\CMakeFiles\sixth.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sixth.dir/depend
