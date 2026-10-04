cmake_minimum_required(VERSION 3.20)
project(d01 CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS)  # lets clangd understand the project

add_executable(hello main.cpp)
target_compile_options(hello PRIVATE -Wall -Wextra -Wpedantic)