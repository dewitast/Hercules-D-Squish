/**	@file	Iguana.h
  */

#ifndef IGUANA_H
#define IGUANA_H

#include "Herbivore.h"
#include "LandAnimal.h"
#include "Reptile.h"

/** @class Iguana
  * kelas Iguana merupakan kelas untuk real object Iguana
  */
class Iguana : public LandAnimal, public Herbivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek Iguana.
	  */
	Iguana() : Animal(6, 0.3, true) { }

	/** @brief Constructor.
	  * Menciptakan objek Iguana dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Iguana.
	  * @param f Jumlah makanan Iguana.
	  * @param t Status jinak Iguana.
	  */
	Iguana(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Destructor.
	  */
	virtual ~Iguana() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Iguana.
	  */
	string interact() {return ("Purrrr");}

	/** @brief Melakukan cloning untuk menciptakan objek Iguana baru
	  * @return Mengembalikan pointer to Iguana objek tersebut.
	  */
	virtual Iguana* clone() const {return new Iguana(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Iguana.
	  */
	char render(){return 'I';}
	
};

#endif