#include "Truck.h"

Truck::Truck() : Vehicle()
{
}

Truck::Truck(int year, VehicleManufacturer manufacturer, Color color, char* model, int length, bool hasTrailer) :
	Vehicle(year, manufacturer, color, model)
{
	_length = length;
	_hasTrailer = hasTrailer;
}

std::ostream& operator<<(std::ostream& os, const Truck& Truck)
{
	Truck.print(os);

	return os;
}

std::ostream& Truck::print(std::ostream& os) const
{
	Vehicle::print(os);

	os << _length << " " << _hasTrailer << std::endl;

	return os;
}