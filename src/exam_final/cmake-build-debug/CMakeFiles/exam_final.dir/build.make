# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /snap/clion/73/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/73/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ivanasen/Code/Projects/oop-homework/src/exam_final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exam_final.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exam_final.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exam_final.dir/flags.make

CMakeFiles/exam_final.dir/main.cpp.o: CMakeFiles/exam_final.dir/flags.make
CMakeFiles/exam_final.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exam_final.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam_final.dir/main.cpp.o -c /home/ivanasen/Code/Projects/oop-homework/src/exam_final/main.cpp

CMakeFiles/exam_final.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam_final.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/src/exam_final/main.cpp > CMakeFiles/exam_final.dir/main.cpp.i

CMakeFiles/exam_final.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam_final.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/src/exam_final/main.cpp -o CMakeFiles/exam_final.dir/main.cpp.s

CMakeFiles/exam_final.dir/Stream.cpp.o: CMakeFiles/exam_final.dir/flags.make
CMakeFiles/exam_final.dir/Stream.cpp.o: ../Stream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exam_final.dir/Stream.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam_final.dir/Stream.cpp.o -c /home/ivanasen/Code/Projects/oop-homework/src/exam_final/Stream.cpp

CMakeFiles/exam_final.dir/Stream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam_final.dir/Stream.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/src/exam_final/Stream.cpp > CMakeFiles/exam_final.dir/Stream.cpp.i

CMakeFiles/exam_final.dir/Stream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam_final.dir/Stream.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/src/exam_final/Stream.cpp -o CMakeFiles/exam_final.dir/Stream.cpp.s

CMakeFiles/exam_final.dir/StringStream.cpp.o: CMakeFiles/exam_final.dir/flags.make
CMakeFiles/exam_final.dir/StringStream.cpp.o: ../StringStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/exam_final.dir/StringStream.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam_final.dir/StringStream.cpp.o -c /home/ivanasen/Code/Projects/oop-homework/src/exam_final/StringStream.cpp

CMakeFiles/exam_final.dir/StringStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam_final.dir/StringStream.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/src/exam_final/StringStream.cpp > CMakeFiles/exam_final.dir/StringStream.cpp.i

CMakeFiles/exam_final.dir/StringStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam_final.dir/StringStream.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/src/exam_final/StringStream.cpp -o CMakeFiles/exam_final.dir/StringStream.cpp.s

CMakeFiles/exam_final.dir/MergeStream.cpp.o: CMakeFiles/exam_final.dir/flags.make
CMakeFiles/exam_final.dir/MergeStream.cpp.o: ../MergeStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/exam_final.dir/MergeStream.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam_final.dir/MergeStream.cpp.o -c /home/ivanasen/Code/Projects/oop-homework/src/exam_final/MergeStream.cpp

CMakeFiles/exam_final.dir/MergeStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam_final.dir/MergeStream.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/src/exam_final/MergeStream.cpp > CMakeFiles/exam_final.dir/MergeStream.cpp.i

CMakeFiles/exam_final.dir/MergeStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam_final.dir/MergeStream.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/src/exam_final/MergeStream.cpp -o CMakeFiles/exam_final.dir/MergeStream.cpp.s

# Object files for target exam_final
exam_final_OBJECTS = \
"CMakeFiles/exam_final.dir/main.cpp.o" \
"CMakeFiles/exam_final.dir/Stream.cpp.o" \
"CMakeFiles/exam_final.dir/StringStream.cpp.o" \
"CMakeFiles/exam_final.dir/MergeStream.cpp.o"

# External object files for target exam_final
exam_final_EXTERNAL_OBJECTS =

exam_final: CMakeFiles/exam_final.dir/main.cpp.o
exam_final: CMakeFiles/exam_final.dir/Stream.cpp.o
exam_final: CMakeFiles/exam_final.dir/StringStream.cpp.o
exam_final: CMakeFiles/exam_final.dir/MergeStream.cpp.o
exam_final: CMakeFiles/exam_final.dir/build.make
exam_final: CMakeFiles/exam_final.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable exam_final"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exam_final.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exam_final.dir/build: exam_final

.PHONY : CMakeFiles/exam_final.dir/build

CMakeFiles/exam_final.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exam_final.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exam_final.dir/clean

CMakeFiles/exam_final.dir/depend:
	cd /home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivanasen/Code/Projects/oop-homework/src/exam_final /home/ivanasen/Code/Projects/oop-homework/src/exam_final /home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug /home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug /home/ivanasen/Code/Projects/oop-homework/src/exam_final/cmake-build-debug/CMakeFiles/exam_final.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exam_final.dir/depend

