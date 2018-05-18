#pragma once
#include<iostream>

enum VehicleManufacturer
{
	Unknown,
	Mercedes,
	BMW,
};

enum Color 
{
	Uncolored,
	White,
	Black,
};

class Vehicle
{
public:
	Vehicle();
	Vehicle(int year, VehicleManufacturer manufacturer, Color color, char* model);
	Vehicle(const Vehicle& other);
	virtual ~Vehicle();

	Vehicle& operator=(const Vehicle& other);
	friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);
	friend std::istream& operator>>(std::istream& is, Vehicle& vehicle);
protected:
	virtual std::ostream& Vehicle::print(std::ostream& os) const;
private:
	int _year;
	VehicleManufacturer _manufacturer;
	Color _color;
	char* _model;

	void setModel(char* otherModel);
	void destroyModel();
};

