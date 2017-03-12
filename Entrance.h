/**	@file	Entrance.h
  */

#ifndef ENTRANCE_H
#define ENTRANCE_H

#include "Road.h"

/** @class Entrance
  * Kelas Entrance melambangkan jalan yang merupakan jalan masuk
  */
class Entrance : public Road {
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode entrance.
	  */
	char render() {return Ent;}

	/** @brief Melakukan cloning untuk menciptakan objek entrance baru
	  * @return Mengembalikan pointer to Entrance objek tersebut.
	  */
	virtual Entrance* clone() const {return new Entrance(*this);}

};

#endif