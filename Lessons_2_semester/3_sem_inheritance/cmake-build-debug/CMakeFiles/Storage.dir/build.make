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
include CMakeFiles/Storage.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Storage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Storage.dir/flags.make

CMakeFiles/Storage.dir/Storage.cpp.obj: CMakeFiles/Storage.dir/flags.make
CMakeFiles/Storage.dir/Storage.cpp.obj: ../Storage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\3_sem_inheritance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Storage.dir/Storage.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Storage.dir\Storage.cpp.obj -c C:\Programs\3_sem_inheritance\Storage.cpp

CMakeFiles/Storage.dir/Storage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Storage.dir/Storage.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\3_sem_inheritance\Storage.cpp > CMakeFiles\Storage.dir\Storage.cpp.i

CMakeFiles/Storage.dir/Storage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Storage.dir/Storage.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\3_sem_inheritance\Storage.cpp -o CMakeFiles\Storage.dir\Storage.cpp.s

# Object files for target Storage
Storage_OBJECTS = \
"CMakeFiles/Storage.dir/Storage.cpp.obj"

# External object files for target Storage
Storage_EXTERNAL_OBJECTS =

Storage.exe: CMakeFiles/Storage.dir/Storage.cpp.obj
Storage.exe: CMakeFiles/Storage.dir/build.make
Storage.exe: CMakeFiles/Storage.dir/linklibs.rsp
Storage.exe: CMakeFiles/Storage.dir/objects1.rsp
Storage.exe: CMakeFiles/Storage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\3_sem_inheritance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Storage.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Storage.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Storage.dir/build: Storage.exe
.PHONY : CMakeFiles/Storage.dir/build

CMakeFiles/Storage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Storage.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Storage.dir/clean

CMakeFiles/Storage.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\3_sem_inheritance C:\Programs\3_sem_inheritance C:\Programs\3_sem_inheritance\cmake-build-debug C:\Programs\3_sem_inheritance\cmake-build-debug C:\Programs\3_sem_inheritance\cmake-build-debug\CMakeFiles\Storage.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Storage.dir/depend

