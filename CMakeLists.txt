cmake_minimum_required(VERSION 3.17)
project(lab01_Inheritance-BrenesRi)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)

add_executable(lab01_Inheritance
        src/Lab01Inheritance.cpp src/base.cpp src/base.h src/Derived1.cpp src/Derived1.h src/Derived2.cpp src/Derived2.h)
