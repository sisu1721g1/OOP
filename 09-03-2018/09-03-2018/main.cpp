#include<iostream>

#include "Rod.h"

using namespace std;

int main()
{
	Rod myRod = Rod(4, true, Material::Carbon, "yes baby!");

	Rod myRod2 = Rod();

	myRod2 = myRod;

	cin >> myRod2;

	cout << myRod2;

	system("pause");
	return 0;
}