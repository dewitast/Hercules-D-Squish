#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "LandAnimal.h"
#include "Herbivore.h"
#include "Mammal.h"

/** @class Elephant.
  * Kelas Elephant merupakan kelas untuk real object elephant.
  */
class Elephant : public LandAnimal, public Herbivore, public Mammal {
public :
	/** @brief Constructor.
	  * Menciptakan objek elephant kosong.
	  */
	Elephant() : Animal(1000,10,false)
	{}

	/** @brief Constructor.
	  * Menciptakan objek elephant kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat elephant.
	  * @param f Jumlah makanan elephant.
	  * @param t Status jinak elephant.
	  */
	Elephant(float w, float f, bool t) : Animal(w,f,t)
	{}

};

#endif