#ifndef FACILITY_H
#define FACILITY_H

#include "Cell.h"

/** @class Facility.
  * Kelas abstrak Facility merupakan simulasi dari fasilitas yang terdapat dalam kebun binatang.
  */

class Facility : public Cell{
public:
	/** @brief Menentukan render dari Facility.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	virtual char render() = 0;

	/** @brief Menentukan apakah Facility merupakan Restaurant.
		@return Mengembalikan true jika Facility merupakan Restaurant.
	  */
	bool IsRestaurant(){return (render()==Re);}

	/** @brief Menentukan apakah Facility merupakan Park.
		@return Mengembalikan true jika Facility merupakan Park.
	  */
	bool IsPark(){return (render()==Pa);}

	/** @brief Menentukan apakah Facility merupakan Road.
		@return Mengembalikan true jika Facility merupakan Road.
	  */
	bool IsRoad(){return (render()==Ro);}

	/** @brief Menentukan apakah Facility merupakan Entrance.
		@return Mengembalikan true jika Facility merupakan Entrance.
	  */
	bool IsEntrance(){return (render()==Ent);}

	/** @brief Menentukan apakah Facility merupakan Exit.
		@return Mengembalikan true jika Facility merupakan Exit.
	  */
	bool IsExit(){return (render()==Ex);}

protected:
	static const char Re = 'S'; //representasi Restaurant ketika dicetak ke layar
	static const char Pa = '#'; //representasi Park ketika dicetak ke layar
	static const char Ro = '+'; //representasi Road ketika dicetak ke layar
	static const char Ex = 'X'; //representasi Exit ketika dicetak ke layar
	static const char Ent = 'Z'; //representasi Entrance ketika dicetak ke layar
};

#endif