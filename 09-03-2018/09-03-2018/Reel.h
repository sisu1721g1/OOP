#pragma once

class Reel
{
private:
	friend class Rod;
	int m_veryVerySecret;
public:
	Reel()
	{
		m_veryVerySecret = 42;
	}

	void something()
	{

	}

	friend void something(const Reel& reel);
};
