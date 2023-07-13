cmake_minimum_required(VERSION 3.0)
project(Unit-Testing-and-Benchmarking-Task)

add_compile_options(-Wno-error)

set(GOOGLETEST_PATH_EXISTS "")
set(BENCHMARK_PATH_EXISTS "")
set(GOOGLETEST_EXISTS FALSE)
set(BENCHMARK_EXISTS FALSE)

if(EXISTS "${PROJECT_SOURCE_DIR}/.gitmodules")
	file(STRINGS ".gitmodules" GOOGLETEST_PATH_EXISTS REGEX "path = external/googletest")
	file(STRINGS ".gitmodules" BENCHMARK_PATH_EXISTS REGEX "path = external/benchmark")
endif()

if((NOT GOOGLETEST_PATH_EXISTS) AND(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/googletest"))
	execute_process(
		COMMAND git submodule add https://github.com/google/googletest.git external/googletest
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		RESULT_VARIABLE TEMP
	)
elseif(GOOGLETEST_PATH_EXISTS AND(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/googletest"))
	set(GOOGLETEST_EXISTS TRUE)
endif()

if((NOT BENCHMARK_PATH_EXISTS) AND(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/benchmark"))
	execute_process(
		COMMAND git submodule add https://github.com/google/benchmark.git external/benchmark
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		RESULT_VARIABLE TEMP
	)
elseif(BENCHMARK_PATH_EXISTS AND(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/benchmark"))
	set(BENCHMARK_EXISTS TRUE)
endif()

execute_process(
	COMMAND git submodule update --init --recursive
	WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
	RESULT_VARIABLE TEMP
)

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/googletest")
	add_subdirectory(unittest)
endif()

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/benchmark")
	add_subdirectory(benchmark)
endif()

# include_directories(include)
set(SRC src/main.cpp src/codility.cpp)

add_executable(main ${SRC})
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/include)

# target_link_libraries(MyProject)