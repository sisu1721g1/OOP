#include<iostream>
#include"Vehicle.h"
#include"Car.h"

using namespace std;

int main()
{
	Vehicle* myCar = new Car(1993, Mercedes, White, "120l", 20);
	//Vehicle* myCar = new Car();

	cout << *myCar;

	system("pause");
	return 0;
}