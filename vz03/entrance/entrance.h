/**	@file  entrance.h
  */

#ifndef ENTRANCE_H
#define ENTRANCE_H

#include "road.h"

/** @class Entrance
  * Kelas Entrance melambangkan jalan yang merupakan jalan masuk
  */
class Entrance : public Road {
public :
  /** @brief Render dari Entrance.
    * @return Mengembalikan char yang merupakan representasi kode Entrance.
    */
  char Render() {
  	return Ent;
  }
  /** @brief Melakukan cloning untuk menciptakan objek Entrance baru.
    * @return Mengembalikan pointer to Entrance objek tersebut.
    */
  virtual Entrance* Clone() const {
  	return new Entrance(*this);
  }
};

#endif