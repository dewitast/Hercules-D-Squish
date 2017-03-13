/**	@file	Facility.h
  */

#ifndef FACILITY_H
#define FACILITY_H

#include "../cell/cell.h"

/** @class Facility
  * Kelas abstrak Facility merupakan simulasi dari fasilitas yang terdapat dalam kebun binatang
  */
class Facility : public Cell {
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode objek fasilitas.
	  */
	virtual char Render() = 0;

	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan true jika Facility merupakan Restaurant.
	  */
	virtual bool IsRestaurant() {
		return (Render()==Re);
	}

	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan true jika Facility merupakan Park.
	  */
	virtual bool IsPark() {
		return (Render()==Pa);
	}

	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan true jika Facility merupakan Road, Entrance, atau Exit.
	  */
	virtual bool IsRoad() {
		return ((Render()==Ro)||(Render()==Ent)||(Render()==Ex));
	}

	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan true jika Facility merupakan Entrance.
	  */
	virtual bool IsEntrance() {
		return (Render()==Ent);
	}

	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan true jika Facility merupakan Exit.
	  */
	virtual bool IsExit() {
		return (Render()==Ex);
	}

	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan nilai false.
	  */
	virtual bool IsLandHabitat() {
		return false;
	}

	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan nilai false.
	  */
	virtual bool IsWaterHabitat() {
		return false;
	}
	
	/** @brief Memeriksa kode objek Facility
	  * @return Mengembalikan nilai false.
	  */
	virtual bool IsAirHabitat() {
		return false;
	}

protected:
	static const char Re = 'S'; //representasi Restaurant ketika dicetak ke layar
	static const char Pa = '#'; //representasi Park ketika dicetak ke layar
	static const char Ro = '+'; //representasi Road ketika dicetak ke layar
	static const char Ex = 'X'; //representasi Exit ketika dicetak ke layar
	static const char Ent = 'Z'; //representasi Entrance ketika dicetak ke layar

};

#endif