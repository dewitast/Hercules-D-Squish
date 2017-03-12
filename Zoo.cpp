#include "Zoo.h"
#include <iostream>
using namespace std;

Zoo::Zoo() : baris(0), kolom(0)
{
	jumlahcage = 0;
}

Zoo::Zoo(int b, int k, int j) : baris(b), kolom(k)
{
	cell = new Cell**[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell*[kolom];
	}
	jumlahcage = j;
	cage = new Cage[jumlahcage];
}

Zoo::Zoo(const Zoo& z) : baris(z.baris), kolom(z.kolom)
{
	cell = new Cell**[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell*[kolom];
		for (int j=0;j<kolom;++j)
			cell[i][j] = (z.cell[i][j])->clone();
	}
	jumlahcage = z.jumlahcage;
	cage = new Cage[jumlahcage];
	for (int i=0;i<jumlahcage;++i)
		cage[i] = z.cage[i];	
}

Zoo& Zoo::operator=(const Zoo& z)
{
	for (int i=0;i<baris;++i)
		delete [] *cell;
	delete [] cell;
	cell = new Cell**[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell*[kolom];
		for (int j=0;j<kolom;++j)
			cell[i][j] = (z.cell[i][j])->clone();
	}
	jumlahcage = z.jumlahcage;
	cage = new Cage[jumlahcage];
	for (int i=0;i<jumlahcage;++i)
		cage[i] = z.cage[i];
	return *this;
}

Zoo::~Zoo()
{
	for (int i=0;i<baris;++i)
	{
		for (int j=0;j<kolom;++j)
			delete [] cell[i][j],cout << "delete " << i << ' ' << j << endl;
		delete [] cell[i];
		cout << "delete " << i << endl;
	}		
	delete [] cell;
	cout << "delete all" << endl;
	delete [] cage;
	cout << "delete cage" << endl;
}

ostream& operator<<(ostream& o,const Zoo& z)
{
	for (int i=0;i<z.baris;++i)
	{
		for (int j=0;j<z.kolom;++j)
			o << z.cell[i][j]->render() << ' ';
		o << endl;
	}
	return o;
}

istream& operator>>(istream& i,const Zoo& z)
{
	char c;
}

Cell& Zoo::GetElement(const Point& P)
{
	int x = P.GetAbsis(), y = P.GetOrdinat();
	return (*(cell[x][y]));
}

Cell& Zoo::GetElement(int b,int k)
{
	return (*(cell[b][k]));
}

void Zoo::AddAnimal(int i,Animal& A)
{
	Cage &c = cage[i];
	if (c.IsFull())
	{
		cout << "Kandang penuh." << endl;
	}
	else
	{
		int size = c.GetSize();
		(cage[i]).AdoptAnimal(A);
		srand (time(NULL));
		int random = rand() % size;
		while (c.IsOccupied(random))
			random = rand() % size;
		A.SetPoint(c.GetPoint(random));
	}
}