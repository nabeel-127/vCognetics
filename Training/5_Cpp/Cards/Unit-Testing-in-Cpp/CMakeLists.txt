cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the googletest submodule
add_subdirectory(external/googletest)

# Add the whattotest.cpp and gtest.cpp files to your test executable
add_executable(runTests gtest.cpp whattotest.cpp whitelist.cpp student.cpp)

# Link the GoogleTest library to your test executable
target_link_libraries(runTests gtest gtest_main)
