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
CMAKE_SOURCE_DIR = C:\Programs\3_sem_inheritance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\3_sem_inheritance\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MyEngine.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MyEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyEngine.dir/flags.make

CMakeFiles/MyEngine.dir/MyEngine.cpp.obj: CMakeFiles/MyEngine.dir/flags.make
CMakeFiles/MyEngine.dir/MyEngine.cpp.obj: ../MyEngine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\3_sem_inheritance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyEngine.dir/MyEngine.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyEngine.dir\MyEngine.cpp.obj -c C:\Programs\3_sem_inheritance\MyEngine.cpp

CMakeFiles/MyEngine.dir/MyEngine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyEngine.dir/MyEngine.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\3_sem_inheritance\MyEngine.cpp > CMakeFiles\MyEngine.dir\MyEngine.cpp.i

CMakeFiles/MyEngine.dir/MyEngine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyEngine.dir/MyEngine.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\3_sem_inheritance\MyEngine.cpp -o CMakeFiles\MyEngine.dir\MyEngine.cpp.s

# Object files for target MyEngine
MyEngine_OBJECTS = \
"CMakeFiles/MyEngine.dir/MyEngine.cpp.obj"

# External object files for target MyEngine
MyEngine_EXTERNAL_OBJECTS =

MyEngine.exe: CMakeFiles/MyEngine.dir/MyEngine.cpp.obj
MyEngine.exe: CMakeFiles/MyEngine.dir/build.make
MyEngine.exe: CMakeFiles/MyEngine.dir/linklibs.rsp
MyEngine.exe: CMakeFiles/MyEngine.dir/objects1.rsp
MyEngine.exe: CMakeFiles/MyEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\3_sem_inheritance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyEngine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyEngine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyEngine.dir/build: MyEngine.exe
.PHONY : CMakeFiles/MyEngine.dir/build

CMakeFiles/MyEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MyEngine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MyEngine.dir/clean

CMakeFiles/MyEngine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\3_sem_inheritance C:\Programs\3_sem_inheritance C:\Programs\3_sem_inheritance\cmake-build-debug C:\Programs\3_sem_inheritance\cmake-build-debug C:\Programs\3_sem_inheritance\cmake-build-debug\CMakeFiles\MyEngine.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyEngine.dir/depend
