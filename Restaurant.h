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
	
private:

};

#endif
