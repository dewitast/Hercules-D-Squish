/**	@file  Goat.h
  */

#ifndef GOAT_H
#define GOAT_H

#include "land_animal.h"
#include "mammal.h"

/** @class Goat
  * Kelas Goat merupakan kelas untuk real object Goat
  */
class Goat : public LandAnimal, public Mammal {
public:
  /** @brief Constructor.
    * Menciptakan objek Goat.
    */
  Goat() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Goat() {}
  /** @brief Interaksi yang dilakukan Goat.
    * @return Mengembalikan string yang merepresentasikan suara Goat.
    */
  string Interact() {
  	return ("Mbeeeee");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Goat baru.
    * @return Mengembalikan pointer to Goat objek tersebut.
    */
  virtual Goat* Clone() const {
  	return new Goat(*this);
  }
  /** @brief Render dari Goat.
    * @return Mengembalikan char yang merupakan representasi kode Goat.
    */
  char Render() {
  	return 'G';
  }
};

#endif