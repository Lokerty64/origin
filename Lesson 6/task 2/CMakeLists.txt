cmake_minimum_required(VERSION 3.26)
project(Netolog)

set(CMAKE_CXX_STANDARD 17)

add_executable(Netolog main.cpp EquilateralTriangle.cpp EquilateralTriangle.h Figure.cpp Figure.h IsoscelesTriangle.cpp IsoscelesTriangle.h MyException.cpp MyException.h Parallelogram.cpp Parallelogram.h PrintFigure.cpp PrintFigure.h Quadrilateral.cpp Quadrilateral.h Rectangle.cpp Rectangle.h Rhomb.cpp Rhomb.h RightTriangle.cpp RightTriangle.h Square.cpp Square.h Triangle.cpp Triangle.h)
