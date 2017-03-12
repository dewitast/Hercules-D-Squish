#include "Zoo.h"
#include <iostream>
using namespace std;

Zoo::Zoo():baris(50),kolom(50)
{
	cout << "ctor" << endl;
	beff = 0;
	keff = 0;
	jumlahcage = 0;
	cell = new Cell**[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell*[kolom];
	}
	cage = new Cage[jumlahcage];
}

Zoo::Zoo(int b, int k, int j):baris(b),kolom(k)
{
	beff = 0;
	keff = 0;
	cell = new Cell**[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell*[kolom];
	}
	jumlahcage = j;
	cage = new Cage[jumlahcage];
}

Zoo::Zoo(const Zoo& z):baris(z.baris),kolom(z.kolom)
{
	cout << "cctor" << endl;	
	beff = z.beff;
	keff = z.keff;
	cell = new Cell**[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell*[kolom];
	}
	cout << "cctor" << endl;	
	for (int i=0;i<beff;++i)
		for (int j=0;j<keff;++j)
			cell[i][j] = (z.cell[i][j])->clone(),cout << i << j << endl;
	jumlahcage = z.jumlahcage;
	cage = new Cage[jumlahcage];
	for (int i=0;i<jumlahcage;++i)
		cage[i] = z.cage[i];
	cout << "cctor" << endl;	
}

Zoo& Zoo::operator=(const Zoo& z)
{
	for (int i=0;i<beff;++i)
		for (int j=0;j<keff;++j)
			delete cell[i][j];
	beff = z.beff;
	keff = z.keff;
	for (int i=0;i<beff;++i)
		for (int j=0;j<keff;++j)
			cell[i][j] = (z.cell[i][j])->clone();
	jumlahcage = (jumlahcage>z.jumlahcage)? z.jumlahcage:jumlahcage;
	for (int i=0;i<jumlahcage;++i)
		cage[i] = z.cage[i];
	cout << "=" << endl;		
	return *this;
}

Zoo::~Zoo()
{
	for (int i=0;i<beff;++i)
	{
		for (int j=0;j<keff;++j)
			delete cell[i][j];
		delete [] cell[i];
	}		
	delete [] cell;
	delete [] cage;
}

ostream& operator<<(ostream& o,const Zoo& z)
{
	int abs, ord;
	Point P1, P2;
	cout << "Absis kiri atas : "; cin >> abs;
	cout << "Ordinat kiri atas : "; cin >> ord;
	P1.SetAbsis(abs); P1.SetOrdinat(ord);
	cout << "Absis kanan bawah : "; cin >> abs;
	cout << "Ordinat kanan bawah : "; cin >> ord;
	P2.SetAbsis(abs); P2.SetOrdinat(ord);

	for (int i=P1.GetAbsis();i<=P2.GetAbsis();++i)
	{
		for (int j=P1.GetOrdinat();j<=P2.GetOrdinat();++j)
			o << z.cell[i][j]->render() << ' ';
		o << endl;
	}
	return o;
}

istream& operator>>(istream& is, Zoo& z)
{
	char c;
	int brs, kol;
	is >> brs >> kol;
	z.beff = (brs>z.baris)?z.baris:brs;
	z.keff = (kol>z.kolom)?z.kolom:kol;
	for (int i=0; i<brs; i++)
	{
		if (i<z.beff)
		{
			for (int j=0; j<kol; j++)
			{
				is >> c;
				if (j<z.keff)
				{
					cout << '#' << c << '#' << i << '#' << j << endl;
					if (c=='L')
					{
						z.cell[i][j] = new LandHabitat();
					}
					else if (c=='A')
					{
						z.cell[i][j] = new AirHabitat();
					}
					else if (c=='W')
					{
						z.cell[i][j] = new WaterHabitat();
					}
					else if (c=='R')
					{
						z.cell[i][j] = new Restaurant();
					}
					else if (c=='P')
					{
						z.cell[i][j] = new Park();
					}
					else if (c=='O')
					{
						z.cell[i][j] = new Road();
					}
					else if (c=='X')
					{
						z.cell[i][j] = new Exit();
					}
					else if (c=='N')
					{
						z.cell[i][j] = new Entrance();
					}
					cout << '#' << c << '#' << i << '#' << j << endl;
				}
			}
		}
	}
	cout << 1 << endl;
	return is;
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