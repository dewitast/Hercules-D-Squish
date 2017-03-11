#ifndef ROAD_H
#define ROAD_H

#include "Facility.h"

/** @class Road.
  * Kelas Road merepresentasikan fasilitas jalan.
  */
class Road : public Facility
{
public:
	/** @brief Menentukan render dari Road.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	virtual char render() {return Ro;}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to Road objek tersebut
	  */
	virtual Road* clone() const {return new Road(*this);}
	
protected:
};

#endif
