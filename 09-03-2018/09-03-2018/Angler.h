#pragma once
#include "Rod.h"
#include "Fish.h"

class Angler
{
private:
	Rod m_Rod;
	Fish** m_CaughtFishes;
public:
	Angler();

	void fish();
};

