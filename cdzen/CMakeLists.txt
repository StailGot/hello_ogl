cmake_minimum_required (VERSION 3.8)

project( cdzen )

find_package(glm REQUIRED)
find_package(glfw3 REQUIRED)

set (CMAKE_CXX_STANDARD 17)

add_executable (cdzen "cdzen.cpp" )

target_link_libraries(cdzen glm glfw)