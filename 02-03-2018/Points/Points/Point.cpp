#include<iostream>
#include<math.h>

#include "Point.h"

Point::Point()
{
	m_x = 0;
	m_y = 0;
}

Point::Point(double x, double y)
{
	m_x = x;
	m_y = y;
}

double Point::getX() const
{
	return m_x;
}

void Point::setX(double x)
{
	m_x = x;
}

double Point::getY() const
{
	return m_y;
}

void Point::setY(double y)
{
	m_y = y;
}

void Point::print() const
{
	std::cout << "(" << m_x << ", " << m_y << ")" << std::endl;
}

void Point::move(double dX, double dY)
{
	m_x += dX;
	m_y += dY;
}

double Point::getDistance(Point other) const
{
	return sqrt(pow(m_x - other.m_x, 2) +
				pow(m_y -other.m_y, 2));
}

bool Point::operator>(Point other)
{
	return m_x > other.m_x &&
			m_y > other.m_y;
}

bool Point::operator==(Point other)
{
	return doublesAreEqual(m_x, other.m_x) &&
			doublesAreEqual(m_y, other.m_y);
}

bool Point::doublesAreEqual(double first, double second)
{
	return abs(first - second) < Point::EPSILON;
}

Point Point::operator+(Point other)
{
	return Point(m_x + other.m_x, m_y + other.m_y);
}

Point Point::operator+(int translateAmount)
{
	return Point(m_x + translateAmount, m_y + translateAmount);
}

