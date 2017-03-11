#ifndef AIRHABITAT_H
#define AIRHABITAT_H

#include "Habitat.h"

/** @class AirHabitat.
  * Kelas real AirHabitat merupakan simulasi dari habitat udara.
  */

class AirHabitat : public Habitat{
public:
	/** @brief Menentukan render dari AirHabitat.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return AH;}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to AirHabitat objek tersebut
	  */
	virtual AirHabitat* clone() const {return new AirHabitat(*this);}
	
private:


};

#endif