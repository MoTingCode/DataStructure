cmake_minimum_required(VERSION 3.13)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)

set(source_files heap_sort.cpp)

add_executable(DataStructure ${source_files} main.cpp)
