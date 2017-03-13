/**	@file	Road.h
  */

#ifndef ROAD_H
#define ROAD_H

#include "Facility.h"

/** @class Road
  * Kelas Road merepresentasikan fasilitas jalan
  */
class Road : public Facility {
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Road.
	  */
	virtual char render() {return Ro;}

	/** @brief Melakukan cloning untuk menciptakan objek Road baru
	  * @return Mengembalikan pointer to Road objek tersebut.
	  */
	virtual Road* clone() const {return new Road(*this);}

	/** @brief Integer dummy
	  * @return Mengembalikan nilai 0.
	  */
	int dummy() {return 0;}
	
};

#endif