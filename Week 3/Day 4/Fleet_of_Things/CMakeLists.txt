cmake_minimum_required(VERSION 3.13)
project(Fleet_of_Things)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fleet_of_Things main.cpp Fleet.cpp Fleet.h Thing.cpp Thing.h)