cmake_minimum_required(VERSION 3.5)
project(Advanced-Cpp-Concepts)

# message("C++ Compiler ID: ${CMAKE_CXX_COMPILER_ID}")
# set(CMAKE_CXX_COMPILER "g++")
include_directories(include)

set(SOURCES src/database.cpp src/student.cpp)

add_executable(main app/main.cpp ${SOURCES})

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_BUILD_TYPE Debug)
