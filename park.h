/**	@file  park.h
  */

#ifndef PARK_H
#define PARK_H

#include "facility.h"

/** @class Park
  * Kelas Park merepresentasikan fasilitas taman
  */
class Park : public Facility {
public :
  /** @brief Render dari Park.
    * @return Mengembalikan char yang merupakan representasi kode Park.
    */
  char Render() {
  	return Pa;
  }
  /** @brief Melakukan cloning untuk menciptakan objek Park baru.
    * @return Mengembalikan pointer to Park objek tersebut.
    */
  virtual Park* Clone() const {
  	return new Park(*this);
  }
};

#endif