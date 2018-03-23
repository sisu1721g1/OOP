#pragma once
#include "Rod.h"
#include "Fish.h"
#include "FishSack.h"

class Angler
{
private:
	Rod* m_Rod;
	FishSack* m_Sack;
public:
	Angler();
	Angler(Rod* rod, FishSack* sack);
	Angler(const Angler& other);
	Angler& operator=(const Angler& other);

	~Angler();

	void fish();
	FishSack* getSack() const;
};

