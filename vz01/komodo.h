/**	@file  komodo.h
  */

#ifndef KOMODO_H
#define KOMODO_H

#include "reptile.h"
#include "land_animal.h"

/** @class Komodo
  * Kelas Komodo merupakan kelas untuk real object Komodo
  */
class Komodo : public LandAnimal, public Reptile {
public :
  /** @brief Constructor.
    * Menciptakan objek Komodo.
    */
  Komodo() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Komodo() {}
  /** @brief Interaksi yang dilakukan Komodo.
    * @return Mengembalikan string yang merepresentasikan suara Komodo.
    */
  string Interact() {
  	return ("Slpp!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Komodo baru.
    * @return Mengembalikan pointer to Komodo objek tersebut.
    */
  virtual Komodo* Clone() const {
  	return new Komodo(*this);
  }
  /** @brief Render dari Alligator.
	* @return Mengembalikan char yang merupakan representasi kode Komodo.
	*/
  char Render() {
  	return 'K';
  }
};

#endif