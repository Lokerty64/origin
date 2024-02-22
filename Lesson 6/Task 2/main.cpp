#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "rightTriangle.h"
#include "isosTriangle.h"
#include "equilTriangle.h"
#include "Quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "rhomb.h"
#include "parallelogram.h"


void printT(Triangle& f) {
	std::cout << std::endl;
	std::cout << f.get_name() << ": " << std::endl;
	f.metod();
}
void printQ(Quadrangle& q) {
	std::cout << std::endl;
	std::cout << q.get_name() << ": " << std::endl;
	q.metod();
}

int main()
{
	Triangle Triangle1(10, 20, 30, 50, 60, 70);
	printT(Triangle1);

	rightTriangle rightTriangle1(10, 20, 30, 50, 60);
	printT(rightTriangle1);

	isosTriangle isosTriangle1(10, 20, 50, 60);
	printT(isosTriangle1);

	equilTriangle equilTriangle1(30);
	printT(equilTriangle1);

	Quadrangle Quadrangle1(10, 20, 30, 40, 50, 60, 70, 80);
	printQ(Quadrangle1);

	rectangle rectangle1(10, 20);
	printQ(rectangle1);

	square square1(20);
	printQ(square1);

	parallelogram parallelogram1(20, 30, 30, 40);
	printQ(parallelogram1);

	rhomb rhomb1(30, 30, 40);
	printQ(rhomb1);
}
