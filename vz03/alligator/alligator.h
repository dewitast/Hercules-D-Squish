/**	@file  alligator.h
  */

#ifndef ALLIGATOR_H
#define ALLIGATOR_H

#include "../carnivore/carnivore.h"
#include "../land_animal/land_animal.h"
#include "../water_animal/water_animal.h"
#include "../reptile/reptile.h"

/** @class Alligator
  * Kelas Alligator merupakan kelas untuk real object Alligator
  */
class Alligator : public LandAnimal, public WaterAnimal, public Carnivore, public Reptile {
public :
  /** @brief Constructor.
    * Menciptakan objek Alligator.
    */
  Alligator() : Animal(125,6.25,false) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Alligator dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Alligator.
    * @param f Jumlah makanan Alligator.
    * @param t Status jinak Alligator.
    */
  Alligator(float w, float f, bool t) : Animal(w,f,t) {}
  /** @brief Destructor.
    */
  virtual ~Alligator() {}
  /** @brief Interaksi yang dilakukan Alligator.
    * @return Mengembalikan string yang merepresentasikan suara Alligator.
    */
  string Interact() {
  	return ("Grrrrrr");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Alligator baru.
    * @return Mengembalikan pointer to Alligator objek tersebut.
    */
  virtual Alligator* Clone() const {
  	return new Alligator(*this);
  }
  /** @brief Render dari Alligator.
    * @return Mengembalikan char yang merupakan representasi kode Alligator.
    */
  char Render() {
  	return 'A';
  }
};

#endif