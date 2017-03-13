/**	@file  tiger.h
  */

#ifndef TIGER_H
#define TIGER_H

#include "land_animal.h"
#include "mammal.h"

/** @class Tiger
  * kelas Tiger merupakan kelas untuk real object Tiger
  */
class Tiger : public LandAnimal, public Mammal {
public:
  /** @brief Constructor.
    * Menciptakan objek Tiger.
    */
  Tiger() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Tiger() {}
  /** @brief Interaksi yang dilakukan Tiger.
    * @return Mengembalikan string yang merepresentasikan suara Tiger.
    */
  string Interact() {
  	return ("Growl");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Tiger baru.
    * @return Mengembalikan pointer to Tiger objek tersebut.
    */
  virtual Tiger* Clone() const {
  	return new Tiger(*this);
  }
  /** @brief Render dari Tiger.
    * @return Mengembalikan char yang merupakan representasi kode Tiger.
    */
  char Render() {
  	return 'T';
  }
};

#endif