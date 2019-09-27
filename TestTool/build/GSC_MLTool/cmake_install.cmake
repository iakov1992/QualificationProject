# Install script for directory: /afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source/GSC_MLTool

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/InstallArea/x86_64-centos7-gcc8-opt")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/src/GSC_MLTool" TYPE DIRECTORY FILES "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source/GSC_MLTool/" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE REGEX "/\\.git$" EXCLUDE REGEX "/[^/]*\\~$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process( COMMAND ${CMAKE_COMMAND}
      -E make_directory
      $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/include )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process( COMMAND ${CMAKE_COMMAND}
         -E create_symlink ../src/GSC_MLTool/GSC_MLTool
         $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/include/GSC_MLTool )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDebugx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/x86_64-centos7-gcc8-opt/lib/libGSC_MLToolLib.so.dbg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/x86_64-centos7-gcc8-opt/lib/libGSC_MLToolLib.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGSC_MLToolLib.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGSC_MLToolLib.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.30-e5b21/x86_64-centos7/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGSC_MLToolLib.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/x86_64-centos7-gcc8-opt/lib/libGSC_MLToolDict_rdict.pcm")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDebugx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/x86_64-centos7-gcc8-opt/lib/libGSC_MLToolDict.so.dbg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/build/x86_64-centos7-gcc8-opt/lib/libGSC_MLToolDict.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGSC_MLToolDict.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGSC_MLToolDict.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.30-e5b21/x86_64-centos7/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGSC_MLToolDict.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/GSC_MLTool" TYPE FILE RENAME "neural_net.json" FILES "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source/GSC_MLTool/share/neural_net.json")
endif()

