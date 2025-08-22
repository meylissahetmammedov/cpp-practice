cmake_minimum_required(VERSION 3.10)

project(cpp_practice)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CppPractice main.cpp
        part_3_advanced/1.Classes/Volume/Volume.cpp
        part_3_advanced/1.Classes/Volume/Volume.h)
