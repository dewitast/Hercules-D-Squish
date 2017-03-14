/**	@file zoo.cpp
  */

#include <iostream>
#include <fstream>
using namespace std;
#include "zoo.h"

Zoo::Zoo():baris(50),kolom(50)
{
	beff = 0;
	keff = 0;
	jumlahcage = 0;
	cell = new Cell*[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell[kolom];
	}
	cage = new Cage[jumlahcage];
}

Zoo::Zoo(int b, int k, int j):baris(b),kolom(k)
{
	beff = 0;
	keff = 0;
	cell = new Cell*[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell[kolom];
	}
	jumlahcage = j;
	cage = new Cage[jumlahcage];
}

Zoo::Zoo(const Zoo& z):baris(z.baris),kolom(z.kolom)
{
	beff = z.beff;
	keff = z.keff;
	cell = new Cell*[baris];
	for (int i=0;i<baris;++i)
	{
		cell[i] = new Cell[kolom];
	}
	for (int i=0;i<beff;++i)
		for (int j=0;j<keff;++j)
			cell[i][j] = z.cell[i][j];
	jumlahcage = z.jumlahcage;
	cage = new Cage[jumlahcage];
	for (int i=0;i<jumlahcage;++i)
		cage[i] = z.cage[i];	
}

Zoo& Zoo::operator=(const Zoo& z)
{
	beff = z.beff;
	keff = z.keff;
	for (int i=0;i<beff;++i)
		for (int j=0;j<keff;++j)
			cell[i][j] = z.cell[i][j];
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
	if ((abs<0)||(abs>=z.GetBeff())||(ord<0)||(ord>=z.GetKeff()))
	{
		o << "Input salah" << endl;
		return o;	
	}
	cout << "Absis kanan bawah : "; cin >> abs;
	cout << "Ordinat kanan bawah : "; cin >> ord;
	if ((abs<P1.GetAbsis())||(ord<P1.GetOrdinat())||(abs>=z.GetBeff())||(ord>=z.GetKeff()))
	{
		o << "Input salah" << endl;
		return o;
	}
	P2.SetAbsis(abs); P2.SetOrdinat(ord);
	char m[z.GetBeff()][z.GetKeff()];
	for (int i=P1.GetAbsis();i<=P2.GetAbsis();++i)
		for (int j=P1.GetOrdinat();j<=P2.GetOrdinat();++j)
			m[i][j] = z.cell[i][j].GetRender();
	for (int i=0;i<z.jumlahcage;++i)
	{
		Cage &c = z.GetCage(i);
		for (int j=0;j<c.GetTotalAnimal();++j)
		{
			P3 = c.GetAnimal(j).GetPos();
			m[P3.GetAbsis()][P3.GetOrdinat()] = c.GetAnimal(j).Render();
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
						z.cell[i][j].SetObjectType("LandHabitat");
						if ((i!=0)&&(z.cell[i-1][j].IsLandHabitat()))
						{
							z.SearchPoint(i-1,j).AddPoint(P);
						}
						else if ((j!=0)&&(z.cell[i][j-1].IsLandHabitat()))
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
						z.cell[i][j].SetObjectType("AirHabitat");
						if ((i!=0)&&(z.cell[i-1][j].IsAirHabitat()))
						{
							z.SearchPoint(i-1,j).AddPoint(P);
						}
						else if ((j!=0)&&(z.cell[i][j-1].IsAirHabitat()))
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
						z.cell[i][j].SetObjectType("WaterHabitat");
						if ((i!=0)&&(z.cell[i-1][j].IsWaterHabitat()))
						{
								z.SearchPoint(i-1,j).AddPoint(P);
						}
						else if ((j!=0)&&(z.cell[i][j-1].IsWaterHabitat()))
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
						z.cell[i][j].SetObjectType("Restaurant");
					}
					else if (c=='#')
					{
						z.cell[i][j].SetObjectType("Park");
					}
					else if (c=='+')
					{
						z.cell[i][j].SetObjectType("Road");
					}
					else if (c=='X')
					{
						z.cell[i][j].SetObjectType("Exit");
					}
					else if (c=='Z')
					{
						z.cell[i][j].SetObjectType("Entrance");
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
	int abs, ord, jh;
	ifstream myfile;
	myfile.open("animal.txt");
	while (myfile >> c)
	{
		myfile >> abs;
		myfile >> ord;
		Point p;
		p.SetAbsis(abs-1);
		p.SetOrdinat(ord-1);
		if (c == 'A')
		{	
			string* h;
			jh = 2;
			h = new string[jh];
			h[0] = "Land";
			h[1] = "Water";
			Animal A(p, "Alligator", "Grrrrrr", "Carnivore", h, 125, 6.25, jh, false, c);
			if ((GetElement(abs-1,ord-1).IsLandHabitat())||(GetElement(abs-1,ord-1).IsWaterHabitat()))
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'C')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Cobra", "Ssshh!", "Carnivore", h, 20, 1, jh, false, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'M')
		{
			string* h;
			jh = 2;
			h = new string[jh];
			h[0] = "Air";
			h[1] = "Water";
			Animal A(p, "Cormorant", "Ooookkk!", "Carnivore", h, 3.6, 0.18, jh, true, c);
			if ((GetElement(abs-1,ord-1).IsAirHabitat())||(GetElement(abs-1,ord-1).IsWaterHabitat()))
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'N')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Water";
			Animal A(p, "Dolphin", "A a a a a", "Carnivore", h, 75, 3.75, jh, true, c);
			if (GetElement(abs-1,ord-1).IsWaterHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'D')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Water";
			Animal A(p, "Duck", "Quaackk!", "Omnivore", h, 12, 0.6, jh, true, c);
			if (GetElement(abs-1,ord-1).IsWaterHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'U')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Water";
			Animal A(p, "Dugong", "Splashh!", "Herbivore", h, 500, 25, jh, true, c);
			if (GetElement(abs-1,ord-1).IsWaterHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'E')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Air";
			Animal A(p, "Eagle", "Nguiikk!", "Carnivore", h, 5.8, 0.29, jh, false, c);
			if (GetElement(abs-1,ord-1).IsAirHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'H')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Elephant", "Prett!", "Herbivore", h, 5000, 250, jh, true, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'F')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Giraffe", "Hmm!", "Herbivore", h, 1100, 55, jh, true, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'G')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Goat", "Mbeeeee", "Herbivore", h, 90, 4.5, jh, false, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'I')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Iguana", "Purrrr", "Herbivore", h, 6, 0.3, jh, true, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'J')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Air";
			Animal A(p, "Jalak", "Tweet!", "Herbivore", h, 0.1, 0.005, jh, true, c);
			if (GetElement(abs-1,ord-1).IsAirHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'K')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Komodo", "Slpp!", "Carnivore", h, 120, 6, jh, false, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'L')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Lion", "Roaarr!", "Carnivore", h, 150, 7.5, jh, false, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'R')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Water";
			Animal A(p, "Orca", "Ngiak!", "Carnivore", h, 4000, 200, jh, false, c);
			if (GetElement(abs-1,ord-1).IsWaterHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'O')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Air";
			Animal A(p, "Owl", "Hoot!", "Carnivore", h, 1.5, 0.075, jh, true, c);
			if (GetElement(abs-1,ord-1).IsAirHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'P')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Air";
			Animal A(p, "Parrot", "Cuiitt", "Omnivore", h, 1.2, 0.06, jh, true, c);
			if (GetElement(abs-1,ord-1).IsAirHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'B')
		{
			string* h;
			jh = 2;
			h = new string[jh];
			h[0] = "Land";
			h[1] = "Water";
			Animal A(p, "PolarBear", "Auuummm", "Carnivore", h, 300, 15, jh, false, c);
			if ((GetElement(abs-1,ord-1).IsLandHabitat())||(GetElement(abs-1,ord-1).IsWaterHabitat()))
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'T')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Land";
			Animal A(p, "Tiger", "Growl", "Carnivore", h, 200, 10, jh, false, c);
			if (GetElement(abs-1,ord-1).IsLandHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
		else if (c == 'W')
		{
			string* h;
			jh = 1;
			h = new string[jh];
			h[0] = "Water";
			Animal A(p, "Walrus", "Aaarhhh", "Carnivore", h, 1000, 50, jh, false, c);
			if (GetElement(abs-1,ord-1).IsWaterHabitat())
				SearchPoint(abs-1, ord-1).AdoptAnimal(A);
		}
	}
	myfile.close();
}

Cell& Zoo::GetElement(const Point& P) const
{
	int x = P.GetAbsis(), y = P.GetOrdinat();
	return (cell[x][y]);
}

Cell& Zoo::GetElement(int b,int k) const
{
	return (cell[b][k]);
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