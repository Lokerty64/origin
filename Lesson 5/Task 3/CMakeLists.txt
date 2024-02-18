cmake_minimum_required(VERSION 3.26)
project(Netolog)

set(CMAKE_CXX_STANDARD 17)

add_executable(Netolog main.cpp Figure.cpp Figure.h Quadrangle.cpp Quadrangle.h Triangle.cpp Triangle.h equilTriangle.cpp
equilTriangle.h isosTriangle.cpp isosTriangle.h parallelogram.cpp parallelogram.h rectangle.cpp rectangle.h rhomb.cpp rhomb.h 
rightTriangle.cpp rightTriangle.h square.cpp square.h)
