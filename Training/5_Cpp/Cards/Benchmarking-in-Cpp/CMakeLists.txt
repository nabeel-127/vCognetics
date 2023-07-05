cmake_minimum_required(VERSION 3.12)

project(MyBenchmark)

add_compile_options(-Wno-error)

add_subdirectory(external/benchmark)

# set_target_properties(benchmark PROPERTIES CXX_FLAGS "-Wno-error")
add_executable(my_benchmark_test main.cpp)

target_link_libraries(my_benchmark_test benchmark::benchmark)
