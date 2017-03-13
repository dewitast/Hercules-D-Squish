/**	@file  renderable.h
  */

#ifndef RENDERABLE_H
#define RENDERABLE_H

/** @class Renderable
  * Kelas abstrak Renderable merepresentasikan kode objek yang dapat dicetak
  */
class Renderable {
public:
  /** @brief Render dari objek.
    * @return Mengembalikan char yang merupakan representasi kode objek.
    */
  virtual char Render() = 0;	
};

#endif