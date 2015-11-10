cmake_minimum_required(VERSION 2.8.3)
project(HoneyMaker)
set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")


add_executable(HoneyMaker src/main.cpp src/Bee.cpp src/Honey.cpp src/Honey.h)