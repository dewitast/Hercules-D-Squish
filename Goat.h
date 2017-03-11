//file : Goat.h

#ifndef GOAT_H
#define GOAT_H

#include "Herbivore.h"
#include "LandAnimal.h"
#include "Mammal.h"

/** @class Goat
  * kelas Goat merupakan kelas untuk real object Goat
  */

class Goat : public LandAnimal, public Herbivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek Goat.
	  */
	Goat() : Animal(90, 5, false) { }

	/** @brief Constructor.
	  * Menciptakan objek Goat dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Goat.
	  * @param f Jumlah makanan Goat.
	  * @param t Status jinak Goat.
	  */
	Goat(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Interact.
	  * Menampilkan suara Goat pada layar.
	  */
	void Interact() {cout << "Mbeeeee" << endl;}
};

#endif