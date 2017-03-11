//file : Walrus.h

#ifndef WALRUS_H
#define WALRUS_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Mammal.h"

/** @class Walrus
  * kelas Walrus merupakan kelas untuk real object Walrus
  */

class Walrus : public LandAnimal, public WaterAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek Walrus.
	  */
	Walrus() : Animal(1000, 5, false) { }

	/** @brief Constructor.
	  * Menciptakan objek Walrus dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Walrus.
	  * @param f Jumlah makanan Walrus.
	  * @param t Status jinak Walrus.
	  */
	Walrus(float w, float f, bool t) : Animal(w, f, t) { }

	string interact() {return ("Aaarhhh");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to elephant objek tersebut
	  */
	virtual Walrus* clone() const {return new Walrus(*this);};
};

#endif