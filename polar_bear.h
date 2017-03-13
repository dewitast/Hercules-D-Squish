/**	@file polar_bear.h
  */

#ifndef POLARBEAR_H
#define POLARBEAR_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Mammal.h"

/** @class PolarBear
  * kelas PolarBear merupakan kelas untuk real object PolarBear
  */
class PolarBear : public LandAnimal, public WaterAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek PolarBear.
	  */
	PolarBear() : Animal(300, 15, false) { }

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek PolarBear dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat PolarBear.
	  * @param f Jumlah makanan PolarBear.
	  * @param t Status jinak PolarBear.
	  */
	PolarBear(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Destructor.
	  */
	virtual ~PolarBear() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara PolarBear.
	  */
	string interact() {return ("Auuummm");}

	/** @brief Melakukan cloning untuk menciptakan objek PolarBear baru
	  * @return Mengembalikan pointer to PolarBear objek tersebut.
	  */
	virtual PolarBear* clone() const {return new PolarBear(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode PolarBear.
	  */
	char render(){return 'B';}

};

#endif