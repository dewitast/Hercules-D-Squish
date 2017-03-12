//file : Alligator.h

#ifndef ALLIGATOR_H
#define ALLIGATOR_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Reptile.h"

/** @class Alligator
  * kelas Alligator merupakan kelas untuk real object Alligator
  */

class Alligator : public LandAnimal, public WaterAnimal, public Carnivore, public Reptile {
public:
	/** @brief Constructor.
	  * Menciptakan objek Alligator.
	  */
	Alligator() : Animal(125, 6.25, false) { }

	/** @brief Constructor.
	  * Menciptakan objek Alligator dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Alligator.
	  * @param f Jumlah makanan Alligator.
	  * @param t Status jinak Alligator.
	  */
	Alligator(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Destructor.
	  */
	virtual ~Alligator() {}

	/** @brief Interact.
	  * Menampilkan suara Alligator pada layar.
	  */
	string interact() {return ("Grrrrrr");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to alligator objek tersebut
	  */
	virtual Alligator* clone() const {return new Alligator(*this);}
};

#endif