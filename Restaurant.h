#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Facility.h"

/** @class Restaurant.
  * Kelas Restaurant merepresentasikan fasilitas restoran.
  */
class Restaurant : public Facility
{
public:
	/** @brief Menentukan render dari Restaurant.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render() {return Re;}
	
	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to Restaurant objek tersebut
	  */
	virtual Restaurant* clone() const {return new Restaurant(*this);}

private:

};

#endif
