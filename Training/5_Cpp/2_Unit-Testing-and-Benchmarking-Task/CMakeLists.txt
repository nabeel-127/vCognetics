cmake_minimum_required(VERSION 3.0)
project(Unit-Testing-and-Benchmarking-Task)

include_directories(include)
set(SOURCES src/codility.cpp)

add_executable(main src/main.cpp ${SOURCES})