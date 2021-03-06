/**	@file  giraffe.h
  */

#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "../mammal/mammal.h"
#include "../land_animal/land_animal.h"

/** @class Giraffe
  * Kelas Giraffe merupakan kelas untuk real object Giraffe
  */
class Giraffe : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * Menciptakan objek Giraffe.
    */
  Giraffe() : Animal() {}
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