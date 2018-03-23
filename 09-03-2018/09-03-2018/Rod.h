#pragma once
#include<iostream>

enum Material 
{
	Unspecified = 0,
	Wood = 1,
	Carbon = 2,
};

class Rod
{
private:
	const int MAX_NAME_LENGTH = 50;
	const double AUTOMATIC_ROD_BASE_SUCCESS_RATE = 0.25;
	const double WOOD_ROD_BASE_SUCCESS_RATE = 0.33;
	const double CARBON_ROD_BASE_SUCCESS_RATE = 0.51;

	int m_Length;
	bool m_IsAutomatic;
	Material m_RodMaterial;
	char* m_Name;

	double getMaterialSuccessRate(Material material);
public:
	Rod();
	Rod(int length, bool isAutomatic, Material rodMataterial, char* name);
	Rod(const Rod& other);
	~Rod();

	Rod& operator=(const Rod& other);
	friend std::ostream& operator<< (std::ostream& out, const Rod& rod);
	friend std::istream& operator>> (std::istream& in, Rod& rod);

	int getLength() const;
	void setLength(int length);

	bool isAutomatic() const;
	void setIsAutomatic(bool isAutomatic);

	Material getRodMaterial() const;
	void setRodMaterial(Material material);

	char* getName() const;
	void setName(char* name);

	double getSuccessRate();
};

