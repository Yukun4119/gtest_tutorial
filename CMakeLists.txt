cmake_minimum_required(VERSION 3.26)
project(gtest_tutorial)
include_directories(./include DIR_INC)

set(CMAKE_CXX_STANDARD 17)
link_directories(./lib)

add_executable(gtest_tutorial src/main.cpp)
target_link_libraries(gtest_tutorial libgtest.a libgtest_main.a)
