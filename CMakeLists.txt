# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("cdzen")
include( props/conanbuildinfo_multi.cmake )

set (CMAKE_CXX_STANDARD 17)

# Include sub-projects.
add_subdirectory ("cdzen")
