# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/src/Boost"
  "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/src/Boost-build"
  "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost"
  "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/tmp"
  "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/src/Boost-stamp"
  "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/src"
  "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/src/Boost-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/src/Boost-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/nabeel/Workspace/Repos/vCognetics/Training/5_Cpp/1_GCC-and-Cmake-tasks/2_CMake-Tasks/Task-2/boost/src/Boost-stamp${cfgdir}") # cfgdir has leading slash
endif()
