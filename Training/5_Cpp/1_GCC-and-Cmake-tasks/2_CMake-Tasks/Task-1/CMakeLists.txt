cmake_minimum_required(VERSION 3.0)
project(main)

set(LIB_SOURCES mymath.cpp)

add_library(mymath SHARED ${LIB_SOURCES})

# set(MAIN_SOURCES main.cpp)
# add_executable(main ${MAIN_SOURCES})

add_executable(main main.cpp)

target_link_libraries(main mymath)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
