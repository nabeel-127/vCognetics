option(BUILD_UNITTESTS "Build unit tests" ON)

if(BUILD_UNITTESTS)
	add_subdirectory(${CMAKE_SOURCE_DIR}/external/googletest ${CMAKE_BINARY_DIR}/external/googletest)

	add_executable(unittest_exe unittest.cpp ${CMAKE_SOURCE_DIR}/src/codility.cpp)
	target_link_libraries(unittest_exe gtest gtest_main)
	target_include_directories(unittest_exe PRIVATE ${CMAKE_SOURCE_DIR}/include)
endif()
