/**	@file  land_habitat.h
  */

#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include "habitat.h"

/** @class LandHabitat
  * Kelas real LandHabitat merupakan simulasi dari habitat darat
  */
class LandHabitat : public Habitat {
public :
  /** @brief Render dari LandHabitat.
    * @return Mengembalikan char yang merupakan representasi kode LandHabitat.
    */
  char Render() {
  	return LH;
  }
  /** @brief Melakukan cloning untuk menciptakan objek LandHabitat baru.
    * @return Mengembalikan pointer to LandHabitat objek tersebut.
    */
  virtual LandHabitat* Clone() const {
  	return new LandHabitat(*this);
  }
};

#endif