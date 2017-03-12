/**	@file	Alligator.h
  */

#ifndef ALLIGATOR_H
#define ALLIGATOR_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Reptile.h"

/** @class Alligator.
  * Kelas Alligator merupakan kelas untuk real object Alligator.
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

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara alligator.
	  */
	string interact() {return ("Grrrrrr");}

	/** @brief clone.
	  * Melakukan cloning untuk menciptakan objek baru.
	  * @return Mengeluarkan pointer to alligator objek tersebut.
	  */
	virtual Alligator* clone() const {return new Alligator(*this);}

	/** @brief render.
	  * @return Mengembalikan char yang merupakan representasi objek yang dicetak.
	  */
	char render(){return 'A';}
};

#endif