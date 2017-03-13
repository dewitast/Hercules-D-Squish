/**	@file	WaterHabitat.h
  */

#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include "Habitat.h"

/** @class WaterHabitat
  * Kelas real WaterHabitat merupakan simulasi dari habitat air
  */
class WaterHabitat : public Habitat{
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode water habitat.
	  */
	char render(){return WH;}

	/** @brief Melakukan cloning untuk menciptakan objek water habitat baru
		@return Mengembalikan pointer to WaterHabitat objek tersebut.
	  */
	virtual WaterHabitat* clone() const {return new WaterHabitat(*this);}

};

#endif