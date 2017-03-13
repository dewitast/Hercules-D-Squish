/**	@file  restaurant.h
  */

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "facility.h"

/** @class Restaurant
  * Kelas Restaurant merepresentasikan fasilitas restoran
  */
class Restaurant : public Facility {
public :
  /** @brief Render dari Restaurant.
    * @return Mengembalikan char yang merupakan representasi kode Restaurant.
    */
  char Render() {
  	return Re;
  }
  /** @brief Melakukan cloning untuk menciptakan objek Restaurant baru.
    * @return Mengembalikan pointer to Restaurant objek tersebut.
    */
  virtual Restaurant* Clone() const {
  	return new Restaurant(*this);
  }
};

#endif