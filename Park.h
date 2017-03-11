#ifndef PARK_H
#define PARK_H

#include "Facility.h"

/** @class Park.
  * Kelas Park merepresentasikan fasilitas taman.
  */
class Park : public Facility
{
public:
	/** @brief Menentukan render dari Park.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render() {return Pa;}

private:

};

#endif
