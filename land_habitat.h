/**	@file	LandHabitat.h
  */

#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include "Habitat.h"

/** @class LandHabitat
  * Kelas real LandHabitat merupakan simulasi dari habitat darat
  */
class LandHabitat : public Habitat{
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode land habitat.
	  */
	char render(){return LH;}

	/** @brief Melakukan cloning untuk menciptakan objek water habitat baru
	  * @return Mengembalikan pointer to LandHabitat objek tersebut.
	  */
	virtual LandHabitat* clone() const {return new LandHabitat(*this);}

};

#endif