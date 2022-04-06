cmake_minimum_required(VERSION 3.20)
project(taskC)

set(CMAKE_CXX_STANDARD 14)

add_executable(taskC Matrix.cpp Matrix.hpp main.cpp Test.cpp)