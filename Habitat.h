#ifndef HABITAT_H
#define HABITAT_H

#include "Cell.h"

/** @class Habitat.
  * Kelas abstrak Habitat merupakan simulasi dari habitat.
  */

class Habitat : public Cell{
public:
	/** @brief Menentukan render dari Habitat.
	  * @return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	virtual char render() = 0;

	/** @brief Menentukan apakah Habitat merupakan LandHabitat.
	  * @return Mengembalikan true jika Habitat merupakan LandHabitat.
	  */
	virtual bool IsLandHabitat(){return (render()==LH);}

	/** @brief Menentukan apakah Habitat merupakan WaterHabitat.
	  * @return Mengembalikan true jika Habitat merupakan WaterHabitat.
	  */
	virtual bool IsWaterHabitat(){return (render()==WH);}

	/** @brief Menentukan apakah Habitat merupakan AirHabitat.
	  * @return Mengembalikan true jika Habitat merupakan AirHabitat
	  */
	virtual bool IsAirHabitat(){return (render()==AH);}

	virtual bool IsEntrance() {return false;}

	virtual bool IsExit() {return false;}

	virtual bool IsRestaurant() {return false;}

	virtual bool IsPark() {return false;}

	virtual bool IsRoad() {return false;}
protected:
	static const char LH = 'L'; //representasi LandHabitat ketika dicetak ke layar
	static const char AH = 'A'; //representasi AirHabitat ketika dicetak ke layar
	static const char WH = 'W'; //representasi WaterHabitat ketika dicetak ke layar
};

#endif