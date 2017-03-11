#ifndef CELL_H
#define CELL_H

#include "Renderable.h"

/** @class Cell.
  * Kelas abstrak Cell merupakan simulasi dari petak-petak yang terdapat dalam kebun binatang.
  */
class Cell : public Renderable{
public:
	/** @brief Menentukan char yang akan dicetak oleh Cell.
		@return Mengembalikan char yang merupakan representasi objek ketika dicetak
	  */
	virtual char render() = 0;

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to cell objek tersebut
	  */
	virtual Cell* clone() const = 0;

protected:

};

#endif
