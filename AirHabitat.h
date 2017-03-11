#ifndef AIRHABITAT_H
#define AIRHABITAT_H

#include "Habitat.h"

/** @class AirHabitat.
  * Kelas real AirHabitat merupakan simulasi dari habitat udara.
  */

class AirHabitat : public Habitat{
public:
	/** @brief Constructor.
	  * Menciptakan habitat udara.
	  */
	AirHabitat();

	/** @brief Copy Constructor.
	  * @param a Objek yang akan di-copy.
	  */
	AirHabitat(const AirHabitat& a);

	/** @brief Operator =.
	  * @param a Objek yang akan diassign.
	  */
	AirHabitat& operator= (const AirHabitat& a);

	/** @brief Destrutor.
	  */
	~AirHabitat();

	/** @brief Menentukan render dari AirHabitat.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return AH;}
	
private:


};

#endif