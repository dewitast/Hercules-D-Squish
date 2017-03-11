//file : Tiger.h

#ifndef TIGER_H
#define TIGER_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "Mammal.h"

/** @class Tiger
  * kelas Tiger 
  */

class Tiger : public LandAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek tiger.
	  */
	Tiger() : Animal(200, 5, false) { }

	/** @brief Constructor.
	  * Menciptakan objek tiger dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat tiger.
	  * @param f Jumlah makanan tiger.
	  * @param t Status jinak tiger.
	  */
	Tiger(float w, float f, bool t) : Animal(w, f, t) { }
};

#endif