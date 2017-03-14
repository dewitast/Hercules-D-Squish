/**	@file  iguana.h
  */

#ifndef IGUANA_H
#define IGUANA_H

#include "../land_animal/land_animal.h"
#include "../reptile/reptile.h"

/** @class Iguana
  * kelas Iguana merupakan kelas untuk real object Iguana
  */
class Iguana : public LandAnimal, public Reptile {
public :
  /** @brief Constructor.
    * Menciptakan objek Iguana.
    */
  Iguana() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Iguana() {}
  /** @brief Interaksi yang dilakukan Iguana.
    * @return Mengembalikan string yang merepresentasikan suara Iguana.
    */
  string Interact() {
  	return ("Purrrr");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Iguana baru.
    * @return Mengembalikan pointer to Iguana objek tersebut.
    */
  virtual Iguana* Clone() const {
  	return new Iguana(*this);
  }
  /** @brief Render dari Iguana.
    * @return Mengembalikan char yang merupakan representasi kode Iguana.
    */
  char Render() {
  	return 'I';
  }
};

#endif