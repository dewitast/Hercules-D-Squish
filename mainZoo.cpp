#include "Driver.h"
#include <fstream>
using namespace std;

int main()
{
	Zoo z;
	ifstream fin;
	fin.open("map.txt");
	fin >> z;
	fin.close();
	cout << 1 << endl;
	cout << z;
	Driver hot;
	hot.DisplayZoo();
	return 0;
}