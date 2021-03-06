/**	@file  Orca.h
  */

#ifndef ORCA_H
#define ORCA_H

#include "../water_animal/water_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Orca
  * Kelas Orca merupakan kelas untuk real object Orca
  */
class Orca : public WaterAnimal, public Carnivore, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Orca.
    */
  Orca() : Animal(4000,200,false) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Orca dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Orca.
    * @param f Jumlah makanan Orca.
    * @param t Status jinak Orca.
    */
  Orca(float w, float f, bool t) : Animal(w,f,t) {}
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