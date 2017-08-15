cmake_minimum_required(VERSION 3.8)
project(Demo_Template_specialization)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Person.cpp Person.h Accum.cpp Accum.h)
add_executable(Demo_Template_specialization ${SOURCE_FILES})