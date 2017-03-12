//file : Iguana.h

#ifndef IGUANA_H
#define IGUANA_H

#include "Herbivore.h"
#include "LandAnimal.h"
#include "Reptile.h"

/** @class Iguana
  * kelas Iguana merupakan kelas untuk real object Iguana
  */

class Iguana : public LandAnimal, public Herbivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek Iguana.
	  */
	Iguana() : Animal(6, 0.3, true) { }

	/** @brief Constructor.
	  * Menciptakan objek Iguana dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Iguana.
	  * @param f Jumlah makanan Iguana.
	  * @param t Status jinak Iguana.
	  */
	Iguana(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Destructor.
	  */
	virtual ~Iguana() {}

	/** @brief Interact.
	  * Menampilkan suara Iguana pada layar.
	  */
	string Interact() {return ("Purrrr");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to iguana objek tersebut
	  */
	virtual Iguana* clone() const {return new Iguana(*this);}

	/** @brief render.
	  * Menentukan render dari iguana.
	  * @return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return 'I';}
};

#endif