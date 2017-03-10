#ifndef CELL_H
#define CELL_H

#include "Renderable.h"

/** @class Cell.
  * Kelas abstrak Cell merupakan simulasi dari petak-petak yang terdapat dalam kebun binatang.
  */
class Cell : public Renderable{
public:
	/** @brief Mengembalikan char yang merupakan representasi objek ketika dicetak
	  */
	virtual char render() = 0;
protected:

};

#endif
