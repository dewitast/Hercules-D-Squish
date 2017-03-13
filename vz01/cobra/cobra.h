/**	@file  cobra.h
  */

#ifndef COBRA_H
#define COBRA_H

#include "land_animal.h"
#include "reptile.h"

/** @class Cobra
  * Kelas Cobra merupakan kelas untuk real object Cobra
  */
class Cobra : public LandAnimal, public Reptile {
public :
  /** @brief Constructor.
    * Menciptakan objek Cobra.
    */
  Cobra() : Animal() {}
  /** @brief Destructor.
    */
  virtual ~Cobra() {}
  /** @brief Interaksi yang dilakukan Cobra.
    * @return Mengembalikan string yang merepresentasikan suara Cobra.
    */
  string Interact() {
  	return ("Ssshh!");
  }
  /** @brief Melakukan cloning untuk menciptakan objek Cobra baru.
    * @return Mengembalikan pointer to Cobra objek tersebut.
    */
  virtual Cobra* Clone() const {
  	return new Cobra(*this);
  }
  /** @brief Render dari Cobra.
    * @return Mengembalikan char yang merupakan representasi kode Cobra.
    */
  char Render() {
  	return 'C';
  }	
};

#endif