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
CMAKE_SOURCE_DIR = C:\Programs\1_contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\1_contest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/amount_chisel.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/amount_chisel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/amount_chisel.dir/flags.make

CMakeFiles/amount_chisel.dir/amount_chisel.cpp.obj: CMakeFiles/amount_chisel.dir/flags.make
CMakeFiles/amount_chisel.dir/amount_chisel.cpp.obj: ../amount_chisel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\1_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/amount_chisel.dir/amount_chisel.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\amount_chisel.dir\amount_chisel.cpp.obj -c C:\Programs\1_contest\amount_chisel.cpp

CMakeFiles/amount_chisel.dir/amount_chisel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/amount_chisel.dir/amount_chisel.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\1_contest\amount_chisel.cpp > CMakeFiles\amount_chisel.dir\amount_chisel.cpp.i

CMakeFiles/amount_chisel.dir/amount_chisel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/amount_chisel.dir/amount_chisel.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\1_contest\amount_chisel.cpp -o CMakeFiles\amount_chisel.dir\amount_chisel.cpp.s

# Object files for target amount_chisel
amount_chisel_OBJECTS = \
"CMakeFiles/amount_chisel.dir/amount_chisel.cpp.obj"

# External object files for target amount_chisel
amount_chisel_EXTERNAL_OBJECTS =

amount_chisel.exe: CMakeFiles/amount_chisel.dir/amount_chisel.cpp.obj
amount_chisel.exe: CMakeFiles/amount_chisel.dir/build.make
amount_chisel.exe: CMakeFiles/amount_chisel.dir/linklibs.rsp
amount_chisel.exe: CMakeFiles/amount_chisel.dir/objects1.rsp
amount_chisel.exe: CMakeFiles/amount_chisel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\1_contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable amount_chisel.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\amount_chisel.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/amount_chisel.dir/build: amount_chisel.exe
.PHONY : CMakeFiles/amount_chisel.dir/build

CMakeFiles/amount_chisel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\amount_chisel.dir\cmake_clean.cmake
.PHONY : CMakeFiles/amount_chisel.dir/clean

CMakeFiles/amount_chisel.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\1_contest C:\Programs\1_contest C:\Programs\1_contest\cmake-build-debug C:\Programs\1_contest\cmake-build-debug C:\Programs\1_contest\cmake-build-debug\CMakeFiles\amount_chisel.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/amount_chisel.dir/depend
