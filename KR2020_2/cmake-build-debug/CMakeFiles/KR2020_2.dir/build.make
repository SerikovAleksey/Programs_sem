# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Programs\KR2020_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programs\KR2020_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/KR2020_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/KR2020_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/KR2020_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KR2020_2.dir/flags.make

CMakeFiles/KR2020_2.dir/main.cpp.obj: CMakeFiles/KR2020_2.dir/flags.make
CMakeFiles/KR2020_2.dir/main.cpp.obj: ../main.cpp
CMakeFiles/KR2020_2.dir/main.cpp.obj: CMakeFiles/KR2020_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programs\KR2020_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KR2020_2.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/KR2020_2.dir/main.cpp.obj -MF CMakeFiles\KR2020_2.dir\main.cpp.obj.d -o CMakeFiles\KR2020_2.dir\main.cpp.obj -c C:\Programs\KR2020_2\main.cpp

CMakeFiles/KR2020_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KR2020_2.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programs\KR2020_2\main.cpp > CMakeFiles\KR2020_2.dir\main.cpp.i

CMakeFiles/KR2020_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KR2020_2.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programs\KR2020_2\main.cpp -o CMakeFiles\KR2020_2.dir\main.cpp.s

# Object files for target KR2020_2
KR2020_2_OBJECTS = \
"CMakeFiles/KR2020_2.dir/main.cpp.obj"

# External object files for target KR2020_2
KR2020_2_EXTERNAL_OBJECTS =

KR2020_2.exe: CMakeFiles/KR2020_2.dir/main.cpp.obj
KR2020_2.exe: CMakeFiles/KR2020_2.dir/build.make
KR2020_2.exe: CMakeFiles/KR2020_2.dir/linklibs.rsp
KR2020_2.exe: CMakeFiles/KR2020_2.dir/objects1.rsp
KR2020_2.exe: CMakeFiles/KR2020_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programs\KR2020_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable KR2020_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\KR2020_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KR2020_2.dir/build: KR2020_2.exe
.PHONY : CMakeFiles/KR2020_2.dir/build

CMakeFiles/KR2020_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\KR2020_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/KR2020_2.dir/clean

CMakeFiles/KR2020_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programs\KR2020_2 C:\Programs\KR2020_2 C:\Programs\KR2020_2\cmake-build-debug C:\Programs\KR2020_2\cmake-build-debug C:\Programs\KR2020_2\cmake-build-debug\CMakeFiles\KR2020_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KR2020_2.dir/depend

