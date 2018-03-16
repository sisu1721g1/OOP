#pragma once
#include<iostream>

enum Material 
{
	Unspecified = 0,
	Carbon = 1,
	Wood = 2
};

class Rod
{
private:
	const int MAX_NAME_LENGTH = 50;

	int m_Length;
	bool m_IsAutomatic;
	Material m_RodMaterial;
	char* m_Name;

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

	double getSuccessRate(); //next time we will implement a complex success rate function
};

