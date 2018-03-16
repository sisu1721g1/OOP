#include <stdlib.h>
#include <time.h>

#include "Fish.h"

Fish::Fish()
{
	m_type = FishType::unspecified;
	m_weight = 0;
}

Fish::Fish(FishType type)
{
	int randomNumber = rand();
	FishType type = (FishType)(randomNumber % (last + 1) + 1);

	switch (type)
	{
	case FishType::bass:
		m_weight = randomNumber % MAX_BASS_WEIGHT;
		break;
	default:
		break;
	}
}

Fish::Fish(int weight, FishType type)
{
	m_weight = weight;
	m_type = type;
}
