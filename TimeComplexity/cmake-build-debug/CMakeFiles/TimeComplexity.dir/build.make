# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/chempa/bin/clion-2020.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/chempa/bin/clion-2020.3.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chempa/Desktop/Algo/TimeComplexity

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chempa/Desktop/Algo/TimeComplexity/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TimeComplexity.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TimeComplexity.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TimeComplexity.dir/flags.make

CMakeFiles/TimeComplexity.dir/main.cpp.o: CMakeFiles/TimeComplexity.dir/flags.make
CMakeFiles/TimeComplexity.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chempa/Desktop/Algo/TimeComplexity/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TimeComplexity.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimeComplexity.dir/main.cpp.o -c /home/chempa/Desktop/Algo/TimeComplexity/main.cpp

CMakeFiles/TimeComplexity.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeComplexity.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chempa/Desktop/Algo/TimeComplexity/main.cpp > CMakeFiles/TimeComplexity.dir/main.cpp.i

CMakeFiles/TimeComplexity.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeComplexity.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chempa/Desktop/Algo/TimeComplexity/main.cpp -o CMakeFiles/TimeComplexity.dir/main.cpp.s

# Object files for target TimeComplexity
TimeComplexity_OBJECTS = \
"CMakeFiles/TimeComplexity.dir/main.cpp.o"

# External object files for target TimeComplexity
TimeComplexity_EXTERNAL_OBJECTS =

TimeComplexity: CMakeFiles/TimeComplexity.dir/main.cpp.o
TimeComplexity: CMakeFiles/TimeComplexity.dir/build.make
TimeComplexity: CMakeFiles/TimeComplexity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chempa/Desktop/Algo/TimeComplexity/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TimeComplexity"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TimeComplexity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TimeComplexity.dir/build: TimeComplexity

.PHONY : CMakeFiles/TimeComplexity.dir/build

CMakeFiles/TimeComplexity.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TimeComplexity.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TimeComplexity.dir/clean

CMakeFiles/TimeComplexity.dir/depend:
	cd /home/chempa/Desktop/Algo/TimeComplexity/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chempa/Desktop/Algo/TimeComplexity /home/chempa/Desktop/Algo/TimeComplexity /home/chempa/Desktop/Algo/TimeComplexity/cmake-build-debug /home/chempa/Desktop/Algo/TimeComplexity/cmake-build-debug /home/chempa/Desktop/Algo/TimeComplexity/cmake-build-debug/CMakeFiles/TimeComplexity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TimeComplexity.dir/depend

