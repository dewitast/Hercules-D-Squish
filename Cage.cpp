#include "Cage.h"
#include "Zoo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
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
		Loc[i] = c.Loc[i];
	TotalAnimal = c.TotalAnimal;
	a = new Animal*[3*size/10];
	for (int i=0;i<TotalAnimal;++i)
		a[i] = (c.a[i])->clone();
}

Cage& Cage::operator=(const Cage& c)
{
	int temp = (size>c.size)? c.size : size;
	for (int i = 0; i < temp; ++i)
		Loc[i] = c.Loc[i];
	TotalAnimal = (c.TotalAnimal>(3*size/10))?(3*size/10):c.TotalAnimal;
	for (int i=0;i<TotalAnimal;++i)
		a[i] = (c.a[i])->clone();
	return *this;
}

Cage::~Cage()
{
	delete [] Loc;
	for (int i=0;i<TotalAnimal;++i)
		delete a[i];
	delete [] a;
}

void Cage::AdoptAnimal(Animal& A)
{
	if (IsFull()) cout << "Kandang penuh." << endl;
	else if (!IsInCage(A))
	{
		srand (time(NULL));
		int random = rand() % size;
		while (IsOccupied(random))
			random = rand() % size;
		A.SetPoint(GetPoint(random));
		a[TotalAnimal] = A.clone();
		++TotalAnimal;
	}
}

void Cage::ReleaseAnimal(int i)
{
	delete a[i];
	for (int j = i+1;j<TotalAnimal;++j)
		a[j-1] = a[j];
	--TotalAnimal;
}

bool Cage::IsOccupied(int i) const
{
	bool found = false;
	int ind = 0;
	while ((!found)&&(ind<TotalAnimal))
	{
		if ((a[i]->GetPos()).IsSame(Loc[i])) found = true;
		else ++ind;
	}
	return found;
}

int Cage::IsInCage(const Animal &A) const
{
	bool found = false;
	int i = 0;
	while ((!found)&&(i<TotalAnimal))
	{
		if (A.IsSame(*a[i])) found = true;
		else ++i;
	}
	if (found) return i;
	else return 0;
}