/**@file mainprog.cpp
  */

#include "driver.h"
#include "zoo.h"
#include <iostream>
using namespace std;

int main() {
  int x;
  Driver d;

  cout << "Main Menu:" << endl << "1. Display Zoo" << endl << "2. Tour Around Zoo" << endl;
  cout << "3. Animal's Food Calculation" << endl << "4. Exit" << endl << endl;
  cout << "Input your number of choice here: ";
  cin >> x;
  cout << endl;
  while (x != 4) {
    if (x == 1) {
  	  d.DisplayZoo();
    }
    else if (x == 2){
  	  d.TourZoo();
    }
    else if (x == 3){
  	  cout << "Total food calculation : " << d.FoodCalc() << endl;
    }
    else {
  	  cout << "Your input is invalid. Please choose a number from range 1 to 4." << endl << endl;
    }
    cout << endl;
    cout << "Main Menu:" << endl << "1. Display Zoo" << endl << "2. Tour Around Zoo" << endl;
    cout << "3. Animal's Food Calculation" << endl << "4. Exit" << endl << endl;
    cout << "Input your number of choice here: ";
    cin >> x;
    cout << endl;
  }
  return 0;
}