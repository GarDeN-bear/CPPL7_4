cmake_minimum_required(VERSION 3.20)
project(CPPL7_4_1)

add_subdirectory(../Catch2 Catch2-build)
add_executable(CPPL7_4_1 CPPL7_4_1.cpp)
target_link_libraries(CPPL7_4_1 PRIVATE Catch2::Catch2)