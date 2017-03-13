/**@file mainprog.cpp
  */

#include "Driver.h"
#include "Zoo.h"
#include <iostream>
using namespace std;

int main() {
  int x;
  Driver d;

  cout << "Main Menu:" << endl << "1. Display Zoo" << endl << "2. Tour Around Zoo" << endl;
  cout << "3. Animal's Food Calculation" << endl << "4. Exit" << endl << endl;
  cout << "Input your number of choice here: ";
  cin >> x;
  while (x != 4) {
    if (x == 1) {
  	  d.DisplayZoo();
    }
    else if (x == 2){
  	  d.TourZoo();
    }
    else if (x == 3){
  	  d.FoodCalc();
    }
    else {
  	  cout << "Your input is invalid. Please choose a number from range 1 to 4." << endl << endl;
    }
    cout << "Main Menu:" << endl << "1. Display Zoo" << endl << "2. Tour Around Zoo" << endl;
    cout << "3. Animal's Food Calculation" << endl << "4. Exit" << endl << endl;
    cout << "Input your number of choice here: ";
    cin >> x;
  }
  return 0;
}