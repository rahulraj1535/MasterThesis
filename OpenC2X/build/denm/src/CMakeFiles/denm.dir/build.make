# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/rahul/OpenC2Xgit/OpenC2X

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rahul/OpenC2Xgit/OpenC2X/build

# Include any dependencies generated for this target.
include denm/src/CMakeFiles/denm.dir/depend.make

# Include the progress variables for this target.
include denm/src/CMakeFiles/denm.dir/progress.make

# Include the compile flags for this target's objects.
include denm/src/CMakeFiles/denm.dir/flags.make

denm/src/CMakeFiles/denm.dir/denservice.cpp.o: denm/src/CMakeFiles/denm.dir/flags.make
denm/src/CMakeFiles/denm.dir/denservice.cpp.o: ../denm/src/denservice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rahul/OpenC2Xgit/OpenC2X/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object denm/src/CMakeFiles/denm.dir/denservice.cpp.o"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/denm/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/denm.dir/denservice.cpp.o -c /home/rahul/OpenC2Xgit/OpenC2X/denm/src/denservice.cpp

denm/src/CMakeFiles/denm.dir/denservice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/denm.dir/denservice.cpp.i"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/denm/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rahul/OpenC2Xgit/OpenC2X/denm/src/denservice.cpp > CMakeFiles/denm.dir/denservice.cpp.i

denm/src/CMakeFiles/denm.dir/denservice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/denm.dir/denservice.cpp.s"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/denm/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rahul/OpenC2Xgit/OpenC2X/denm/src/denservice.cpp -o CMakeFiles/denm.dir/denservice.cpp.s

denm/src/CMakeFiles/denm.dir/denservice.cpp.o.requires:

.PHONY : denm/src/CMakeFiles/denm.dir/denservice.cpp.o.requires

denm/src/CMakeFiles/denm.dir/denservice.cpp.o.provides: denm/src/CMakeFiles/denm.dir/denservice.cpp.o.requires
	$(MAKE) -f denm/src/CMakeFiles/denm.dir/build.make denm/src/CMakeFiles/denm.dir/denservice.cpp.o.provides.build
.PHONY : denm/src/CMakeFiles/denm.dir/denservice.cpp.o.provides

denm/src/CMakeFiles/denm.dir/denservice.cpp.o.provides.build: denm/src/CMakeFiles/denm.dir/denservice.cpp.o


# Object files for target denm
denm_OBJECTS = \
"CMakeFiles/denm.dir/denservice.cpp.o"

# External object files for target denm
denm_EXTERNAL_OBJECTS =

denm/src/denm: denm/src/CMakeFiles/denm.dir/denservice.cpp.o
denm/src/denm: denm/src/CMakeFiles/denm.dir/build.make
denm/src/denm: common/buffers/libproto.so
denm/src/denm: common/messages/libmessages.so
denm/src/denm: common/utility/libutility.so
denm/src/denm: common/asn1/libasn.so
denm/src/denm: denm/src/CMakeFiles/denm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rahul/OpenC2Xgit/OpenC2X/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable denm"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/denm/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/denm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
denm/src/CMakeFiles/denm.dir/build: denm/src/denm

.PHONY : denm/src/CMakeFiles/denm.dir/build

denm/src/CMakeFiles/denm.dir/requires: denm/src/CMakeFiles/denm.dir/denservice.cpp.o.requires

.PHONY : denm/src/CMakeFiles/denm.dir/requires

denm/src/CMakeFiles/denm.dir/clean:
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/denm/src && $(CMAKE_COMMAND) -P CMakeFiles/denm.dir/cmake_clean.cmake
.PHONY : denm/src/CMakeFiles/denm.dir/clean

denm/src/CMakeFiles/denm.dir/depend:
	cd /home/rahul/OpenC2Xgit/OpenC2X/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rahul/OpenC2Xgit/OpenC2X /home/rahul/OpenC2Xgit/OpenC2X/denm/src /home/rahul/OpenC2Xgit/OpenC2X/build /home/rahul/OpenC2Xgit/OpenC2X/build/denm/src /home/rahul/OpenC2Xgit/OpenC2X/build/denm/src/CMakeFiles/denm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : denm/src/CMakeFiles/denm.dir/depend

