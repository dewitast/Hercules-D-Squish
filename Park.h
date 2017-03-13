/**	@file	Park.h
  */

#ifndef PARK_H
#define PARK_H

#include "Facility.h"

/** @class Park
  * Kelas Park merepresentasikan fasilitas taman
  */
class Park : public Facility {
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Park.
	  */
	char render() {return Pa;}

	/** @brief Melakukan cloning untuk menciptakan objek Park baru
	  * @return Mengembalikan pointer to Park objek tersebut.
	  */
	virtual Park* clone() const {return new Park(*this);}

};

#endif