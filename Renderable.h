#ifndef RENDERABLE_H
#define RENDERABLE_H

/** @class Renderable
  * Kelas abstrak Renderable merepresentasikan objek yang dapat dicetak.
  */
class Renderable{
public:
	/** @brief Mengembalikan char yang merupakan representasi objek ketika dicetak
	  */
	virtual char render() = 0;
protected:
	
};

#endif
