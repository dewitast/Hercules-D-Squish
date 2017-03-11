#ifndef ENTRANCE_H
#define ENTRANCE_H

#include "Road.h"

/** @class Entrance.
  * Kelas Entrance melambangkan jalan yang merupakan jalan masuk.
  */
class Entrance : public Road
{
public:
	/** @brief Menentukan render dari Entrance.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render() {return Ent;}

private:

};

#endif
