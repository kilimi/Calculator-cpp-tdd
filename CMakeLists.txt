cmake_minimum_required(VERSION 2.8)
project( ex2 )

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/modules)

find_package(CppUnit REQUIRED)
include_directories(${CPPUNIT_INCLUDE_DIR})
LIST(APPEND UnitTestLibs ${CPPUNIT_LIBRARY})

#Find all source files in unit test
file(GLOB_RECURSE SOURCES tests/*.cpp src/*.cpp)

#Add all unit tests in addition to all source files.
add_executable(UnitTests ${SOURCES})

#Link this executable.
target_link_libraries (UnitTests ${LibraryList} ${UnitTestLibs})

