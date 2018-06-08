#include "Car.h"

Car::Car() : Vehicle()
{
}

Car::Car(int year, VehicleManufacturer manufacturer, Color color, char* model, int steeringWheelDiameter) :
	Vehicle(year, manufacturer, color, model)
{
	_steeringWheelDiameter = steeringWheelDiameter;
}

std::ostream& operator<<(std::ostream& os, const Car& car)
{
	car.print(os);

	return os;
}

std::ostream& Car::print(std::ostream& os) const
{
	Vehicle::print(os);

	os << _steeringWheelDiameter << std::endl;

	return os;
}
