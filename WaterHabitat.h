#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include "Habitat.h"

/** @class WaterHabitat.
  * Kelas real WaterHabitat merupakan simulasi dari habitat air.
  */
class WaterHabitat : public Habitat{
public:
	/** @brief Constructor.
	  * Menciptakan habitat air.
	  */
	WaterHabitat();

	/** @brief Copy Constructor.
	  * @param a Objek yang akan di-copy.
	  */
	WaterHabitat(const WaterHabitat& a);

	/** @brief Operator =.
	  * @param a Objek yang akan diassign.
	  */
	WaterHabitat& operator= (const WaterHabitat& a);

	/** @brief Destrutor.
	  */
	~WaterHabitat();

	/** @brief Menentukan render dari WaterHabitat.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return WH;}
protected:


};

#endif