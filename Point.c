#include "Point.h"

	Point()
	{
		absis = 0;
		ordinat = 0;
	}

	Point(int abs, int ord)
	{
		absis = abs;
		ordinat = ord;
	}

	Point(const Point& P)
	{
		this->absis = P.GetAbsis();
		this->ordinat = P.GetOrdinat();
	}

	Point& operator= (const Point& P)
	{
		this->absis = P.GetAbsis();
		this->ordinat = P.GetOrdinat();
	}

	~Point()
	{}

	int GetAbsis()
	{
		return absis;
	}

	int GetOrdinat()
	{
		return ordinat;
	}

	void SetAbsis(int abs)
	{
		absis = abs;
	}

	void SetOrdinat(int ord)
	{
		ordinat = ord;
	}