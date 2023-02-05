cmake_minimum_required(VERSION 3.0.0)
project(cpp_reference VERSION 0.1.0)

set(CMAKE_BUILD_TYPE "DEBUG")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_compile_options(-O0)
add_compile_options(-g)

add_executable(lazy_initialization lazy_initialization.cpp)
add_executable(re_assignment re_assignment.cpp)
add_executable(identity identity.cpp)
add_executable(reference_collapsing reference_collapsing.cpp)
add_executable(iterable iterable.cpp)
add_executable(contiguous_memory_space contiguous_memory_space.cpp)

