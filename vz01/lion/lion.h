/**	@file  Lion.h
  */

#ifndef LION_H
#define LION_H

#include "../mammal/mammal.h"
#include "../land_animal/land_animal.h"

/** @class Lion
  * Kelas Lion merupakan kelas untuk real object Lion
  */
class Lion : public LandAnimal, public Mammal{
public:
  /** @brief Constructor.
    * Menciptakan objek Lion.
    */
  Lion() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Lion() {}
  /** @brief Interaksi yang dilakukan Lion.
    * @return Mengembalikan string yang merepresentasikan suara Lion.
    */
  string Interact() {
  	return ("Roaarr!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Lion baru.
    * @return Mengembalikan pointer to Lion objek tersebut.
    */
  virtual Lion* Clone() const {
  	return new Lion(*this);
  }
  /** @brief Render dari Lion.
    * @return Mengembalikan char yang merupakan representasi kode Lion.
    */
  char Render() {
  	return 'L';
  }	
};

#endif