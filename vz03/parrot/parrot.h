/**	@file  parrot.h
  */

#ifndef PARROT_H
#define PARROT_H

#include "../omnivore/omnivore.h"
#include "../flying_animal/flying_animal.h"
#include "../aves/aves.h"

/** @class Parrot
  * kelas Parrot merupakan kelas untuk real object Parrot
  */
class Parrot : public FlyingAnimal, public Omnivore, public Aves {
public :
  /** @brief Constructor.
	* Menciptakan objek Parrot.
	*/
  Parrot() : Animal(1.2,0.06,true) {}
  /** @brief Constructor dengan parameter.
    * Menciptakan objek Parrot dengan berat w, jumlah makanan f, dan status jinak t.
    * @param w Berat Parrot.
    * @param f Jumlah makanan Parrot.
    * @param t Status jinak Parrot.
    */
  Parrot(float w, float f, bool t) : Animal(w,f,t) {}
  /** @brief Destructor.
	*/
  virtual ~Parrot() {}
  /** @brief Interaksi yang dilakukan Parrot.
	* @return Mengembalikan string yang merepresentasikan suara Parrot.
	*/
  string Interact() {
  	return ("Cuiitt");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Parrot baru.
	* @return Mengembalikan pointer to Parrot objek tersebut.
	*/
  virtual Parrot* Clone() const {
  	return new Parrot(*this);
  }
  /** @brief Render dari Parrot.
	* @return Mengembalikan char yang merupakan representasi kode Parrot.
	*/
  char Render() {
  	return 'P';
  }
};

#endif