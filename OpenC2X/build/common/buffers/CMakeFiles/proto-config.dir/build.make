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

# Utility rule file for proto-config.

# Include the progress variables for this target.
include common/buffers/CMakeFiles/proto-config.dir/progress.make

proto-config: common/buffers/CMakeFiles/proto-config.dir/build.make
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers && mkdir -p /home/rahul/OpenC2Xgit/OpenC2X/common/buffers/build/
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers && cp -a /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers/*.cc /home/rahul/OpenC2Xgit/OpenC2X/common/buffers/build/
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers && cp -a /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers/*.h /home/rahul/OpenC2Xgit/OpenC2X/common/buffers/build/
.PHONY : proto-config

# Rule to build all files generated by this target.
common/buffers/CMakeFiles/proto-config.dir/build: proto-config

.PHONY : common/buffers/CMakeFiles/proto-config.dir/build

common/buffers/CMakeFiles/proto-config.dir/clean:
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers && $(CMAKE_COMMAND) -P CMakeFiles/proto-config.dir/cmake_clean.cmake
.PHONY : common/buffers/CMakeFiles/proto-config.dir/clean

common/buffers/CMakeFiles/proto-config.dir/depend:
	cd /home/rahul/OpenC2Xgit/OpenC2X/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rahul/OpenC2Xgit/OpenC2X /home/rahul/OpenC2Xgit/OpenC2X/common/buffers /home/rahul/OpenC2Xgit/OpenC2X/build /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers /home/rahul/OpenC2Xgit/OpenC2X/build/common/buffers/CMakeFiles/proto-config.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : common/buffers/CMakeFiles/proto-config.dir/depend

