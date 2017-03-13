/**	@file  dolphin.h
  */

#ifndef DOLPHIN_H
#define DOLPHIN_H

#include "water_animal.h"
#include "mammal.h"

/** @class Dolphin
  * Kelas Dolphin merupakan kelas untuk real object Dolphin
  */
class Dolphin : public WaterAnimal, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Dolphin.
    */
  Dolphin() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Dolphin() {}
  /** @brief Interaksi yang dilakukan Dolphin.
	  * @return Mengembalikan string yang merepresentasikan suara Dolpin.
	  */
	string Interact() {
    return ("A a a a a");
  }
	/** @brief Melakukan cloning untuk menciptakan objek Dolphin baru.
	  * @return Mengembalikan pointer to Dolphin objek tersebut.
	  */
	virtual Dolphin* Clone() const {
    return new Dolphin(*this);
  }
	/** @brief Render dari Dolphin.
	  * @return Mengembalikan char yang merupakan representasi kode Dolphin.
	  */
	char Render() {
    return 'N';
  }
};

#endif