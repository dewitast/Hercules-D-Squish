/**	@file  Orca.h
  */

#ifndef ORCA_H
#define ORCA_H

#include "../water_animal/water_animal.h"
#include "../mammal/mammal.h"

/** @class Orca
  * Kelas Orca merupakan kelas untuk real object Orca
  */
class Orca : public WaterAnimal, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Orca.
    */
  Orca() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Orca() {}
  /** @brief Interaksi yang dilakukan Orca.
	  * @return Mengembalikan string yang merepresentasikan suara Orca.
	  */
	string Interact() {
    return ("Ngiak!");
  }
	/** @brief Melakukan cloning untuk menciptakan objek Orca baru.
	  * @return Mengembalikan pointer to Orca objek tersebut.
	  */
	virtual Orca* Clone() const {
    return new Orca(*this);
  }
	/** @brief Render dari Orca.
	  * @return Mengembalikan char yang merupakan representasi kode Orca.
	  */
	char Render() {
    return 'R';
  }	
};

#endif