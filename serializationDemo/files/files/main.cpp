#include <iostream>
#include <fstream>
#include"Car.h"
#include"Truck.h"
#include"Vehicle.h"

using namespace std;

Vehicle* vehicleFactory(int type)
{
	switch (type)
	{
	case (int)VehicleType::CarType:
		return new Car();
	case (int)VehicleType::TruckType:
		return new Truck();
	}
}

void initialize()
{
	int arSize = 3;
	Vehicle** ar = new Vehicle*[arSize] { nullptr };

	ar[0] = new Truck(2014, VehicleManufacturer::BMW, Color::Black, "fat semi", 1, true);
	ar[1] = new Car(2014, VehicleManufacturer::Mercedes, Color::White, "na sashka", 30);
	ar[2] = new Car(1993, VehicleManufacturer::Mercedes, Color::Black, "na sashko", 32);

	ofstream out("test.txt", ios::out | ios::binary);

	out.write((const char*)&arSize, sizeof(arSize));

	for (int i = 0; i < arSize; i++)
	{
		out.write((const char*)ar[i], sizeof(*ar[i]));
	}

	out.close();
}

int main()
{
	initialize();

	int vehichleCount;

	ifstream in("test.txt", ios::in | ios::binary);

	in.read((char*)&vehichleCount, sizeof(vehichleCount));

	Vehicle** ar = new Vehicle*[vehichleCount] { nullptr };

	int vehicleType;

	for (int i = 0; i < vehichleCount; i++)
	{
		in.read((char*)&vehicleType, sizeof(vehichleCount));

		Vehicle* vehicle = vehicleFactory(vehicleType);

		in.read((char*)vehicle, sizeof(*vehicle)); //this is NOT OK
	}

	in.close();

	system("pause");
	return 0;
}