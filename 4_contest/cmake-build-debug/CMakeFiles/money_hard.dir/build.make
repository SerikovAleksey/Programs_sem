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
CMAKE_SOURCE_DIR = C:\Programs\4_contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\4_contest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/money_hard.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/money_hard.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/money_hard.dir/flags.make

CMakeFiles/money_hard.dir/money_hard.cpp.obj: CMakeFiles/money_hard.dir/flags.make
CMakeFiles/money_hard.dir/money_hard.cpp.obj: ../money_hard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\4_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/money_hard.dir/money_hard.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\money_hard.dir\money_hard.cpp.obj -c C:\Programs\4_contest\money_hard.cpp

CMakeFiles/money_hard.dir/money_hard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/money_hard.dir/money_hard.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\4_contest\money_hard.cpp > CMakeFiles\money_hard.dir\money_hard.cpp.i

CMakeFiles/money_hard.dir/money_hard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/money_hard.dir/money_hard.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\4_contest\money_hard.cpp -o CMakeFiles\money_hard.dir\money_hard.cpp.s

# Object files for target money_hard
money_hard_OBJECTS = \
"CMakeFiles/money_hard.dir/money_hard.cpp.obj"

# External object files for target money_hard
money_hard_EXTERNAL_OBJECTS =

money_hard.exe: CMakeFiles/money_hard.dir/money_hard.cpp.obj
money_hard.exe: CMakeFiles/money_hard.dir/build.make
money_hard.exe: CMakeFiles/money_hard.dir/linklibs.rsp
money_hard.exe: CMakeFiles/money_hard.dir/objects1.rsp
money_hard.exe: CMakeFiles/money_hard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\4_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable money_hard.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\money_hard.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/money_hard.dir/build: money_hard.exe
.PHONY : CMakeFiles/money_hard.dir/build

CMakeFiles/money_hard.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\money_hard.dir\cmake_clean.cmake
.PHONY : CMakeFiles/money_hard.dir/clean

CMakeFiles/money_hard.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\4_contest C:\Programs\4_contest C:\Programs\4_contest\cmake-build-debug C:\Programs\4_contest\cmake-build-debug C:\Programs\4_contest\cmake-build-debug\CMakeFiles\money_hard.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/money_hard.dir/depend

