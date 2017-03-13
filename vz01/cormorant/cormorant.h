/**	@file  cormorant.h
  */

#ifndef CORMORANT_H
#define CORMORANT_H

#include "aves.h"
#include "flying_animal.h"

/** @class Cormorant
  * Kelas Cormorant merupakan kelas untuk real object Cormorant
  */
class Cormorant : public FlyingAnimal, public Aves {
public :
  /** @brief Constructor.
    * Menciptakan objek Cormorant.
    */
  Cormorant() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Cormorant() {}
  /** @brief Interaksi yang dilakukan Cormorant.
    * @return Mengembalikan string yang merepresentasikan suara Cormorant.
    */
  string Interact() {
  	return ("Ooookkk!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Cormorant baru.
    * @return Mengembalikan pointer to Cormorant objek tersebut.
    */
  virtual Cormorant* Clone() const {
  	return new Cormorant(*this);
  }
  /** @brief Render dari Cormorant.
    * @return Mengembalikan char yang merupakan representasi kode Cormorant.
	*/
  char Render() {
  	return 'M';
  }
};

#endif