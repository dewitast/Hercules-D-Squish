/**	@file  Goat.h
  */

#ifndef GOAT_H
#define GOAT_H

#include "herbivore.h"
#include "land_animal.h"
#include "mammal.h"

/** @class Goat
  * Kelas Goat merupakan kelas untuk real object Goat
  */
class Goat : public LandAnimal, public Herbivore, public Mammal {
public:
  /** @brief Constructor.
    * Menciptakan objek Goat.
    */
  Goat() : Animal(90, 4.5, false) {}
  /** @brief Constructor.
    * Menciptakan objek Goat dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Goat.
    * @param f Jumlah makanan Goat.
    * @param t Status jinak Goat.
    */
  Goat(float w, float f, bool t) : Animal(w, f, t) {}
  /** @brief Destructor.
    */
  virtual ~Goat() {}
  /** @brief Interaksi yang dilakukan Goat.
    * @return Mengembalikan string yang merepresentasikan suara Goat.
    */
  string Interact() {
  	return ("Mbeeeee");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Goat baru.
    * @return Mengembalikan pointer to Goat objek tersebut.
    */
  virtual Goat* Clone() const {
  	return new Goat(*this);
  }
  /** @brief Render dari Goat.
    * @return Mengembalikan char yang merupakan representasi kode Goat.
    */
  char Render() {
  	return 'G';
  }
};

#endif