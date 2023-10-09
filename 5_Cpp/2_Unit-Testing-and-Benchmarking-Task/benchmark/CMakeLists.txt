option(BUILD_BENCHMARKS "Build benchmarks" ON)

if(BUILD_BENCHMARKS)
	add_subdirectory(${CMAKE_SOURCE_DIR}/external/benchmark ${CMAKE_BINARY_DIR}/external/benchmark)

	add_executable(benchmark_exe benchmark.cpp ${CMAKE_SOURCE_DIR}/src/codility.cpp)
	target_link_libraries(benchmark_exe benchmark::benchmark)
	target_include_directories(benchmark_exe PRIVATE ${CMAKE_SOURCE_DIR}/include)
endif()