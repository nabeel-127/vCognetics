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

include(ExternalProject)
ExternalProject_Add(
	Boost
	GIT_REPOSITORY https://github.com/boostorg/boost.git
	GIT_TAG "boost-1.76.0"
	GIT_SUBMODULES
	PREFIX "${CMAKE_CURRENT_BINARY_DIR}/boost"
	PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/boost"
	UPDATE_COMMAND ""
	INSTALL_COMMAND ""
	CONFIGURE_COMMAND ./bootstrap.sh
	BUILD_COMMAND ./b2

	# BUILD_COMMAND ./b2 headers && ./b2 --with-system --with-date_time --with-filesystem stage
	BUILD_IN_SOURCE 1
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
