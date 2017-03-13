/**	@file  dugong.h
  */

#ifndef DUGONG_H
#define DUGONG_H

#include "mammal.h"
#include "water_animal.h"

/** @class Dugong
  * Kelas Dugong merupakan kelas untuk real object Dugong
  */
class Dugong : public WaterAnimal, public Mammal{
public:
  /** @brief Constructor.
    * Menciptakan objek Dugong.
    */
  Dugong() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Dugong() {}
  /** @brief Interaksi yang dilakukan Dugong.
    * @return Mengembalikan string yang merepresentasikan suara Dugong.
    */
  string Interact() {
  	return ("Splashh!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Dugong baru.
    * @return Mengembalikan pointer to Dugong objek tersebut.
    */
  virtual Dugong* Clone() const {
  	return new Dugong(*this);
  }
  /** @brief Render dari Dugong.
    * @return Mengembalikan char yang merupakan representasi kode Dugong.
    */
  char Render() {
  	return 'U';
  }
};

#endif