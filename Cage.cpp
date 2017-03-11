#include "Cage.h"
#include "Zoo.h"
#include <iostream>
using namespace std;

Cage::Cage() : size(MaxSize)
{
	Loc = new Point [size];
	TotalAnimal = 0;
	a = new Animal*[3*size/10];
}

Cage::Cage(int s) : size(s)
{
	Loc = new Point [size];
	TotalAnimal = 0;
	a = new Animal*[3*size/10];
}

Cage::Cage(const Cage& c) : size(c.size)
{
	Loc = new Point [size];
	for (int i = 0; i < size; ++i)
		c.Loc[i] = Loc[i];
	TotalAnimal = 0;
	a = new Animal*[3*size/10];
}

Cage& Cage::operator=(const Cage& c)
{
	delete [] Loc;
	for (int i = 0; i < (3*size/10); ++i)
		delete [] *a;
	delete [] a;
	Loc = new Point [size];
	for (int i = 0; i < size; ++i)
		c.Loc[i] = Loc[i];
	TotalAnimal = 0;
	a = new Animal*[3*size/10];
	return *this;
}

Cage::~Cage()
{
	delete [] Loc;
	for (int i = 0; i < (3*size/10); ++i)
		delete [] *a;
	delete [] a;
}

void Cage::AdoptAnimal(Animal& A)
{
	a[TotalAnimal] = &A;
	++TotalAnimal;
}

bool Cage::IsOccupied(int i)
{
	bool found = false;
	int ind = 0;
	Point P1,P2;
	while ((not found)&&(ind<TotalAnimal))
	{
		if (((*(a[ind])).GetPos()).IsSame(Loc[ind])) found = true;
		else ++ind;
	}
	return (!found);
}