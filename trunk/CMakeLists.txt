cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

set(CMAKE_CXX_FLAGS "-g -Wall -std=c++11 ")

project(jammer)

add_subdirectory(gflags)
add_executable(jammer jammer.cpp)
target_link_libraries(jammer gflags)