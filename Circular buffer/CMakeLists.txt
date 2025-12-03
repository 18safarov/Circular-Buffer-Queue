cmake_minimum_required(VERSION 4.0)
project(Circular_buffer)

set(CMAKE_CXX_STANDARD 20)

add_executable(Circular_buffer main.cpp
        queue.cpp
        queue.h)
