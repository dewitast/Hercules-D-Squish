#ifndef CELL_H
#define CELL_H

#include "Renderable.h"

/** @class Cell.
  * Kelas abstrak Cell merupakan simulasi dari petak-petak yang terdapat dalam kebun binatang.
  */

class Cell : public Renderable{
public:
	char render();
protected:

};

#endif