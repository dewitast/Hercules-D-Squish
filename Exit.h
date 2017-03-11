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
private:

};

#endif
