#include <stdlib.h>
#include <time.h>

#include "Fish.h"

Fish::Fish()
{
	m_weight = 0;

	int randomNumber = rand();
	m_type = (FishType)getRandomInt(FishType::first, FishType::last);

	switch (m_type)
	{
	case FishType::bass:
		m_weight = getRandomInt(MIN_BASS_WEIGHT, MAX_BASS_WEIGHT);
		break;
	case FishType::boot:
		m_weight = getRandomInt(MIN_BOOT_WEIGHT, MAX_BOOT_WEIGHT);
		break;
	case FishType::pike:
		m_weight = getRandomInt(MIN_PIKE_WEIGHT, MAX_PIKE_WEIGHT);
		break;
	case FishType::salmon:
		m_weight = getRandomInt(MIN_SALMON_WEIGHT, MAX_SALMON_WEIGHT);
		break;
	case FishType::angler:
		m_weight = getRandomInt(MIN_ANGLER_WEIGHT, MAX_ANGLER_WEIGHT);
		break;
	default:
		m_weight = 0;
		break;
	}
}

Fish::Fish(int weight, FishType type)
{
	m_weight = weight;
	m_type = type;
}

int Fish::getRandomInt(int minimum, int maximum)
{
	int randomNumber = rand();

	return randomNumber % (maximum - minimum + 1) + minimum;
}
