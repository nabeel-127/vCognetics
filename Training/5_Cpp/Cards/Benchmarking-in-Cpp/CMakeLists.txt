cmake_minimum_required(VERSION 3.12)

project(MyBenchmark)

add_compile_options(-Wno-error)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

if(EXISTS "${PROJECT_SOURCE_DIR}/.gitmodules")
	file(STRINGS ".gitmodules" SUBMODULES_EXISTS REGEX "path = external/benchmark/googletest")

	if(NOT SUBMODULES_EXISTS)
		execute_process(
			COMMAND git submodule add https://github.com/google/googletest.git external/benchmark/googletest
			WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		)
	endif()
else()
	execute_process(
		COMMAND git submodule add https://github.com/google/googletest.git external/benchmark/googletest
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	message(FATAL_ERROR "The .gitmodules file does not exist.")
endif()

if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/benchmark/googletest")
	execute_process(
		COMMAND git submodule update --init --recursive
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
endif()

# set(CMAKE_BUILD_TYPE Release)
add_subdirectory(external/benchmark)

# set_target_properties(benchmark PROPERTIES CXX_FLAGS "-Wno-error")
add_executable(main main.cpp)

target_link_libraries(main benchmark::benchmark)
