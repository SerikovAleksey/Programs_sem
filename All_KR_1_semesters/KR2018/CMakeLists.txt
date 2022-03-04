cmake_minimum_required(VERSION 3.20)
project(KR2018)

set(CMAKE_CXX_STANDARD 17)

add_executable(KR2018 main.cpp)
add_executable(tetrahedron tetrahedron.cpp)
add_executable(vector vector.cpp)
add_executable(drops drops.cpp)
add_executable(squirrel squirrel.cpp)
add_executable(matrix matrix.cpp)
