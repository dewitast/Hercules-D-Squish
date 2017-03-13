/**	@file  Jalak.h
  */

#ifndef JALAK_H
#define JALAK_H

#include "flying_animal.h"
#include "aves.h"

/** @class Jalak
  * Kelas Jalak merupakan kelas untuk real object Jalak
  */
class Jalak : public FlyingAnimal, public Aves {
public :
  /** @brief Constructor.
    * Menciptakan objek Jalak.
    */
  Jalak() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Jalak() {}
  /** @brief Interaksi yang dilakukan Jalak.
    * @return Mengembalikan string yang merepresentasikan suara Jalak.
    */
  string Interact() {
  	return ("Tweet!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Jalak baru.
    * @return Mengembalikan pointer to Jalak objek tersebut.
    */
  virtual Jalak* Clone() const {
  	return new Jalak(*this);
  }
  /** @brief Render dari Jalak.
    * @return Mengembalikan char yang merupakan representasi kode Jalak.
    */
  char Render() {
  	return 'J';
  }
};

#endif