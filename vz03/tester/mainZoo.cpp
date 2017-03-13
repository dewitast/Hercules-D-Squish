#include "zoo.h"
#include "driver.h"
#include <fstream>
using namespace std;

int main()
{
	/*Zoo Z;
	ifstream fin;
	fin.open("map.txt");
	fin >> Z;
	fin.close();
	Z.ReadAnimal();
	cout << Z;*/
	Driver D;
	D.DisplayZoo();


	return 0;
}