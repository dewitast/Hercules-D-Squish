//File : Lion.h

#ifndef LION_H
#define LION_H

#include "Mammal.h"
#include "Carnivore.h"
#include "LandAnimal.h"

/** @class Lion.
  * Kelas Lion merupakan kelas untuk real object Lion.
  */
class Lion : public LandAnimal, public Carnivore, public Mammal{
public:
	/** @brief Constructor.
	  * Menciptakan objek Lion.
	  */
	Lion() : Animal(150, 7.5, false) {}

	/** @brief Constructor.
	  * Menciptakan objek Lion dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Lion.
	  * @param k Jumlah makanan Lion.
	  * @param t Status jinak Lion.
	  */
	Lion(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Interact.
	  * Menampilkan suara Lion ke layar.
	  */
	string interact() {return ("Roaarr!");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to lion objek tersebut
	  */
	virtual Lion* clone() const {return new Lion(*this);}
};

#endif