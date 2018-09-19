cmake_minimum_required(VERSION 3.0)
project(docker_cpp)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(Catch2 REQUIRED)
add_library(docker_cpp library.cpp library.h)
add_executable(docker_cpp_test test.cpp library.cpp library.h)

include(CTest)
include(Catch)
catch_discover_tests(docker_cpp_test)
