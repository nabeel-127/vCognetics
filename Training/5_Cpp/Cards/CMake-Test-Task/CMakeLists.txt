cmake_minimum_required(VERSION 3.5)
project(CMake-Test-Task)

# Add the include directory
include_directories(include)

# Add the source files
set(SOURCES src/student.cpp)

# Add the executable target
add_executable(main app/main.cpp ${SOURCES})
