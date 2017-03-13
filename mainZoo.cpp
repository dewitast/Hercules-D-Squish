#include "Zoo.h"
#include <fstream>
using namespace std;

int main()
{
	Zoo Z;
	ifstream fin;
	fin.open("map.txt");
	fin >> Z;
	fin.close();
	Z.ReadAnimal();
	for(int i=0;i<Z.GetJumlahCage();i++)
		{
			for(int j=0;j<(Z.GetCage(i)).GetTotalAnimal();j++)
			{
				cout << Z;
			}
		}

	return 0;
}