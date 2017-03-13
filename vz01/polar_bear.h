/**	@file  polar_bear.h
  */

#ifndef POLARBEAR_H
#define POLARBEAR_H

#include "land_animal.h"
#include "mammal.h"

/** @class PolarBear
  * kelas PolarBear merupakan kelas untuk real object PolarBear
  */
class PolarBear : public LandAnimal, public Mammal {
public:
  /** @brief Constructor.
    * Menciptakan objek PolarBear.
    */
  PolarBear() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~PolarBear() {}
  /** @brief Interaksi yang dilakukan PolarBear.
    * @return Mengembalikan string yang merepresentasikan suara PolarBear.
    */
  string Interact() {
  	return ("Auuummm");
  }
  /** @brief Melakukan cloning untuk menciptakan objek PolarBear baru.
    * @return Mengembalikan pointer to PolarBear objek tersebut.
    */
  virtual PolarBear* Clone() const {
  	return new PolarBear(*this);
  }
  /** @brief Render dari PolarBear.
    * @return Mengembalikan char yang merupakan representasi kode PolarBear.
    */
  char Render() {
  	return 'B';
  }
};

#endif