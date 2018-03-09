#include<cstring>

#include "Rod.h"


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

Rod::~Rod()
{
	if (m_Name != nullptr)
	{
		delete[] m_Name;
	}
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