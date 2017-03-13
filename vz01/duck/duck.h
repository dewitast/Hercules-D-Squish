/**	@file  duck.h
  */

#ifndef DUCK_H
#define DUCK_H

#include "../aves/aves.h"
#include "../water_animal/water_animal.h"

/** @class Duck
  * Kelas Duck merupakan kelas untuk real object Duck
  */
class Duck : public WaterAnimal, public Aves {
public :
  /** @brief Constructor.
    * Menciptakan objek Duck.
    */
  Duck() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Duck() {}
  /** @brief Interaksi yang dilakukan Duck.
    * @return Mengembalikan string yang merepresentasikan suara Duck.
    */
  string Interact() {
  	return ("Quaackk!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Duck baru.
    * @return Mengembalikan pointer to Duck objek tersebut.
    */
  virtual Duck* Clone() const {
  	return new Duck(*this);
  }
  /** @brief Render dari Duck.
    * @return Mengembalikan char yang merupakan representasi kode Duck.
    */
  char Render() {
  	return 'D';
  }
};

#endif