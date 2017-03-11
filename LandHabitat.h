#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include "Habitat.h"

/** @class LandHabitat.
  * Kelas real LandHabitat merupakan simulasi dari habitat darat.
  */
class LandHabitat : public Habitat{
public:
	/** @brief Menentukan render dari LandHabitat.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return LH;}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to LandHabitat objek tersebut
	  */
	virtual LandHabitat* clone() const {return new LandHabitat(*this);}
	
protected:

};

#endif