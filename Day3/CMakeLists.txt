cmake_minimum_required(VERSION 3.27.0)

project(soldier)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(mysoldier_exe main.cpp src/Gun.cpp src/Soldier.cpp)

