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
include CMakeFiles/06_hadgit.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/06_hadgit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/06_hadgit.dir/flags.make

CMakeFiles/06_hadgit.dir/06_hadgit.cpp.obj: CMakeFiles/06_hadgit.dir/flags.make
CMakeFiles/06_hadgit.dir/06_hadgit.cpp.obj: ../06_hadgit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR2020\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/06_hadgit.dir/06_hadgit.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\06_hadgit.dir\06_hadgit.cpp.obj -c C:\Programs\KR2020\06_hadgit.cpp

CMakeFiles/06_hadgit.dir/06_hadgit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/06_hadgit.dir/06_hadgit.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR2020\06_hadgit.cpp > CMakeFiles\06_hadgit.dir\06_hadgit.cpp.i

CMakeFiles/06_hadgit.dir/06_hadgit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/06_hadgit.dir/06_hadgit.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR2020\06_hadgit.cpp -o CMakeFiles\06_hadgit.dir\06_hadgit.cpp.s

# Object files for target 06_hadgit
06_hadgit_OBJECTS = \
"CMakeFiles/06_hadgit.dir/06_hadgit.cpp.obj"

# External object files for target 06_hadgit
06_hadgit_EXTERNAL_OBJECTS =

06_hadgit.exe: CMakeFiles/06_hadgit.dir/06_hadgit.cpp.obj
06_hadgit.exe: CMakeFiles/06_hadgit.dir/build.make
06_hadgit.exe: CMakeFiles/06_hadgit.dir/linklibs.rsp
06_hadgit.exe: CMakeFiles/06_hadgit.dir/objects1.rsp
06_hadgit.exe: CMakeFiles/06_hadgit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR2020\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 06_hadgit.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\06_hadgit.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/06_hadgit.dir/build: 06_hadgit.exe
.PHONY : CMakeFiles/06_hadgit.dir/build

CMakeFiles/06_hadgit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\06_hadgit.dir\cmake_clean.cmake
.PHONY : CMakeFiles/06_hadgit.dir/clean

CMakeFiles/06_hadgit.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR2020 C:\Programs\KR2020 C:\Programs\KR2020\cmake-build-debug C:\Programs\KR2020\cmake-build-debug C:\Programs\KR2020\cmake-build-debug\CMakeFiles\06_hadgit.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/06_hadgit.dir/depend

