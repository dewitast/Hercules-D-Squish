/**	@file	Duck.h
  */

#ifndef DUCK_H
#define DUCK_H

#include "Aves.h"
#include "Omnivore.h"
#include "WaterAnimal.h"

/** @class Duck
  * Kelas Duck merupakan kelas untuk real object Duck
  */
class Duck : public WaterAnimal, public Omnivore, public Aves{
public:
	/** @brief Constructor.
	  * Menciptakan objek Duck.
	  */
	Duck() : Animal(120, 6, true) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Duck dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Duck.
	  * @param k Jumlah makanan Duck.
	  * @param t Status jinak Duck.
	  */
	Duck(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Destructor.
	  */
	virtual ~Duck() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Duck.
	  */
	string interact() {return ("Quaackk!");}

	/** @brief Melakukan cloning untuk menciptakan objek Duck baru
	  * @return Mengembalikan pointer to Duck objek tersebut.
	  */
	virtual Duck* clone() const {return new Duck(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Duck.
	  */
	char render(){return 'D';}
	
};

#endif