/**	@file  air_habitat.h
  */

#ifndef AIRHABITAT_H
#define AIRHABITAT_H

#include "../habitat/habitat.h"

/** @class AirHabitat
  * Kelas real AirHabitat merupakan simulasi dari habitat udara
  */
class AirHabitat : public Habitat {
public :
  /** @brief Render dari AirHabitat.
    * @return Mengembalikan char yang merupakan representasi kode AirHabitat.
    */
  char Render() {
  	return AH;
  }
  /** @brief Melakukan cloning untuk menciptakan objek AirHabitat baru.
    * @return Mengembalikan pointer to AirHabitat objek tersebut.
    */
  virtual AirHabitat* Clone() const {
  	return new AirHabitat(*this);
  }
};

#endif