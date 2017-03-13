/**	@file  exit.h
  */

#ifndef EXIT_H
#define EXIT_H

#include "road.h"

/** @class Exit
  * Kelas Exit melambangkan jalan yang merupakan jalan keluar
  */
class Exit : public Road {
public :
  /** @brief Render dari Exit.
    * @return Mengembalikan char yang merupakan representasi kode Exit.
    */
  char Render() {
  	return Ex;
  }
  /** @brief Melakukan cloning untuk menciptakan objek Exit baru.
    * @return Mengembalikan pointer to Exit objek tersebut.
    */
  virtual Exit* Clone() const {
  	return new Exit(*this);
  }
};

#endif