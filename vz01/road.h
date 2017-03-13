/**	@file road.h
  */

#ifndef ROAD_H
#define ROAD_H

#include "facility.h"

/** @class Road
  * Kelas Road merepresentasikan fasilitas jalan
  */
class Road : public Facility {
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Road.
	  */
	virtual char Render() {
		return Ro;
	}
	/** @brief Melakukan cloning untuk menciptakan objek Road baru
	  * @return Mengembalikan pointer to Road objek tersebut.
	  */
	virtual Road* Clone() const {
		return new Road(*this);
	}
};

#endif