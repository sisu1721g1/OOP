#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
public:
	Car();
	Car(int year, VehicleManufacturer manufacturer, Color color, char* model, int steeringWheelDiameter);
	~Car();

	friend std::ostream& operator<<(std::ostream& os, const Car& car);
	friend std::istream& operator>>(std::istream& is, Car& car);

private:
	int _steeringWheelDiameter;
	std::ostream& print(std::ostream& os) const;
};

