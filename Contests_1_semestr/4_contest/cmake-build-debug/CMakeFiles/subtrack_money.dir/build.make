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
include CMakeFiles/subtrack_money.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/subtrack_money.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/subtrack_money.dir/flags.make

CMakeFiles/subtrack_money.dir/subtrack_money.cpp.obj: CMakeFiles/subtrack_money.dir/flags.make
CMakeFiles/subtrack_money.dir/subtrack_money.cpp.obj: ../subtrack_money.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\4_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/subtrack_money.dir/subtrack_money.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\subtrack_money.dir\subtrack_money.cpp.obj -c C:\Programs\4_contest\subtrack_money.cpp

CMakeFiles/subtrack_money.dir/subtrack_money.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/subtrack_money.dir/subtrack_money.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\4_contest\subtrack_money.cpp > CMakeFiles\subtrack_money.dir\subtrack_money.cpp.i

CMakeFiles/subtrack_money.dir/subtrack_money.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/subtrack_money.dir/subtrack_money.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\4_contest\subtrack_money.cpp -o CMakeFiles\subtrack_money.dir\subtrack_money.cpp.s

# Object files for target subtrack_money
subtrack_money_OBJECTS = \
"CMakeFiles/subtrack_money.dir/subtrack_money.cpp.obj"

# External object files for target subtrack_money
subtrack_money_EXTERNAL_OBJECTS =

subtrack_money.exe: CMakeFiles/subtrack_money.dir/subtrack_money.cpp.obj
subtrack_money.exe: CMakeFiles/subtrack_money.dir/build.make
subtrack_money.exe: CMakeFiles/subtrack_money.dir/linklibs.rsp
subtrack_money.exe: CMakeFiles/subtrack_money.dir/objects1.rsp
subtrack_money.exe: CMakeFiles/subtrack_money.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\4_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable subtrack_money.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\subtrack_money.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/subtrack_money.dir/build: subtrack_money.exe
.PHONY : CMakeFiles/subtrack_money.dir/build

CMakeFiles/subtrack_money.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\subtrack_money.dir\cmake_clean.cmake
.PHONY : CMakeFiles/subtrack_money.dir/clean

CMakeFiles/subtrack_money.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\4_contest C:\Programs\4_contest C:\Programs\4_contest\cmake-build-debug C:\Programs\4_contest\cmake-build-debug C:\Programs\4_contest\cmake-build-debug\CMakeFiles\subtrack_money.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/subtrack_money.dir/depend
