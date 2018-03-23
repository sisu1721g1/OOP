#include "Angler.h"


Angler::Angler()
{
	m_Rod = new Rod();
	m_Sack = new FishSack();
}

Angler::Angler(Rod* rod, FishSack* sack)
{
	m_Rod = rod;
	m_Sack = sack;
}

Angler::Angler(const Angler& other)
{
	m_Rod = other.m_Rod;
	m_Sack = other.m_Sack;
}

Angler& Angler::operator=(const Angler& other)
{
	if (this != &other)
	{
		m_Rod = other.m_Rod;
		m_Sack = other.m_Sack;
	}

	return *this;
}

Angler::~Angler()
{
	if (m_Rod != nullptr)
	{
		delete m_Rod;
	}

	if (m_Sack != nullptr)
	{
		delete m_Sack;
	}
}

FishSack* Angler::getSack() const
{
	return m_Sack;
}

void Angler::fish()
{
	const int MAX_PERCENTAGE = 100;
	
	double anglerSuccessRate = m_Rod->getSuccessRate() * MAX_PERCENTAGE;

	int roll = rand() % (MAX_PERCENTAGE + 1); //determines how hard between 1 and 100 it is to catch a fish

	if (anglerSuccessRate > roll)
	{
		m_Sack->push(*new Fish());
	}
}
