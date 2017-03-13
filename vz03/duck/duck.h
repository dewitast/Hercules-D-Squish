/**	@file  duck.h
  */

#ifndef DUCK_H
#define DUCK_H

#include "aves.h"
#include "omnivore.h"
#include "water_animal.h"

/** @class Duck
  * Kelas Duck merupakan kelas untuk real object Duck
  */
class Duck : public WaterAnimal, public Omnivore, public Aves {
public :
  /** @brief Constructor.
    * Menciptakan objek Duck.
    */
  Duck() : Animal(12,0.6,true) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Duck dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Duck.
    * @param k Jumlah makanan Duck.
    * @param t Status jinak Duck.
    */
  Duck(float w, float f, bool t) : Animal(w,f,t) {}
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