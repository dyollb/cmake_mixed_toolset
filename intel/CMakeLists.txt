cmake_minimum_required(VERSION 3.19)
project(IntelTargets CXX)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_library(foo_intel foo.cpp)
target_link_libraries(foo_intel PRIVATE foo_v140)
