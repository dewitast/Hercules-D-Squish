#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "LandAnimal.h"
#include "Herbivore.h"
#include "Mammal.h"

/** @class Elephant.
  * Kelas Elephant merupakan .
  */
class Elephant : public LandAnimal, public Herbivore, public Mammal {
public :
	/** @brief Constructor.
	  * Menciptakan objek gajah kosong.
	  */
	Elephant() : Animal(1000,10,false)
	{}

	/** @brief Constructor.
	  * Menciptakan objek gajah kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat gajah.
	  * @param k Jumlah makanan gajah.
	  * @param t Status jinak gajah.
	  */
	Elephant(float w, float f, bool t) : Animal(w,f,t)
	{}

};

#endif