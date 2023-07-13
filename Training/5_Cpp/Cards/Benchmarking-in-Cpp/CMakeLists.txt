cmake_minimum_required(VERSION 3.12)

project(MyBenchmark)

add_compile_options(-Wno-error)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

# set(CMAKE_BUILD_TYPE Release)
add_subdirectory(external/benchmark)

# set_target_properties(benchmark PROPERTIES CXX_FLAGS "-Wno-error")
add_executable(main main.cpp)

target_link_libraries(main benchmark::benchmark)
