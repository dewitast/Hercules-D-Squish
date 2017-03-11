#include <iostream>
using namespace std;
#include "Tiger.h"
#include "Point.h"

int main()
{
	Tiger T;
	cout << T.GetWeight() << endl;
	cout << T.GetFood() << endl;
	cout << T.GetTame() << endl;
	cout << T.GetPos().GetAbsis() << endl;
	cout << T.GetPos().GetOrdinat() << endl;
	return 0;
}