# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/amianadave/Documents/cpp/Lexer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/amianadave/Documents/cpp/Lexer/build

# Include any dependencies generated for this target.
include CMakeFiles/cpplox.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpplox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpplox.dir/flags.make

CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.o: CMakeFiles/cpplox.dir/flags.make
CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.o: ../src/ErrorHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/amianadave/Documents/cpp/Lexer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.o -c /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/ErrorHandler.cpp

CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/ErrorHandler.cpp > CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.i

CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/ErrorHandler.cpp -o CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.s

CMakeFiles/cpplox.dir/src/FileReader.cpp.o: CMakeFiles/cpplox.dir/flags.make
CMakeFiles/cpplox.dir/src/FileReader.cpp.o: ../src/FileReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/amianadave/Documents/cpp/Lexer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpplox.dir/src/FileReader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpplox.dir/src/FileReader.cpp.o -c /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/FileReader.cpp

CMakeFiles/cpplox.dir/src/FileReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpplox.dir/src/FileReader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/FileReader.cpp > CMakeFiles/cpplox.dir/src/FileReader.cpp.i

CMakeFiles/cpplox.dir/src/FileReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpplox.dir/src/FileReader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/FileReader.cpp -o CMakeFiles/cpplox.dir/src/FileReader.cpp.s

CMakeFiles/cpplox.dir/src/Main.cpp.o: CMakeFiles/cpplox.dir/flags.make
CMakeFiles/cpplox.dir/src/Main.cpp.o: ../src/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/amianadave/Documents/cpp/Lexer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpplox.dir/src/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpplox.dir/src/Main.cpp.o -c /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Main.cpp

CMakeFiles/cpplox.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpplox.dir/src/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Main.cpp > CMakeFiles/cpplox.dir/src/Main.cpp.i

CMakeFiles/cpplox.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpplox.dir/src/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Main.cpp -o CMakeFiles/cpplox.dir/src/Main.cpp.s

CMakeFiles/cpplox.dir/src/Scanner.cpp.o: CMakeFiles/cpplox.dir/flags.make
CMakeFiles/cpplox.dir/src/Scanner.cpp.o: ../src/Scanner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/amianadave/Documents/cpp/Lexer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cpplox.dir/src/Scanner.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpplox.dir/src/Scanner.cpp.o -c /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Scanner.cpp

CMakeFiles/cpplox.dir/src/Scanner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpplox.dir/src/Scanner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Scanner.cpp > CMakeFiles/cpplox.dir/src/Scanner.cpp.i

CMakeFiles/cpplox.dir/src/Scanner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpplox.dir/src/Scanner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Scanner.cpp -o CMakeFiles/cpplox.dir/src/Scanner.cpp.s

CMakeFiles/cpplox.dir/src/Token.cpp.o: CMakeFiles/cpplox.dir/flags.make
CMakeFiles/cpplox.dir/src/Token.cpp.o: ../src/Token.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/amianadave/Documents/cpp/Lexer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cpplox.dir/src/Token.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpplox.dir/src/Token.cpp.o -c /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Token.cpp

CMakeFiles/cpplox.dir/src/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpplox.dir/src/Token.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Token.cpp > CMakeFiles/cpplox.dir/src/Token.cpp.i

CMakeFiles/cpplox.dir/src/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpplox.dir/src/Token.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/amianadave/Documents/cpp/Lexer/src/Token.cpp -o CMakeFiles/cpplox.dir/src/Token.cpp.s

# Object files for target cpplox
cpplox_OBJECTS = \
"CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.o" \
"CMakeFiles/cpplox.dir/src/FileReader.cpp.o" \
"CMakeFiles/cpplox.dir/src/Main.cpp.o" \
"CMakeFiles/cpplox.dir/src/Scanner.cpp.o" \
"CMakeFiles/cpplox.dir/src/Token.cpp.o"

# External object files for target cpplox
cpplox_EXTERNAL_OBJECTS =

cpplox: CMakeFiles/cpplox.dir/src/ErrorHandler.cpp.o
cpplox: CMakeFiles/cpplox.dir/src/FileReader.cpp.o
cpplox: CMakeFiles/cpplox.dir/src/Main.cpp.o
cpplox: CMakeFiles/cpplox.dir/src/Scanner.cpp.o
cpplox: CMakeFiles/cpplox.dir/src/Token.cpp.o
cpplox: CMakeFiles/cpplox.dir/build.make
cpplox: CMakeFiles/cpplox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/amianadave/Documents/cpp/Lexer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable cpplox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpplox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpplox.dir/build: cpplox

.PHONY : CMakeFiles/cpplox.dir/build

CMakeFiles/cpplox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpplox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpplox.dir/clean

CMakeFiles/cpplox.dir/depend:
	cd /mnt/c/Users/amianadave/Documents/cpp/Lexer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/amianadave/Documents/cpp/Lexer /mnt/c/Users/amianadave/Documents/cpp/Lexer /mnt/c/Users/amianadave/Documents/cpp/Lexer/build /mnt/c/Users/amianadave/Documents/cpp/Lexer/build /mnt/c/Users/amianadave/Documents/cpp/Lexer/build/CMakeFiles/cpplox.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpplox.dir/depend

