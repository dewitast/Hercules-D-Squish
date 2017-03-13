/**@file mainprog.cpp
  */

#include "../driver/driver.h"
#include "../zoo/zoo.h"
#include <iostream>
using namespace std;

int main() {
  int x;
  Driver d;

  cout << d.GetZoo().GetBeff() << endl;
  cout << d.GetZoo().GetKeff() << endl;

  d.DisplayMenu();
  cin >> x;
  cout << endl;
  while (x != 4) {
    if (x == 1) {
  	  d.DisplayZoo();
    }
    else if (x == 2){
      d.TourZoo();
      while (!d.GetZoo().GetElement(d.GetPoint()).IsExit()) {
  	    d.TourZoo();
  	  }
  	d.GetPoint().SetAbsis(-1);
	  d.GetPoint().SetOrdinat(-1);
    }
    else if (x == 3){
  	  cout << "Total food calculation : " << d.FoodCalc() << endl;
    }
    else {
  	  cout << "Your input is invalid. Please choose a number from range 1 to 4." << endl << endl;
    }
    d.DisplayMenu();
    cin >> x;
    cout << endl;
  }
  return 0;
}