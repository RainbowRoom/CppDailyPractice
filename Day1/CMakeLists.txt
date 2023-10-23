cmake_minimum_required(VERSION 3.27.0)

project(SWAP)

include_directories(./include)

set(src
    main.cpp
    ./src/swap.cpp)

add_executable(swap ${src})
