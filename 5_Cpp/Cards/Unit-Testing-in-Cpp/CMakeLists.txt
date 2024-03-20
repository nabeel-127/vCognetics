cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(external/googletest)

# include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_library(whitelistLib STATIC whitelist.cpp student.cpp)
add_executable(runTests gtest.cpp whattotest.cpp)

target_link_libraries(runTests gtest gtest_main whitelistLib)
