cmake_minimum_required(VERSION 3.7)
project(practice_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES mainProgram.cpp FirstClass.h FirstClass.cpp)
add_executable(practice_cpp ${SOURCE_FILES})