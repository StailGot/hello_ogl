cmake_minimum_required (VERSION 3.8)

project( cdzen )

conan_basic_setup()

add_executable (cdzen "cdzen.cpp" )

conan_target_link_libraries(cdzen)