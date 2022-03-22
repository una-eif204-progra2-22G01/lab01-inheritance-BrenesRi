cmake_minimum_required(VERSION 3.16)
project(lab01_Inheritance-BrenesRi)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab01_Inheritance
        src/Lab01Inheritance.cpp src/base.cpp src/base.h)
