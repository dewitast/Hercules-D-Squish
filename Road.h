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
	
protected:
};

#endif
