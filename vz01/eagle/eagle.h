/**	@file eagle.h
  */

#ifndef EAGLE_H
#define EAGLE_H

#include "../aves/aves.h"
#include "../flying_animal/flying_animal.h"

/** @class Eagle
  * Kelas Eagle merupakan kelas untuk real object Eagle
  */
class Eagle : public FlyingAnimal, public Aves {
public :
  /** @brief Constructor.
    * Menciptakan objek Eagle.
    */
  Eagle() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Eagle() {}
  /** @brief Interaksi yang dilakukan Eagle.
    * @return Mengembalikan string yang merepresentasikan suara Eagle.
    */
  string Interact() {
  	return ("Nguiikk!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Eagle baru.
    * @return Mengembalikan pointer to Eagle objek tersebut.
    */
  virtual Eagle* Clone() const {
  	return new Eagle(*this);
  }
  /** @brief Render dari Eagle.
    * @return Mengembalikan char yang merupakan representasi kode Eagle.
    */
  char Render() {
  	return 'E';
  }
};

#endif