#include<cstring>

#include "Rod.h"

using namespace std;

Rod::Rod()
{
	m_Length = 0;
	m_IsAutomatic = false;
	m_RodMaterial = Material::Unspecified;
	m_Name = nullptr; //this needs to be verified
}

Rod::Rod(int length, bool isAutomatic, Material rodMataterial, char* name)
{
	m_Length = length;
	m_IsAutomatic = isAutomatic;
	m_RodMaterial = rodMataterial;

	if (name != nullptr)
	{
		int newNameLength = strlen(name) + 1;
		m_Name = new char[newNameLength];
		strcpy_s(m_Name, newNameLength, name);
	}
}

Rod::Rod(const Rod& other)
{
	m_Length = other.m_Length;
	m_IsAutomatic = other.m_IsAutomatic;
	m_RodMaterial = other.m_RodMaterial;
	m_Name = nullptr;

	if (other.m_Name != nullptr)
	{
		int newNameLength = strlen(other.m_Name) + 1;
		m_Name = new char[newNameLength];
		strcpy_s(m_Name, newNameLength, other.m_Name);
	}
}

Rod::~Rod()
{
	if (m_Name != nullptr)
	{
		delete[] m_Name;
	}
}

Rod& Rod::operator=(const Rod& other)
{
	if (this != &other)
	{
		m_Length = other.m_Length;
		m_IsAutomatic = other.m_IsAutomatic;
		m_RodMaterial = other.m_RodMaterial;
		m_Name = nullptr;

		if (other.m_Name != nullptr)
		{
			int newNameLength = strlen(other.m_Name) + 1;
			m_Name = new char[newNameLength];
			strcpy_s(m_Name, newNameLength, other.m_Name);
		}

		return *this;
	}
}

ostream& operator<<(ostream& out, const Rod& rod)
{
	out << "This rod is" << rod.m_Length << " cm long" << endl;

	out << "It is made of ";
	switch (rod.m_RodMaterial)
	{
	case Material::Unspecified:
		out << "unspecified material";
		break;
	default:
		break;
	}

	out << endl;

	return out;
}

std::istream& operator>>(std::istream& in, Rod & rod)
{
	in >> rod.m_Length;

	int material;
	in >> material;
	rod.m_RodMaterial = (Material)material;

	in >> rod.m_IsAutomatic;

	in.ignore(); // this is required since a newline char was input after the bool above.
				 // This messes up the line below that reads until it gets a newline char

	in.getline(rod.m_Name, rod.MAX_NAME_LENGTH);

	return in;
}



int Rod::getLength() const
{
	return m_Length;
}

void Rod::setLength(int length)
{
	if (length > 0)
	{
		m_Length = length;
	}
}

bool Rod::isAutomatic() const
{
	return m_IsAutomatic;
}

void Rod::setIsAutomatic(bool isAutomatic)
{
	m_IsAutomatic = isAutomatic;
}

Material Rod::getRodMaterial() const
{
	return m_RodMaterial;
}

void Rod::setRodMaterial(Material material)
{
	m_RodMaterial = material;
}

char* Rod::getName() const
{
	return m_Name;
}

void Rod::setName(char* name)
{
	if (name == nullptr)
	{
		return;
	}

	if (m_Name != nullptr)
	{
		delete[] m_Name;
	}

	int newNameLength = strlen(name) + 1;
	m_Name = new char[newNameLength];
	strcpy_s(m_Name, newNameLength, name);
}

double Rod::getSuccessRate()
{
	double result = 0;

	if (m_IsAutomatic)
	{
		result += AUTOMATIC_ROD_BASE_SUCCESS_RATE;
	}

	result += getMaterialSuccessRate(m_RodMaterial);

	return result;
}

double Rod::getMaterialSuccessRate(Material material)
{
	switch (material)
	{
	case Material::Wood:
		return WOOD_ROD_BASE_SUCCESS_RATE;
	case Material::Carbon:
		return CARBON_ROD_BASE_SUCCESS_RATE;
	default:
		return 0;
	}
}
