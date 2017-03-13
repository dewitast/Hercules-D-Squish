/**	@file point.cpp
  */

#include "../point/point.h"

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

int Point::GetAbsis() const
{
	return absis;
}

int Point::GetOrdinat() const
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

bool Point::IsSame(Point P) const
{
	return ((absis==P.absis)&&(ordinat==P.ordinat));
}