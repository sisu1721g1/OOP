#include <iostream>
#include <fstream>
#include"Vehicle.h"
#include"Car.h"

using namespace std;

int main()
{
	char a;

	Vehicle* myCar = new Car(1993, Mercedes, White, "120l", 20);

	ofstream out = ofstream("test.txt");

	out << *myCar;

	out.close();

	ifstream in = ifstream("test.txt");
	
	Vehicle* myCar2 = new Car();

	in >> *myCar2;

	in.seekg(sizeof(a), ios::cur);

	cout << in.bad();
		
	//in >> *myCar2;

	system("pause");
	return 0;
}