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
CMAKE_SOURCE_DIR = /home/claudio/Git/OrderBook

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/claudio/Git/OrderBook/build

# Include any dependencies generated for this target.
include CMakeFiles/OrderBook.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OrderBook.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OrderBook.dir/flags.make

CMakeFiles/OrderBook.dir/src/main.cpp.o: CMakeFiles/OrderBook.dir/flags.make
CMakeFiles/OrderBook.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/claudio/Git/OrderBook/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OrderBook.dir/src/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OrderBook.dir/src/main.cpp.o -c /home/claudio/Git/OrderBook/src/main.cpp

CMakeFiles/OrderBook.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OrderBook.dir/src/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/claudio/Git/OrderBook/src/main.cpp > CMakeFiles/OrderBook.dir/src/main.cpp.i

CMakeFiles/OrderBook.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OrderBook.dir/src/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/claudio/Git/OrderBook/src/main.cpp -o CMakeFiles/OrderBook.dir/src/main.cpp.s

CMakeFiles/OrderBook.dir/src/OrderBook.cpp.o: CMakeFiles/OrderBook.dir/flags.make
CMakeFiles/OrderBook.dir/src/OrderBook.cpp.o: ../src/OrderBook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/claudio/Git/OrderBook/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OrderBook.dir/src/OrderBook.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OrderBook.dir/src/OrderBook.cpp.o -c /home/claudio/Git/OrderBook/src/OrderBook.cpp

CMakeFiles/OrderBook.dir/src/OrderBook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OrderBook.dir/src/OrderBook.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/claudio/Git/OrderBook/src/OrderBook.cpp > CMakeFiles/OrderBook.dir/src/OrderBook.cpp.i

CMakeFiles/OrderBook.dir/src/OrderBook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OrderBook.dir/src/OrderBook.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/claudio/Git/OrderBook/src/OrderBook.cpp -o CMakeFiles/OrderBook.dir/src/OrderBook.cpp.s

CMakeFiles/OrderBook.dir/src/order.cpp.o: CMakeFiles/OrderBook.dir/flags.make
CMakeFiles/OrderBook.dir/src/order.cpp.o: ../src/order.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/claudio/Git/OrderBook/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OrderBook.dir/src/order.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OrderBook.dir/src/order.cpp.o -c /home/claudio/Git/OrderBook/src/order.cpp

CMakeFiles/OrderBook.dir/src/order.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OrderBook.dir/src/order.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/claudio/Git/OrderBook/src/order.cpp > CMakeFiles/OrderBook.dir/src/order.cpp.i

CMakeFiles/OrderBook.dir/src/order.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OrderBook.dir/src/order.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/claudio/Git/OrderBook/src/order.cpp -o CMakeFiles/OrderBook.dir/src/order.cpp.s

# Object files for target OrderBook
OrderBook_OBJECTS = \
"CMakeFiles/OrderBook.dir/src/main.cpp.o" \
"CMakeFiles/OrderBook.dir/src/OrderBook.cpp.o" \
"CMakeFiles/OrderBook.dir/src/order.cpp.o"

# External object files for target OrderBook
OrderBook_EXTERNAL_OBJECTS =

OrderBook: CMakeFiles/OrderBook.dir/src/main.cpp.o
OrderBook: CMakeFiles/OrderBook.dir/src/OrderBook.cpp.o
OrderBook: CMakeFiles/OrderBook.dir/src/order.cpp.o
OrderBook: CMakeFiles/OrderBook.dir/build.make
OrderBook: CMakeFiles/OrderBook.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/claudio/Git/OrderBook/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable OrderBook"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OrderBook.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OrderBook.dir/build: OrderBook

.PHONY : CMakeFiles/OrderBook.dir/build

CMakeFiles/OrderBook.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OrderBook.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OrderBook.dir/clean

CMakeFiles/OrderBook.dir/depend:
	cd /home/claudio/Git/OrderBook/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/claudio/Git/OrderBook /home/claudio/Git/OrderBook /home/claudio/Git/OrderBook/build /home/claudio/Git/OrderBook/build /home/claudio/Git/OrderBook/build/CMakeFiles/OrderBook.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OrderBook.dir/depend

