/**	@file  parrot.h
  */

#ifndef PARROT_H
#define PARROT_H

#include "flying_animal.h"
#include "aves.h"

/** @class Parrot
  * kelas Parrot merupakan kelas untuk real object Parrot
  */
class Parrot : public FlyingAnimal, public Omnivore, public Aves {
public :
  /** @brief Constructor.
	* Menciptakan objek Parrot.
	*/
  Parrot() : Animal() {}
  /** @brief Destructor.
	*/
  virtual ~Parrot() {}
  /** @brief Interaksi yang dilakukan Parrot.
	* @return Mengembalikan string yang merepresentasikan suara Parrot.
	*/
  string Interact() {
  	return ("Cuiitt");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Parrot baru.
	* @return Mengembalikan pointer to Parrot objek tersebut.
	*/
  virtual Parrot* Clone() const {
  	return new Parrot(*this);
  }
  /** @brief Render dari Parrot.
	* @return Mengembalikan char yang merupakan representasi kode Parrot.
	*/
  char Render() {
  	return 'P';
  }
};

#endif