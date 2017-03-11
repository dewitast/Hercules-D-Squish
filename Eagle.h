//File : Eagle.h

#ifndef EAGLE_H
#define EAGLE_H

#include "Aves.h"
#include "Carnivore.h"
#include "FlyingAnimal.h"

/** @class Eagle.
  * Kelas Eagle merupakan kelas untuk real object Eagle.
  */
class Eagle : public FlyingAnimal, public Carnivore, public Aves{
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
	string interact() {return ("Nguiikk!");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to eagle objek tersebut
	  */
	virtual Eagle* clone() const {return new Eagle(*this);}
};

#endif