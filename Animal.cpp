#include "Animal.h"

Animal::Animal(float w, float f, bool t, Point p)
{
	weight = w;
	food = f;
	tame = t;
	pos = p;
}

Animal::Animal(const Animal& A)
{
	weight = A.weight;
	food = A.food;
	tame = A.tame;
	pos = A.pos;
}

Animal& Animal::operator= (const Animal& A)
{
	weight = A.weight;
	food = A.food;
	tame = A.tame;
	pos = A.pos;
	return *this;
}

Animal::~Animal()
{}

float Animal::GetWeight()
{
	return weight;
}

float Animal::GetFood()
{
	return food;
}

bool Animal::GetTame()
{
	return tame;
}

Point Animal::GetPos()
{
	return pos;
}

void Animal::SetWeight(float w)
{
	weight = w;
}

void Animal::SetFood(float f)
{
	food = f;
}

void Animal::SetTame(bool t)
{
	tame = t;
}

void Animal::SetPoint(int abs, int ord)
{
	pos.SetAbsis(abs);
	pos.SetOrdinat(ord);
}