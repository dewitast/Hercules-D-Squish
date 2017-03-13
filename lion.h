/**	@file	Lion.h
  */

#ifndef LION_H
#define LION_H

#include "Mammal.h"
#include "Carnivore.h"
#include "LandAnimal.h"

/** @class Lion
  * Kelas Lion merupakan kelas untuk real object Lion
  */
class Lion : public LandAnimal, public Carnivore, public Mammal{
public:
	/** @brief Constructor.
	  * Menciptakan objek Lion.
	  */
	Lion() : Animal(150, 7.5, false) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Lion dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Lion.
	  * @param k Jumlah makanan Lion.
	  * @param t Status jinak Lion.
	  */
	Lion(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Destructor.
	  */
	virtual ~Lion() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Lion.
	  */
	string interact() {return ("Roaarr!");}

	/** @brief Melakukan cloning untuk menciptakan objek Lion baru
	  * @return Mengembalikan pointer to Lion objek tersebut.
	  */
	virtual Lion* clone() const {return new Lion(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Lion.
	  */
	char render(){return 'L';}
	
};

#endif