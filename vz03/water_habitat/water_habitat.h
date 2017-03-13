/**	@file	water_habitat.h
  */

#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include "../habitat/habitat.h"

/** @class WaterHabitat
  * Kelas real WaterHabitat merupakan simulasi dari habitat air
  */
class WaterHabitat : public Habitat {
public :
  /** @brief Render dari WaterHabitat.
    * @return Mengembalikan char yang merupakan representasi kode WaterHabitat.
    */
  char Render() {
  	return WH;
  }
  /** @brief Melakukan cloning untuk menciptakan objek WaterHabitat baru.
    * @return Mengembalikan pointer to WaterHabitat objek tersebut.
    */
  virtual WaterHabitat* Clone() const {
  	return new WaterHabitat(*this);
  }
};

#endif