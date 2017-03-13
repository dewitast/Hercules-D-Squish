/**	@file	Cell.h
  */

#ifndef CELL_H
#define CELL_H

#include "renderable.h"

/** @class Cell.
  * Kelas abstrak Cell merupakan simulasi dari petak-petak yang terdapat dalam kebun binatang.
  */
class Cell : public Renderable{
public:
	/** @brief render.
	  * @return Mengembalikan char yang merupakan representasi objek yang dicetak.
	  */
	virtual char render() = 0;

	/** @brief clone.
	  * Melakukan cloning untuk menciptakan objek baru.
	  * @return Mengeluarkan pointer to cell objek tersebut.
	  */
	virtual Cell* clone() const = 0;

	/** @brief IsLandHabitat.
	  * @return Menghasilkan true jika code pada layar merupakan kode Land Habitat.
	  */
	virtual bool IsLandHabitat() = 0;

	/** @brief IsWaterHabitat.
	  * @return Menghasilkan true jika code pada layar merupakan kode Water Habitat.
	  */
	virtual bool IsWaterHabitat() = 0;

	/** @brief IsAirHabitat.
	  * @return Menghasilkan true jika code pada layar merupakan kode Air Habitat.
	  */
	virtual bool IsAirHabitat() = 0;

	/** @brief IsRoad.
	  * @return Menghasilkan true jika code pada layar merupakan kode Road.
	  */
	virtual bool IsRoad() = 0;

	/** @brief IsPark.
	  * @return Menghasilkan true jika code pada layar merupakan kode Park.
	  */
	virtual bool IsPark() = 0;

	/** @brief IsRestaurant.
	  * @return Menghasilkan true jika code pada layar merupakan kode Restaurant.
	  */
	virtual bool IsRestaurant() = 0;

	/** @brief IsExit.
	  * @return Menghasilkan true jika code pada layar merupakan kode Exit.
	  */
	virtual bool IsExit() = 0;

	/** @brief IsEntrance.
	  * @return Menghasilkan true jika code pada layar merupakan kode Entrance.
	  */
	virtual bool IsEntrance() = 0;

	/** @brief IsHabitat.
	  * @return Menghasilkan true jika code pada layar merupakan kode Land, Air, atau Water Habitat.
	  */
	bool IsHabitat() {return ((IsLandHabitat())||(IsWaterHabitat())||(IsAirHabitat()));}

protected:

};

#endif
