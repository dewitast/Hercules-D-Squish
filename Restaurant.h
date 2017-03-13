/**	@file	Restaurant.h
  */

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Facility.h"

/** @class Restaurant
  * Kelas Restaurant merepresentasikan fasilitas restoran
  */
class Restaurant : public Facility {
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Restaurant.
	  */
	char render() {return Re;}
	
	/** @brief Melakukan cloning untuk menciptakan objek Restaurant baru
	  * @return Mengembalikan pointer to Restaurant objek tersebut.
	  */
	virtual Restaurant* clone() const {return new Restaurant(*this);}

};

#endif