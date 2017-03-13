/**	@file  dugong.h
  */

#ifndef DUGONG_H
#define DUGONG_H

#include "mammal.h"
#include "herbivore.h"
#include "water_animal.h"

/** @class Dugong
  * Kelas Dugong merupakan kelas untuk real object Dugong
  */
class Dugong : public WaterAnimal, public Herbivore, public Mammal{
public:
  /** @brief Constructor.
    * Menciptakan objek Dugong.
    */
  Dugong() : Animal(500, 25, true) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Dugong dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Dugong.
    * @param k Jumlah makanan Dugong.
    * @param t Status jinak Dugong.
    */
  Dugong(float w, float f, bool t) : Animal(w, f, t) {}
  /** @brief Destructor.
    */
  virtual ~Dugong() {}
  /** @brief Interaksi yang dilakukan Dugong.
    * @return Mengembalikan string yang merepresentasikan suara Dugong.
    */
  string Interact() {
  	return ("Splashh!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Dugong baru.
    * @return Mengembalikan pointer to Dugong objek tersebut.
    */
  virtual Dugong* Clone() const {
  	return new Dugong(*this);
  }
  /** @brief Render dari Dugong.
    * @return Mengembalikan char yang merupakan representasi kode Dugong.
    */
  char Render() {
  	return 'U';
  }
};

#endif