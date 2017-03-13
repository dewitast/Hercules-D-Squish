/**	@file walrus.h
  */

#ifndef WALRUS_H
#define WALRUS_H

#include "water_animal.h"
#include "mammal.h"

/** @class Walrus
  * kelas Walrus merupakan kelas untuk real object Walrus
  */
class Walrus : public WaterAnimal, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Walrus.
    */
  Walrus() : Animal() {}
  /** @brief Destructor.
	*/
  virtual ~Walrus() {}
  /** @brief Interaksi yang dilakukan Walrus.
	* @return Mengembalikan string yang merepresentasikan suara Walrus.
	*/
  string Interact() {
  	return ("Aaarhhh");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Walrus baru.
	* @return Mengembalikan pointer to Walrus objek tersebut.
	*/
  virtual Walrus* Clone() const {
  	return new Walrus(*this);
  }
  /** @brief Render dari Walrus.
	* @return Mengembalikan char yang merupakan representasi kode Walrus.
	*/
  char Render() {
  	return 'W';
  }
};

#endif