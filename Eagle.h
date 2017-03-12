/**	@file	Eagle.h
  */

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

	/** @brief Destructor.
	  */
	virtual ~Eagle() {}

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara eagle.
	  */
	string interact() {return ("Nguiikk!");}

	/** @brief clone.
	  * Melakukan cloning untuk menciptakan objek baru.
	  * @return Mengeluarkan pointer to eagle objek tersebut.
	  */
	virtual Eagle* clone() const {return new Eagle(*this);}

	/** @brief render.
	  * @return Mengembalikan char yang merupakan representasi objek yang dicetak.
	  */
	char render(){return 'E';}
};

#endif