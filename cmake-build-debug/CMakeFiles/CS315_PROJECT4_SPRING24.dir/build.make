# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.3.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.3.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS315_PROJECT4_SPRING24.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CS315_PROJECT4_SPRING24.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CS315_PROJECT4_SPRING24.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS315_PROJECT4_SPRING24.dir/flags.make

CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/flags.make
CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/includes_CXX.rsp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj: C:/Users/Ethan/CLionProjects/CS315_PROJECT4_SPRING24/main.cpp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj -MF CMakeFiles\CS315_PROJECT4_SPRING24.dir\main.cpp.obj.d -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\main.cpp.obj -c C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\main.cpp

CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\main.cpp > CMakeFiles\CS315_PROJECT4_SPRING24.dir\main.cpp.i

CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\main.cpp -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\main.cpp.s

CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/flags.make
CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/includes_CXX.rsp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj: C:/Users/Ethan/CLionProjects/CS315_PROJECT4_SPRING24/Token.cpp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj -MF CMakeFiles\CS315_PROJECT4_SPRING24.dir\Token.cpp.obj.d -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\Token.cpp.obj -c C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\Token.cpp

CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\Token.cpp > CMakeFiles\CS315_PROJECT4_SPRING24.dir\Token.cpp.i

CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\Token.cpp -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\Token.cpp.s

CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/flags.make
CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/includes_CXX.rsp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj: C:/Users/Ethan/CLionProjects/CS315_PROJECT4_SPRING24/Tokenizer.cpp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj -MF CMakeFiles\CS315_PROJECT4_SPRING24.dir\Tokenizer.cpp.obj.d -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\Tokenizer.cpp.obj -c C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\Tokenizer.cpp

CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\Tokenizer.cpp > CMakeFiles\CS315_PROJECT4_SPRING24.dir\Tokenizer.cpp.i

CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\Tokenizer.cpp -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\Tokenizer.cpp.s

CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/flags.make
CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/includes_CXX.rsp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj: C:/Users/Ethan/CLionProjects/CS315_PROJECT4_SPRING24/systemInterface.cpp
CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj: CMakeFiles/CS315_PROJECT4_SPRING24.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj -MF CMakeFiles\CS315_PROJECT4_SPRING24.dir\systemInterface.cpp.obj.d -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\systemInterface.cpp.obj -c C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\systemInterface.cpp

CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\systemInterface.cpp > CMakeFiles\CS315_PROJECT4_SPRING24.dir\systemInterface.cpp.i

CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\systemInterface.cpp -o CMakeFiles\CS315_PROJECT4_SPRING24.dir\systemInterface.cpp.s

# Object files for target CS315_PROJECT4_SPRING24
CS315_PROJECT4_SPRING24_OBJECTS = \
"CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj" \
"CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj" \
"CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj" \
"CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj"

# External object files for target CS315_PROJECT4_SPRING24
CS315_PROJECT4_SPRING24_EXTERNAL_OBJECTS =

CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/main.cpp.obj
CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/Token.cpp.obj
CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/Tokenizer.cpp.obj
CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/systemInterface.cpp.obj
CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/build.make
CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/linkLibs.rsp
CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/objects1
CS315_PROJECT4_SPRING24.exe: CMakeFiles/CS315_PROJECT4_SPRING24.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable CS315_PROJECT4_SPRING24.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CS315_PROJECT4_SPRING24.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS315_PROJECT4_SPRING24.dir/build: CS315_PROJECT4_SPRING24.exe
.PHONY : CMakeFiles/CS315_PROJECT4_SPRING24.dir/build

CMakeFiles/CS315_PROJECT4_SPRING24.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CS315_PROJECT4_SPRING24.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CS315_PROJECT4_SPRING24.dir/clean

CMakeFiles/CS315_PROJECT4_SPRING24.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24 C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24 C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug C:\Users\Ethan\CLionProjects\CS315_PROJECT4_SPRING24\cmake-build-debug\CMakeFiles\CS315_PROJECT4_SPRING24.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS315_PROJECT4_SPRING24.dir/depend

