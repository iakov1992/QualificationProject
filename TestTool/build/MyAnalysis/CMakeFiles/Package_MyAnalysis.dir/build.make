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
CMAKE_COMMAND = /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.14.3/Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.14.3/Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build

# Utility rule file for Package_MyAnalysis.

# Include the progress variables for this target.
include MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/progress.make

MyAnalysis/CMakeFiles/Package_MyAnalysis:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Built package MyAnalysis"
	cd /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/MyAnalysis && /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.14.3/Linux-x86_64/bin/cmake -E echo MyAnalysis:\ Package\ build\ succeeded

Package_MyAnalysis: MyAnalysis/CMakeFiles/Package_MyAnalysis
Package_MyAnalysis: MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/build.make

.PHONY : Package_MyAnalysis

# Rule to build all files generated by this target.
MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/build: Package_MyAnalysis

.PHONY : MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/build

MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/clean:
	cd /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/MyAnalysis && $(CMAKE_COMMAND) -P CMakeFiles/Package_MyAnalysis.dir/cmake_clean.cmake
.PHONY : MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/clean

MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/depend:
	cd /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source/MyAnalysis /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/MyAnalysis /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : MyAnalysis/CMakeFiles/Package_MyAnalysis.dir/depend

