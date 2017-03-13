/**	@file  giraffe.h
  */

#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "../mammal/mammal.h"
#include "../herbivore/herbivore.h"
#include "../land_animal/land_animal.h"

/** @class Giraffe
  * Kelas Giraffe merupakan kelas untuk real object Giraffe
  */
class Giraffe : public LandAnimal, public Herbivore, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Giraffe.
    */
  Giraffe() : Animal(1100,55,true) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Giraffe dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Giraffe.
    * @param k Jumlah makanan Giraffe.
    * @param t Status jinak Giraffe.
    */
  Giraffe(float w, float f, bool t) : Animal(w,f,t) {}
  /** @brief Destructor.
    */
  virtual ~Giraffe() {}
  /** @brief Interaksi yang dilakukan Giraffe.
    * @return Mengembalikan string yang merepresentasikan suara Giraffe.
    */
  string Interact() {
  	return ("Hmm!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Giraffe baru.
    * @return Mengembalikan pointer to Giraffe objek tersebut.
    */
  virtual Giraffe* Clone() const {
  	return new Giraffe(*this);
  }
  /** @brief Render dari Giraffe.
    * @return Mengembalikan char yang merupakan representasi kode Giraffe.
    */
  char Render() {
  	return 'F';
  }
};

#endif