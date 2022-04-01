cmake_minimum_required(VERSION 3.21)
project(LMS_STL_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(LMS_STL_1 main.cpp)
add_executable(Analysis_Load Analysis_Load.cpp)
add_executable(Results_Table Results_Table.cpp)
add_executable(Person Person.cpp)
