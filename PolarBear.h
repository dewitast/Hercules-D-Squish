//file : PolarBear.h

#ifndef POLARBEAR_H
#define POLARBEAR_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Mammal.h"

/** @class PolarBear
  * kelas PolarBear merupakan kelas untuk real object PolarBear
  */

class PolarBear : public LandAnimal, public WaterAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek PolarBear.
	  */
	PolarBear() : Animal(300, 5, false) { }

	/** @brief Constructor.
	  * Menciptakan objek PolarBear dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat PolarBear.
	  * @param f Jumlah makanan PolarBear.
	  * @param t Status jinak PolarBear.
	  */
	PolarBear(float w, float f, bool t) : Animal(w, f, t) { }

	void Interact() {cout << "Auuummm" << endl;}
};

#endif