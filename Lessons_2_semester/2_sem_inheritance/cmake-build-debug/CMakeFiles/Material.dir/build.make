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
CMAKE_SOURCE_DIR = C:\Programs\2_sem_inheritance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\2_sem_inheritance\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Material.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Material.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Material.dir/flags.make

CMakeFiles/Material.dir/Material.cpp.obj: CMakeFiles/Material.dir/flags.make
CMakeFiles/Material.dir/Material.cpp.obj: ../Material.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\2_sem_inheritance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Material.dir/Material.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Material.dir\Material.cpp.obj -c C:\Programs\2_sem_inheritance\Material.cpp

CMakeFiles/Material.dir/Material.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Material.dir/Material.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\2_sem_inheritance\Material.cpp > CMakeFiles\Material.dir\Material.cpp.i

CMakeFiles/Material.dir/Material.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Material.dir/Material.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\2_sem_inheritance\Material.cpp -o CMakeFiles\Material.dir\Material.cpp.s

# Object files for target Material
Material_OBJECTS = \
"CMakeFiles/Material.dir/Material.cpp.obj"

# External object files for target Material
Material_EXTERNAL_OBJECTS =

Material.exe: CMakeFiles/Material.dir/Material.cpp.obj
Material.exe: CMakeFiles/Material.dir/build.make
Material.exe: CMakeFiles/Material.dir/linklibs.rsp
Material.exe: CMakeFiles/Material.dir/objects1.rsp
Material.exe: CMakeFiles/Material.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\2_sem_inheritance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Material.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Material.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Material.dir/build: Material.exe
.PHONY : CMakeFiles/Material.dir/build

CMakeFiles/Material.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Material.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Material.dir/clean

CMakeFiles/Material.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\2_sem_inheritance C:\Programs\2_sem_inheritance C:\Programs\2_sem_inheritance\cmake-build-debug C:\Programs\2_sem_inheritance\cmake-build-debug C:\Programs\2_sem_inheritance\cmake-build-debug\CMakeFiles\Material.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Material.dir/depend

