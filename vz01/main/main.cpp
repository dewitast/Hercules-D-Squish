/**@file mainprog.cpp
  */

#include "../driver/driver.h"
#include "../zoo/zoo.h"
#include <iostream>
using namespace std;

int main() {
  int x;
  Driver d;

  d.DisplayMenu();
  cin >> x;
  cout << endl;
  while (x != 3) {
    if (x == 1) {
  	  d.DisplayZoo();
    }
    else if (x == 2){
      d.TourZoo();
      while (d.GetPoint().GetAbsis()!=-1) {
  	    d.TourZoo();
  	  }
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