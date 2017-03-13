/**	@file zoo.cpp
  */

#include "zoo.h"
#include <iostream>
#include <fstream>
using namespace std;

Zoo::Zoo():baris(50),kolom(50)
{
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
	beff = z.beff;
	keff = z.keff;
	cell = new Cell**[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell*[kolom];
	}
	for (int i=0;i<beff;++i)
		for (int j=0;j<keff;++j)
			cell[i][j] = (z.cell[i][j])->Clone();
	jumlahcage = z.jumlahcage;
	cage = new Cage[jumlahcage];
	for (int i=0;i<jumlahcage;++i)
		cage[i] = z.cage[i];	
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
			cell[i][j] = (z.cell[i][j])->Clone();
	delete [] cage;
	cage = new Cage[z.jumlahcage];
	jumlahcage = z.jumlahcage;
	for (int i=0;i<jumlahcage;++i)
		cage[i] = z.cage[i];	
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
	Point P1, P2,P3;
	cout << "Absis kiri atas : "; cin >> abs;
	cout << "Ordinat kiri atas : "; cin >> ord;
	P1.SetAbsis(abs); P1.SetOrdinat(ord);
	cout << "Absis kanan bawah : "; cin >> abs;
	cout << "Ordinat kanan bawah : "; cin >> ord;
	P2.SetAbsis(abs); P2.SetOrdinat(ord);
	char m[z.GetBeff()][z.GetKeff()];
	for (int i=P1.GetAbsis();i<=P2.GetAbsis();++i)
		for (int j=P1.GetOrdinat();j<=P2.GetOrdinat();++j)
			m[i][j] = z.cell[i][j]->Render();
	for (int i=0;i<z.jumlahcage;++i)
	{
		Cage &c = z.GetCage(i);
		for (int j=0;j<c.GetTotalAnimal();++j)
		{
			P3 = c.GetAnimal(j)->GetPos();
			m[P3.GetAbsis()][P3.GetOrdinat()] = c.GetAnimal(j)->Render();
		}
	}
	for (int i=P1.GetAbsis();i<=P2.GetAbsis();++i)
	{
		for (int j=P1.GetOrdinat();j<=P2.GetOrdinat();++j)
			o << m[i][j] << ' ';
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
	//jumlahcage = 0;
	for (int i=0; i<brs; i++)
	{
		if (i<z.beff)
		{
			for (int j=0; j<kol; j++)
			{
				Point P;
				P.SetAbsis(i);
				P.SetOrdinat(j);
				is >> c;
				if (j<z.keff)
				{
					if (c=='@')
					{
						z.cell[i][j] = new LandHabitat();
						if ((i!=0)&&(z.cell[i-1][j]->IsLandHabitat()))
						{
							z.SearchPoint(i-1,j).AddPoint(P);
						}
						else if ((j!=0)&&(z.cell[i][j-1]->IsLandHabitat()))
						{
							z.SearchPoint(i,j-1).AddPoint(P);
						}
						else
						{
							Cage c(i,j);
							z.AddCage(c);
						}
					}
					else if (c=='^')
					{
						z.cell[i][j] = new AirHabitat();
						if ((i!=0)&&(z.cell[i-1][j]->IsAirHabitat()))
						{
							z.SearchPoint(i-1,j).AddPoint(P);
						}
						else if ((j!=0)&&(z.cell[i][j-1]->IsAirHabitat()))
						{
							z.SearchPoint(i,j-1).AddPoint(P);
						}
						else
						{
							Cage c(i,j);
							z.AddCage(c);
						}
					}
					else if (c=='~')
					{
						z.cell[i][j] = new WaterHabitat();
						if ((i!=0)&&(z.cell[i-1][j]->IsWaterHabitat()))
						{
								z.SearchPoint(i-1,j).AddPoint(P);
						}
						else if ((j!=0)&&(z.cell[i][j-1]->IsWaterHabitat()))
						{
								z.SearchPoint(i,j-1).AddPoint(P);
						}
						else
						{
							Cage c(i,j);
							z.AddCage(c);
						}
					}
					else if (c=='S')
					{
						z.cell[i][j] = new Restaurant();
					}
					else if (c=='#')
					{
						z.cell[i][j] = new Park();
					}
					else if (c=='+')
					{
						z.cell[i][j] = new Road();
					}
					else if (c=='X')
					{
						z.cell[i][j] = new Exit();
					}
					else if (c=='Z')
					{
						z.cell[i][j] = new Entrance();
					}
				}
			}
		}
	}
	return is;
}

void Zoo::ReadAnimal()
{
	Cage ca;
	char c;
	int abs, ord;
	ifstream myfile;
	myfile.open("animal.txt");
	while (myfile >> c)
	{
		if (c == 'A')
		{
			Alligator A;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'C')
		{
			Cobra C;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(C);
		}
		else if (c == 'M')
		{
			Cormorant M;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(M);
		}
		else if (c == 'N')
		{
			Dolphin N;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(N);
		}
		else if (c == 'D')
		{
			Duck D;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(D);
		}
		else if (c == 'U')
		{
			Dugong U;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(U);
		}
		else if (c == 'E')
		{
			Eagle E;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(E);
		}
		else if (c == 'H')
		{
			Elephant H;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(H);
		}
		else if (c == 'F')
		{
			Giraffe F;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(F);
		}
		else if (c == 'G')
		{
			Goat G;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(G);
		}
		else if (c == 'I')
		{
			Iguana I;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(I);
		}
		else if (c == 'J')
		{
			Jalak J;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(J);
		}
		else if (c == 'K')
		{
			Komodo K;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(K);
		}
		else if (c == 'L')
		{
			Lion L;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(L);
		}
		else if (c == 'R')
		{
			Orca R;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(R);
		}
		else if (c == 'O')
		{
			Owl O;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(O);
		}
		else if (c == 'P')
		{
			Parrot P;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(P);
		}
		else if (c == 'B')
		{
			PolarBear B;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(B);
		}
		else if (c == 'T')
		{
			Tiger T;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(T);
		}
		else if (c == 'W')
		{
			Walrus W;
			myfile >> abs;
			myfile >> ord;
			if (GetElement(abs-1,ord-1).IsHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(W);
		}
		myfile >> c;
	}
	myfile.close();
}

Cell& Zoo::GetElement(const Point& P) const
{
	int x = P.GetAbsis(), y = P.GetOrdinat();
	return (*(cell[x][y]));
}

Cell& Zoo::GetElement(int b,int k) const
{
	return (*(cell[b][k]));
}

int Zoo::GetJumlahCage() const
{
	return jumlahcage;
}

Cage& Zoo::GetCage(int i) const
{
	return cage[i];
}

Cage& Zoo::SearchPoint(const Point& P) const
{
	bool found = false;
	int i=0;
	while (!found)
	{
		if (cage[i].IsInCage(P)) found = true;
		else ++i;
	}
	return cage[i];
}

Cage& Zoo::SearchPoint(int i, int j) const
{
	bool found = false;
	int a=0;
	Point P;
	P.SetAbsis(i);
	P.SetOrdinat(j);
	while (!found)
	{
		if (cage[a].IsInCage(P)) found = true;
		else ++a;
	}
	return cage[a];
}

void Zoo::AddCage(Cage c)
{
	Cage* temp = new Cage[jumlahcage+1];
	for (int i=0; i<jumlahcage; i++)
	{
		temp[i] = cage[i];
	}
	temp[jumlahcage] = c;
	delete [] cage;
	cage = temp;
	++jumlahcage;
}