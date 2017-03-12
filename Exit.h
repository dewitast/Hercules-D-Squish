/**	@file	Exit.h
  */

#ifndef EXIT_H
#define EXIT_H

#include "Road.h"

/** @class Exit
  * Kelas Exit melambangkan jalan yang merupakan jalan keluar
  */
class Exit : public Road{
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Exit.
	  */
	char render() {return Ex;}

	/** @brief Melakukan cloning untuk menciptakan objek Exit baru
	  * @return Mengembalikan pointer to Exit objek tersebut.
	  */
	virtual Exit* clone() const {return new Exit(*this);}

};

#endif