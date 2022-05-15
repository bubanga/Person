cmake_minimum_required(VERSION 3.21)
project(Person)

set(CMAKE_CXX_STANDARD 20)

add_executable(Person main.cpp Person.cpp Person.h Worker.cpp Worker.h Manager.cpp Manager.h)
