#include "Point.h"

	Point::Point()
	{
		absis = 0;
		ordinat = 0;
	}

	Point::Point(int abs, int ord)
	{
		absis = abs;
		ordinat = ord;
	}

	Point::Point(const Point& P)
	{
		absis = P.absis;
		ordinat = P.ordinat;
	}

	Point& Point::operator= (const Point& P)
	{
		absis = P.absis;
		ordinat = P.ordinat;
		return *this;
	}

	Point::~Point()
	{}

	int Point::GetAbsis()
	{
		return absis;
	}

	int Point::GetOrdinat()
	{
		return ordinat;
	}

	void Point::SetAbsis(int abs)
	{
		absis = abs;
	}

	void Point::SetOrdinat(int ord)
	{
		ordinat = ord;
	}