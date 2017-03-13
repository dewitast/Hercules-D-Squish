/**	@file  Elephant.h
  */

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "land_animal.h"
#include "herbivore.h"
#include "mammal.h"

/** @class Elephant
  * Kelas Elephant merupakan kelas untuk real object Elephant
  */
class Elephant : public LandAnimal, public Herbivore, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Elephant.
    */
  Elephant() : Animal(5000,250,true) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Elephant dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Elephant.
    * @param f Jumlah makanan Elephant.
    * @param t Status jinak Elephant.
    */
  Elephant(float w, float f, bool t) : Animal(w,f,t) {}
  /** @brief Destructor.
    */
  virtual ~Elephant() {}
  /** @brief Interaksi yang dilakukan Elephant.
    * @return Mengembalikan string yang merepresentasikan suara Elephant.
    */
  string Interact() {
  	return ("Prett!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Elephant baru.
    * @return Mengembalikan pointer to Elephant objek tersebut.
    */
  virtual Elephant* Clone() const {
  	return new Elephant(*this);
  }
  /** @brief Render dari Elephant.
    * @return Mengembalikan char yang merupakan representasi kode Elephant.
    */
  char Render() {
  	return 'H';
  }	
};

#endif