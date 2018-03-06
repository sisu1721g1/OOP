#include<iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point p = Point(1, 1);

	p.print();

	Point b = Point(-1.887, 1.887);

	Point sum = p + b;

	sum.print();

	system("pause");
	return 0;
}