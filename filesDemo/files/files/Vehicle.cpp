#include "Vehicle.h"

Vehicle::Vehicle() : _model(nullptr)
{
	_year = 0;
	_manufacturer = VehicleManufacturer::Unknown;
	_color = Color::Uncolored;
}

Vehicle::Vehicle(int year, VehicleManufacturer manufacturer, Color color, char* model) : _model(nullptr)
{
	_year = year;
	_manufacturer = manufacturer;
	_color = color;

	setModel(model);
}

Vehicle::Vehicle(const Vehicle& other) : _model(nullptr)
{
	_year = other._year;
	_manufacturer = other._manufacturer;
	_color = other._color;

	setModel(other._model);
}

Vehicle& Vehicle::operator=(const Vehicle& other)
{
	if (this != &other)
	{
		destroyModel();

		_year = other._year;
		_manufacturer = other._manufacturer;
		_color = other._color;

		setModel(other._model);
	}

	return *this;
}

Vehicle::~Vehicle()
{
	destroyModel();
}

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle)
{
	return vehicle.print(os);
}

std::ostream& Vehicle::print(std::ostream& os) const
{
	os << _model << " " << _year << " " << _manufacturer << " " << _color << std::endl;

	return os;
}

std::istream& operator>>(std::istream& is, Vehicle& vehicle)
{
	int manufacturerInput;
	int colorInput;
	char vehicleModelInput[50];

	is >> vehicleModelInput >> vehicle._year >> manufacturerInput >> colorInput;

	vehicle.destroyModel();
	vehicle.setModel(vehicleModelInput);

	vehicle._manufacturer = (VehicleManufacturer)manufacturerInput;
	vehicle._color = (Color)colorInput;

	return is;
}

void Vehicle::setModel(char* otherModel)
{
	destroyModel();

	if (otherModel != nullptr)
	{
		int modelLength = strlen(otherModel) + 1;
		_model = new char[modelLength];
		memcpy(_model, otherModel, modelLength);
	}
}

void Vehicle::destroyModel()
{
	if (_model != nullptr)
	{
		delete[] _model;
	}
}