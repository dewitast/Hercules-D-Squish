#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include "Habitat.h"

/** @class WaterHabitat.
  * Kelas real WaterHabitat merupakan simulasi dari habitat air.
  */
class WaterHabitat : public Habitat{
public:
	/** @brief Menentukan render dari WaterHabitat.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return WH;}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to WaterHabitat objek tersebut
	  */
	virtual WaterHabitat* clone() const {return new WaterHabitat(*this);}
protected:


};

#endif