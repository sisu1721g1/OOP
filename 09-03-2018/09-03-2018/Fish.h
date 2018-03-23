#pragma once

#include"Windows.h"

enum FishType {
	unspecified,
	bass,
	salmon,
	pike,
	angler,
	boot,
	first = bass,
	last = boot
};

class Fish
{
	const int MIN_BASS_WEIGHT = 100;
	const int MAX_BASS_WEIGHT = 15000;

	const int MIN_SALMON_WEIGHT = 1000;
	const int MAX_SALMON_WEIGHT = 9000;

	const int MIN_PIKE_WEIGHT = 300;
	const int MAX_PIKE_WEIGHT = 30000;

	const int MIN_ANGLER_WEIGHT = 800;
	const int MAX_ANGLER_WEIGHT = 8000;

	const int MIN_BOOT_WEIGHT = 1000;
	const int MAX_BOOT_WEIGHT = 1200;

	int m_weight;
	FishType m_type;

	int getRandomInt(int minimum, int maximum);
public:
	Fish();
	Fish(int weight, FishType type);
};

