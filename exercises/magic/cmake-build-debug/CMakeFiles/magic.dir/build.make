# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /snap/clion/61/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/61/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ivanasen/Code/Projects/oop-homework/magic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/magic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/magic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/magic.dir/flags.make

CMakeFiles/magic.dir/main.cpp.o: CMakeFiles/magic.dir/flags.make
CMakeFiles/magic.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/magic.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/magic.dir/main.cpp.o -c /home/ivanasen/Code/Projects/oop-homework/magic/main.cpp

CMakeFiles/magic.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/magic.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/magic/main.cpp > CMakeFiles/magic.dir/main.cpp.i

CMakeFiles/magic.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/magic.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/magic/main.cpp -o CMakeFiles/magic.dir/main.cpp.s

CMakeFiles/magic.dir/Player.cc.o: CMakeFiles/magic.dir/flags.make
CMakeFiles/magic.dir/Player.cc.o: ../Player.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/magic.dir/Player.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/magic.dir/Player.cc.o -c /home/ivanasen/Code/Projects/oop-homework/magic/Player.cc

CMakeFiles/magic.dir/Player.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/magic.dir/Player.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/magic/Player.cc > CMakeFiles/magic.dir/Player.cc.i

CMakeFiles/magic.dir/Player.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/magic.dir/Player.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/magic/Player.cc -o CMakeFiles/magic.dir/Player.cc.s

CMakeFiles/magic.dir/Card.cc.o: CMakeFiles/magic.dir/flags.make
CMakeFiles/magic.dir/Card.cc.o: ../Card.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/magic.dir/Card.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/magic.dir/Card.cc.o -c /home/ivanasen/Code/Projects/oop-homework/magic/Card.cc

CMakeFiles/magic.dir/Card.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/magic.dir/Card.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/magic/Card.cc > CMakeFiles/magic.dir/Card.cc.i

CMakeFiles/magic.dir/Card.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/magic.dir/Card.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/magic/Card.cc -o CMakeFiles/magic.dir/Card.cc.s

CMakeFiles/magic.dir/Deck.cc.o: CMakeFiles/magic.dir/flags.make
CMakeFiles/magic.dir/Deck.cc.o: ../Deck.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/magic.dir/Deck.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/magic.dir/Deck.cc.o -c /home/ivanasen/Code/Projects/oop-homework/magic/Deck.cc

CMakeFiles/magic.dir/Deck.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/magic.dir/Deck.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/magic/Deck.cc > CMakeFiles/magic.dir/Deck.cc.i

CMakeFiles/magic.dir/Deck.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/magic.dir/Deck.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/magic/Deck.cc -o CMakeFiles/magic.dir/Deck.cc.s

CMakeFiles/magic.dir/Game.cc.o: CMakeFiles/magic.dir/flags.make
CMakeFiles/magic.dir/Game.cc.o: ../Game.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/magic.dir/Game.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/magic.dir/Game.cc.o -c /home/ivanasen/Code/Projects/oop-homework/magic/Game.cc

CMakeFiles/magic.dir/Game.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/magic.dir/Game.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivanasen/Code/Projects/oop-homework/magic/Game.cc > CMakeFiles/magic.dir/Game.cc.i

CMakeFiles/magic.dir/Game.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/magic.dir/Game.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivanasen/Code/Projects/oop-homework/magic/Game.cc -o CMakeFiles/magic.dir/Game.cc.s

# Object files for target magic
magic_OBJECTS = \
"CMakeFiles/magic.dir/main.cpp.o" \
"CMakeFiles/magic.dir/Player.cc.o" \
"CMakeFiles/magic.dir/Card.cc.o" \
"CMakeFiles/magic.dir/Deck.cc.o" \
"CMakeFiles/magic.dir/Game.cc.o"

# External object files for target magic
magic_EXTERNAL_OBJECTS =

magic: CMakeFiles/magic.dir/main.cpp.o
magic: CMakeFiles/magic.dir/Player.cc.o
magic: CMakeFiles/magic.dir/Card.cc.o
magic: CMakeFiles/magic.dir/Deck.cc.o
magic: CMakeFiles/magic.dir/Game.cc.o
magic: CMakeFiles/magic.dir/build.make
magic: CMakeFiles/magic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable magic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/magic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/magic.dir/build: magic

.PHONY : CMakeFiles/magic.dir/build

CMakeFiles/magic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/magic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/magic.dir/clean

CMakeFiles/magic.dir/depend:
	cd /home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivanasen/Code/Projects/oop-homework/magic /home/ivanasen/Code/Projects/oop-homework/magic /home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug /home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug /home/ivanasen/Code/Projects/oop-homework/magic/cmake-build-debug/CMakeFiles/magic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/magic.dir/depend

