//File : Giraffe.h

#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "Mammal.h"
#include "Herbivore.h"
#include "LandAnimal.h"

/** @class Giraffe.
  * Kelas Giraffe merupakan kelas untuk real object Giraffe.
  */
class Giraffe : public LandAnimal, public Herbivore, public Mammal{
public:
	/** @brief Constructor.
	  * Menciptakan objek Giraffe.
	  */
	Giraffe() : Animal(1100, 55, true) {}

	/** @brief Constructor.
	  * Menciptakan objek Giraffe dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Giraffe.
	  * @param k Jumlah makanan Giraffe.
	  * @param t Status jinak Giraffe.
	  */
	Giraffe(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Interact.
	  * Menampilkan suara Giraffe ke layar.
	  */
	string interact() {return ("Hmm!");}
};

#endif