cmake_minimum_required(VERSION 3.12)

project(MyBenchmark)

add_subdirectory(external/benchmark)

add_executable(benchmark_test benchmark_test.cpp)

target_link_libraries(benchmark_test benchmark::benchmark)
