cmake_minimum_required(VERSION 3.0)
project(MyProject)

find_package(Boost REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE Boost::boost)
