cmake_minimum_required(VERSION 3.5)
project(CMake-Test-Task)

# message("C++ Compiler ID: ${CMAKE_CXX_COMPILER_ID}")
set(CMAKE_CXX_COMPILER "g++")

include_directories(include)

set(SOURCES src/student.cpp)

add_executable(main app/main.cpp ${SOURCES})
