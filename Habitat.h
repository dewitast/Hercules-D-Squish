#ifndef HABITAT_H
#define HABITAT_H

#include "Cell.h"

/** @class Habitat.
  * Kelas abstrak Habitat merupakan simulasi dari habitat.
  */

class Habitat : public Cell{
public:
	/** @brief Mengembalikan char yang merupakan representasi objek ketika dicetak
	  */
	virtual char render() = 0;

	/** @brief Mengembalikan true jika Habitat merupakan LandHabitat
	  */
	bool IsLand(){return (render()==LH);}
	/** @brief Mengembalikan true jika Habitat merupakan WaterHabitat
	  */
	bool IsWater(){return (render()==WH);}
	/** @brief Mengembalikan true jika Habitat merupakan AirHabitat
	  */
	bool IsAir(){return (render()==AH);}
protected:
	const char LH = 'L';
	const char AH = 'A';
	const char WH = 'W';
};

#endif