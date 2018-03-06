#pragma once
class Point
{
private:
	const double EPSILON = 0.000001;

	double m_x;
	double m_y;

	bool doublesAreEqual(double first, double second);
public:
	Point();
	Point(double x, double y);

	double getX() const; 
	void setX(double x);

	double getY() const;
	void setY(double y);

	void print() const;
	void move(double dX, double dY);
	double getDistance(Point other) const;

	bool operator>(Point other);
	bool operator==(Point other);
	Point operator+(Point other);
	Point operator+(int translateValue);
};

