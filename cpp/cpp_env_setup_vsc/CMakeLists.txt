cmake_minimum_required(VERSION 3.0.0)
project(cpp_env_setup_vsc VERSION 0.1.0)

set(CMAKE_GENERATOR "Ninja")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_compile_options(-O3)
add_compile_options(-g)

add_executable(cpp_env_setup_vsc main.cpp)

add_subdirectory(utils)
