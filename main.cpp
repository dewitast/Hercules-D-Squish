#include "Habitat.h"
#include "LandHabitat.h"
#include "WaterHabitat.h"
#include "AirHabitat.h"
#include <iostream>
using namespace std;

int main()
{
	LandHabitat L;
	cout << L.IsLand() << endl;
	cout << L.IsAir() << endl;
	cout << L.IsWater() << endl;
	AirHabitat A;
	cout << A.IsWater() << endl;
	cout << A.IsLand() << endl;
	cout << A.IsAir() << endl;
	return 0;
}