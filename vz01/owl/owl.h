/**	@file  owl.h
  */

#ifndef OWL_H
#define OWL_H

#include "../flying_animal/flying_animal.h"
#include "../aves/aves.h"

/** @class Owl
  * Kelas Owl merupakan kelas untuk real object Owl
  */
class Owl : public FlyingAnimal, public Aves {
public :
  /** @brief Constructor.
	* Menciptakan objek Owl.
	*/
  Owl() : Animal() {}
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