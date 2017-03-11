//File : Eagle.h

#ifndef EAGLE_H
#define EAGLE_H

#include "Aves.h"
#include "Carnivore.h"
#include "AirAnimal.h"

/** @class Eagle.
  * Kelas Eagle merupakan kelas untuk real object Eagle.
  */
class Eagle : public AirAnimal, public Carnivore, public Aves{
public:
	/** @brief Constructor.
	  * Menciptakan objek Eagle.
	  */
	Eagle() : Animal(5.8, 0.29, false) {}

	/** @brief Constructor.
	  * Menciptakan objek Eagle dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Eagle.
	  * @param k Jumlah makanan Eagle.
	  * @param t Status jinak Eagle.
	  */
	Eagle(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Interact.
	  * Menampilkan suara Eagle ke layar.
	  */
	void Interact() {cout << "Nguiikk!" << endl;}
};

#endif