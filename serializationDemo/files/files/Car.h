#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
public:
	Car();
	Car(int year, VehicleManufacturer manufacturer, Color color, char* model, int steeringWheelDiameter);

	friend std::ostream& operator<<(std::ostream& os, const Car& car);
	friend std::istream& operator>>(std::istream& is, Car& car);

private:
	int _steeringWheelDiameter;

	VehicleType getType() const
	{
		return VehicleType::CarType;
	}

	std::ostream& print(std::ostream& os) const;
};

