#include "Zoo.h"
#include <iostream>
using namespace std;

int main()
{
	Zoo Z;
	Z.ReadAnimal();
	for(int i=0;i<Z.GetJumlahCage();i++)
		{
			for(int j=0;j<(Z.GetCage(i)).GetTotalAnimal();j++)
			{
				operator<<(ostream& o, Z);
			}
		}

	return 0;
}