/**	@file	Renderable.h
  */

#ifndef RENDERABLE_H
#define RENDERABLE_H

/** @class Renderable
  * Kelas abstrak Renderable merepresentasikan kode objek yang dapat dicetak
  */
class Renderable {
public:
	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode objek.
	  */
	virtual char render() = 0;
	
};

#endif