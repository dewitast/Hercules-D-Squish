//file : Parrot.h

#ifndef PARROT_H
#define PARROT_H

#include "Omnivore.h"
#include "FlyingAnimal.h"
#include "Aves.h"

/** @class Parrot
  * kelas Parrot merupakan kelas untuk real object Parrot
  */

class Parrot : public FlyingAnimal, public Omnivore, public Aves {
public:
	/** @brief Constructor.
	  * Menciptakan objek Parrot.
	  */
	Parrot() : Animal(1.2, 5, true) { }

	/** @brief Constructor.
	  * Menciptakan objek Parrot dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Parrot.
	  * @param f Jumlah makanan Parrot.
	  * @param t Status jinak Parrot.
	  */
	Parrot(float w, float f, bool t) : Animal(w, f, t) { }

	string interact() {return ("Cuiitt");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to parrot objek tersebut
	  */
	virtual Parrot* clone() const {return new Parrot(*this);};
};

#endif