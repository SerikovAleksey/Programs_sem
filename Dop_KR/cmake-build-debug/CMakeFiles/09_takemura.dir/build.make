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
include CMakeFiles/09_takemura.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/09_takemura.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/09_takemura.dir/flags.make

CMakeFiles/09_takemura.dir/09_takemura.cpp.obj: CMakeFiles/09_takemura.dir/flags.make
CMakeFiles/09_takemura.dir/09_takemura.cpp.obj: ../09_takemura.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\Dop_KR\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/09_takemura.dir/09_takemura.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\09_takemura.dir\09_takemura.cpp.obj -c C:\Programs\Dop_KR\09_takemura.cpp

CMakeFiles/09_takemura.dir/09_takemura.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/09_takemura.dir/09_takemura.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\Dop_KR\09_takemura.cpp > CMakeFiles\09_takemura.dir\09_takemura.cpp.i

CMakeFiles/09_takemura.dir/09_takemura.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/09_takemura.dir/09_takemura.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\Dop_KR\09_takemura.cpp -o CMakeFiles\09_takemura.dir\09_takemura.cpp.s

# Object files for target 09_takemura
09_takemura_OBJECTS = \
"CMakeFiles/09_takemura.dir/09_takemura.cpp.obj"

# External object files for target 09_takemura
09_takemura_EXTERNAL_OBJECTS =

09_takemura.exe: CMakeFiles/09_takemura.dir/09_takemura.cpp.obj
09_takemura.exe: CMakeFiles/09_takemura.dir/build.make
09_takemura.exe: CMakeFiles/09_takemura.dir/linklibs.rsp
09_takemura.exe: CMakeFiles/09_takemura.dir/objects1.rsp
09_takemura.exe: CMakeFiles/09_takemura.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\Dop_KR\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 09_takemura.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\09_takemura.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/09_takemura.dir/build: 09_takemura.exe
.PHONY : CMakeFiles/09_takemura.dir/build

CMakeFiles/09_takemura.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\09_takemura.dir\cmake_clean.cmake
.PHONY : CMakeFiles/09_takemura.dir/clean

CMakeFiles/09_takemura.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\Dop_KR C:\Programs\Dop_KR C:\Programs\Dop_KR\cmake-build-debug C:\Programs\Dop_KR\cmake-build-debug C:\Programs\Dop_KR\cmake-build-debug\CMakeFiles\09_takemura.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/09_takemura.dir/depend

