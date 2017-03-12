// file Driver.cpp

#include "Driver.h"
#include <fstream>

	Driver::Driver()
	{
		ifstream myfile;
		myfile.open("map.txt");
		myfile >> Z;
		myfile.close();
	}

	void Driver::DisplayZoo()
	{
		cout << Z;
	}
	
	void Driver::TourZoo()
	{}
	
	float Driver::FoodCalc()
	{
		float sum = 0;
		for(int i=0;i<Z.jumlahcage;i++)
		{
			for(int j=0;j<(Z.cage[i]).TotalAnimal;j++)
			{
				sum += (Z.cage[i]).a[i][j].GetFood();
			}
		}
		return sum;
	}
	Driver::~Driver()
	{
		
	}