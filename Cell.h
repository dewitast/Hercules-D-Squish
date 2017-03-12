/**	@file	Cell.h
  */

#ifndef CELL_H
#define CELL_H

#include "Renderable.h"

/** @class Cell.
  * Kelas abstrak Cell merupakan simulasi dari petak-petak yang terdapat dalam kebun binatang.
  */
class Cell : public Renderable{
public:
	/** @brief render.
	  * @return Mengembalikan char yang merupakan representasi objek yang dicetak.
	  */
	virtual char render() = 0;

	/** @brief clone.
	  * Melakukan cloning untuk menciptakan objek baru.
	  * @return Mengeluarkan pointer to cell objek tersebut.
	  */
	virtual Cell* clone() const = 0;

protected:

};

#endif
