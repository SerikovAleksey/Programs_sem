cmake_minimum_required(VERSION 3.21)
project(LMS_STL_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(LMS_STL_2 main.cpp)
add_executable(Animals Animals.cpp)
add_executable(Session_Manager Session_Manager.cpp)
add_executable(Tracker Tracker.cpp)
add_executable(Telemetry_Controller Telemetry_Controller.cpp)
add_executable(Connection Connection.cpp)
