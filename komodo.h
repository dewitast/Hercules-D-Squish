/**	@file  komodo.h
  */

#ifndef KOMODO_H
#define KOMODO_H

#include "reptile.h"
#include "carnivore.h"
#include "land_animal.h"

/** @class Komodo
  * Kelas Komodo merupakan kelas untuk real object Komodo
  */
class Komodo : public LandAnimal, public Carnivore, public Reptile {
public :
  /** @brief Constructor.
    * Menciptakan objek Komodo.
    */
  Komodo() : Animal(120,6,false) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Komodo dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Komodo.
    * @param k Jumlah makanan Komodo.
    * @param t Status jinak Komodo.
    */
  Komodo(float w, float f, bool t) : Animal(w,f,t) {}
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