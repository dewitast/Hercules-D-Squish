//file : Iguana.h

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
	Iguana() : Animal(6, 5, true) { }

	/** @brief Constructor.
	  * Menciptakan objek Iguana dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Iguana.
	  * @param f Jumlah makanan Iguana.
	  * @param t Status jinak Iguana.
	  */
	Iguana(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Interact.
	  * Menampilkan suara Iguana pada layar.
	  */
	string Interact() {return ("Purrrr");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to iguana objek tersebut
	  */
	virtual Iguana* clone() const {return new Iguana(*this);};
};

#endif