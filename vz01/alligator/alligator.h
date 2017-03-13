/**	@file  alligator.h
  */

#ifndef ALLIGATOR_H
#define ALLIGATOR_H

#include "../water_animal/water_animal.h"
#include "../reptile/reptile.h"

/** @class Alligator
  * Kelas Alligator merupakan kelas untuk real object Alligator
  */
class Alligator : public WaterAnimal, public Reptile {
public :
  /** @brief Constructor.
    * Menciptakan objek Alligator.
    */
  Alligator() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Alligator() {}
  /** @brief Interaksi yang dilakukan Alligator.
    * @return Mengembalikan string yang merepresentasikan suara Alligator.
    */
  string Interact() {
  	return ("Grrrrrr");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Alligator baru.
    * @return Mengembalikan pointer to Alligator objek tersebut.
    */
  virtual Alligator* Clone() const {
  	return new Alligator(*this);
  }
  /** @brief Render dari Alligator.
    * @return Mengembalikan char yang merupakan representasi kode Alligator.
    */
  char Render() {
  	return 'A';
  }
};

#endif
