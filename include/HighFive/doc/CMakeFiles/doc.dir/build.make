# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cvmfs/sft.cern.ch/lcg/releases/CMake/3.20.0-790a8/x86_64-centos7-gcc10-opt/bin/cmake

# The command to remove a file.
RM = /cvmfs/sft.cern.ch/lcg/releases/CMake/3.20.0-790a8/x86_64-centos7-gcc10-opt/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/HEPHero

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/HEPHero

# Utility rule file for doc.

# Include any custom commands dependencies for this target.
include include/HighFive/doc/CMakeFiles/doc.dir/compiler_depend.make

# Include the progress variables for this target.
include include/HighFive/doc/CMakeFiles/doc.dir/progress.make

include/HighFive/doc/CMakeFiles/doc:
	cd /home/HEPHero/include/HighFive/doc && /cvmfs/sft.cern.ch/lcg/views/LCG_100/x86_64-centos7-gcc10-opt/bin/doxygen /home/HEPHero/include/HighFive/doc/Doxyfile

doc: include/HighFive/doc/CMakeFiles/doc
doc: include/HighFive/doc/CMakeFiles/doc.dir/build.make
.PHONY : doc

# Rule to build all files generated by this target.
include/HighFive/doc/CMakeFiles/doc.dir/build: doc
.PHONY : include/HighFive/doc/CMakeFiles/doc.dir/build

include/HighFive/doc/CMakeFiles/doc.dir/clean:
	cd /home/HEPHero/include/HighFive/doc && $(CMAKE_COMMAND) -P CMakeFiles/doc.dir/cmake_clean.cmake
.PHONY : include/HighFive/doc/CMakeFiles/doc.dir/clean

include/HighFive/doc/CMakeFiles/doc.dir/depend:
	cd /home/HEPHero && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/HEPHero /home/HEPHero/include/HighFive/doc /home/HEPHero /home/HEPHero/include/HighFive/doc /home/HEPHero/include/HighFive/doc/CMakeFiles/doc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : include/HighFive/doc/CMakeFiles/doc.dir/depend

