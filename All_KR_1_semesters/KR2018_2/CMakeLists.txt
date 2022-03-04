cmake_minimum_required(VERSION 3.20)
project(KR2018_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(KR2018_2 main.cpp)
add_executable(sensor sensor.cpp)
add_executable(trajector trajectory.cpp)
add_executable(oddeven oddeven.cpp)
add_executable(stepback stepback.cpp)
add_executable(copyreverse copyreverse.cpp)
add_executable(rot13 rot13.cpp)
