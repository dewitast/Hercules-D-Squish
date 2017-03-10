#include "Cage.h"
#include <iostream>
using namespace std;

Cage::Cage() : size(MaxSize)
{
	Loc = new Point [size];
	TotalAnimal = 0;
	*a = new Animal [3*size/10];
}

Cage::Cage(int s) : size(s)
{
	Loc = new Point [size];
	TotalAnimal = 0;
	*a = new Animal [3*size/10];
}

Cage::Cage(const Cage& c) : size(c.size)
{
	Loc = new Point [size];
	for (int i = 0; i < size; ++i)
		c.Loc[i] = Loc[i];
	TotalAnimal = 0;
	*a = new Animal [3*size/10];
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
	*a = new Animal [3*size/10];
	return *this;
}

Cage::~Cage()
{
	delete [] Loc;
	for (int i = 0; i < (3*size/10); ++i)
		delete [] *a;
	delete [] a;
}

bool Cage::IsFull()
{
	return (TotalAnimal == 3*size/10);
}

int Cage::GetSize()
{
	return size;
}

Animal Cage::GetAnimal()
{
	return **a;
}

int Cage::GetTotalAnimal()
{
	return TotalAnimal;
}

void Cage::AdoptAnimal(Animal* A)
{
	if (IsFull())
		cout << "Kandang penuh." << endl;
	else
	{
		a[TotalAnimal] = A;
		++TotalAnimal;
	}
}