cmake_minimum_required (VERSION 3.8)

project( cdzen )

conan_basic_setup()

set (CMAKE_CXX_STANDARD 17)
add_executable (cdzen "cdzen.cpp" )

conan_target_link_libraries(cdzen)