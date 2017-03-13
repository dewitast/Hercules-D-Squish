/**	@file  Elephant.h
  */

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Elephant
  * Kelas Elephant merupakan kelas untuk real object Elephant
  */
class Elephant : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Elephant.
    */
  Elephant() : Animal() {}
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