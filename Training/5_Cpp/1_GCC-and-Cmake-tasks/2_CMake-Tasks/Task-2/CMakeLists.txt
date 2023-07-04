# cmake_minimum_required(VERSION 3.0)
# project(MyProject)
# find_package(Boost REQUIRED)
# add_executable(main main.cpp)
# target_link_libraries(main PRIVATE Boost::boost)

cmake_minimum_required(VERSION 3.0)
project(MyProject)

find_package(Git REQUIRED)
execute_process(
	COMMAND ${GIT_EXECUTABLE} submodule update --init external/boost
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(BOOST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/external/boost)
set(BOOST_INCLUDEDIR ${BOOST_ROOT})
set(BOOST_LIBRARYDIR ${BOOST_ROOT}/stage/lib)
set(BOOST_COMPONENTS
	date_time
	filesystem
	system
)

find_package(Boost REQUIRED COMPONENTS ${BOOST_COMPONENTS})

add_executable(main main.cpp)

# target_link_libraries(main PRIVATE Boost::date_time Boost::filesystem Boost::system)
target_link_libraries(main PRIVATE Boost::boost)
