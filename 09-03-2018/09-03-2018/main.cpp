#include<iostream>

#include "Rod.h"

using namespace std;

int main()
{
	Rod myRod = Rod(4, true, Material::Carbon, nullptr);

	myRod.setName("Turbo Giga Fisher 9000");

	system("pause");
	return 0;
}