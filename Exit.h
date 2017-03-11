#ifndef EXIT_H
#define EXIT_H

#include "Road.h"

/** @class Exit.
  * Kelas Exit melambangkan jalan yang merupakan jalan keluar.
  */
class Exit : public Road
{
public:
	/** @brief Menentukan render dari Exit.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render() {return Ex;}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to Exit objek tersebut
	  */
	virtual Exit* clone() const {return new Exit(*this);}

private:

};

#endif
