#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	Truck();
	Truck(int year, VehicleManufacturer manufacturer, Color color, char* model, int length, bool hasTrailer);

	friend std::ostream& operator<<(std::ostream& os, const Truck& car);
	friend std::istream& operator>>(std::istream& is, Truck& car);

private:
	int _length;
	bool _hasTrailer;

	VehicleType getType() const
	{
		return VehicleType::TruckType;
	}

	std::ostream& print(std::ostream& os) const;
};

