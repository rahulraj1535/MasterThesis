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
include gps/src/CMakeFiles/gpsService.dir/depend.make

# Include the progress variables for this target.
include gps/src/CMakeFiles/gpsService.dir/progress.make

# Include the compile flags for this target's objects.
include gps/src/CMakeFiles/gpsService.dir/flags.make

gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o: gps/src/CMakeFiles/gpsService.dir/flags.make
gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o: ../gps/src/GpsService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rahul/OpenC2Xgit/OpenC2X/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/gps/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gpsService.dir/GpsService.cpp.o -c /home/rahul/OpenC2Xgit/OpenC2X/gps/src/GpsService.cpp

gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gpsService.dir/GpsService.cpp.i"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/gps/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rahul/OpenC2Xgit/OpenC2X/gps/src/GpsService.cpp > CMakeFiles/gpsService.dir/GpsService.cpp.i

gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gpsService.dir/GpsService.cpp.s"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/gps/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rahul/OpenC2Xgit/OpenC2X/gps/src/GpsService.cpp -o CMakeFiles/gpsService.dir/GpsService.cpp.s

gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.requires:

.PHONY : gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.requires

gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.provides: gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.requires
	$(MAKE) -f gps/src/CMakeFiles/gpsService.dir/build.make gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.provides.build
.PHONY : gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.provides

gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.provides.build: gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o


# Object files for target gpsService
gpsService_OBJECTS = \
"CMakeFiles/gpsService.dir/GpsService.cpp.o"

# External object files for target gpsService
gpsService_EXTERNAL_OBJECTS =

gps/src/gpsService: gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o
gps/src/gpsService: gps/src/CMakeFiles/gpsService.dir/build.make
gps/src/gpsService: common/buffers/libproto.so
gps/src/gpsService: common/messages/libmessages.so
gps/src/gpsService: common/utility/libutility.so
gps/src/gpsService: common/asn1/libasn.so
gps/src/gpsService: gps/src/CMakeFiles/gpsService.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rahul/OpenC2Xgit/OpenC2X/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gpsService"
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/gps/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gpsService.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gps/src/CMakeFiles/gpsService.dir/build: gps/src/gpsService

.PHONY : gps/src/CMakeFiles/gpsService.dir/build

gps/src/CMakeFiles/gpsService.dir/requires: gps/src/CMakeFiles/gpsService.dir/GpsService.cpp.o.requires

.PHONY : gps/src/CMakeFiles/gpsService.dir/requires

gps/src/CMakeFiles/gpsService.dir/clean:
	cd /home/rahul/OpenC2Xgit/OpenC2X/build/gps/src && $(CMAKE_COMMAND) -P CMakeFiles/gpsService.dir/cmake_clean.cmake
.PHONY : gps/src/CMakeFiles/gpsService.dir/clean

gps/src/CMakeFiles/gpsService.dir/depend:
	cd /home/rahul/OpenC2Xgit/OpenC2X/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rahul/OpenC2Xgit/OpenC2X /home/rahul/OpenC2Xgit/OpenC2X/gps/src /home/rahul/OpenC2Xgit/OpenC2X/build /home/rahul/OpenC2Xgit/OpenC2X/build/gps/src /home/rahul/OpenC2Xgit/OpenC2X/build/gps/src/CMakeFiles/gpsService.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gps/src/CMakeFiles/gpsService.dir/depend

