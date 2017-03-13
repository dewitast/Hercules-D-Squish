/**	@file  owl.h
  */

#ifndef OWL_H
#define OWL_H

#include "flying_animal.h"
#include "carnivore.h"
#include "aves.h"

/** @class Owl
  * Kelas Owl merupakan kelas untuk real object Owl
  */
class Owl : public FlyingAnimal, public Carnivore, public Aves {
public :
  /** @brief Constructor.
	* Menciptakan objek Owl.
	*/
  Owl() : Animal(1.5,0.075,true) {}
  /** @brief Constructor dengan parameter.
	* Menciptakan objek Owl dengan berat w, jumlah makanan f, dan status jinak t.
	* @param w Berat Owl.
	* @param f Jumlah makanan Owl.
	* @param t Status jinak Owl.
	*/
  Owl(float w, float f, bool t) : Animal(w,f,t) {}
  /** @brief Destructor.
	*/
  virtual ~Owl() {}
  /** @brief Interaksi yang dilakukan Owl.
	* @return Mengembalikan string yang merepresentasikan suara Owl.
	*/
  string Interact() {
  	return ("Hoot!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Owl baru.
	* @return Mengembalikan pointer to Owl objek tersebut.
	*/
  virtual Owl* Clone() const {
  	return new Owl(*this);
  }
  /** @brief Render dari Owl.
    * @return Mengembalikan char yang merupakan representasi kode Owl.
	*/
  char Render() {
  	return 'O';
  }
};

#endif