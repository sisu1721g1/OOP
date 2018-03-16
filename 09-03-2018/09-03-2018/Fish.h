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
	const int MAX_BASS_WEIGHT = 150000;

	int m_weight;
	FishType m_type;
public:
	Fish();
	Fish(FishType type);
	Fish(int weight, FishType type);
};

