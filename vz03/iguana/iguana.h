/**	@file  iguana.h
  */

#ifndef IGUANA_H
#define IGUANA_H

#include "../herbivore/herbivore.h"
#include "../land_animal/land_animal.h"
#include "../reptile/reptile.h"

/** @class Iguana
  * kelas Iguana merupakan kelas untuk real object Iguana
  */
class Iguana : public LandAnimal, public Herbivore, public Reptile {
public :
  /** @brief Constructor.
    * Menciptakan objek Iguana.
    */
  Iguana() : Animal(6,0.3,true) {}
  /** @brief Constructor.
    * Menciptakan objek Iguana dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Iguana.
    * @param f Jumlah makanan Iguana.
    * @param t Status jinak Iguana.
    */
  Iguana(float w, float f, bool t) : Animal(w,f,t) {}
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