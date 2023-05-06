cmake_minimum_required(VERSION 3.20)
project(CPPL7_4)

add_subdirectory(./Catch2 Catch2-build)
add_executable(CPPL7_4 "CPPL7_4.h" "CPPL7_4_test.cpp")
target_link_libraries(CPPL7_4 PRIVATE Catch2::Catch2)