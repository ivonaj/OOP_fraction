cmake_minimum_required(VERSION 3.8)
project(fraction)

set(CMAKE_CXX_STANDARD 11)

add_library(Fraction Fraction.cpp)
add_executable(Test test.cpp)
target_link_libraries(Test Fraction)