#include "Zoo.h"
#include <fstream>
using namespace std;

int main()
{
	Zoo z;
	cout << "tes" << endl;
	ifstream fin;
	fin.open("map.txt");
	fin >> z;
	fin.close();
	cout << 1 << endl;
	cout << z;
	Zoo z2=z;
	cout << z2;
	Zoo z3;
	z3 = z2;
	cout << z3;
	return 0;
}