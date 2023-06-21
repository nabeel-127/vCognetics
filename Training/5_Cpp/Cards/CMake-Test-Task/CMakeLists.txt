cmake_minimum_required(VERSION 3.5)
project(CMake-Test-Task)

# message("C++ Compiler ID: ${CMAKE_CXX_COMPILER_ID}")
set(CMAKE_CXX_COMPILER "g++")

# Add the include directory
include_directories(include)

# Add the source files
set(SOURCES src/student.cpp)

# Add the executable target
add_executable(main app/main.cpp ${SOURCES})
