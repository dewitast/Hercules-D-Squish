/**	@file walrus.h
  */

#ifndef WALRUS_H
#define WALRUS_H

#include "carnivore.h"
#include "water_animal.h"
#include "mammal.h"

/** @class Walrus
  * kelas Walrus merupakan kelas untuk real object Walrus
  */
class Walrus : public WaterAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek Walrus.
	  */
	Walrus() : Animal(1000, 50, false) { }

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Walrus dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Walrus.
	  * @param f Jumlah makanan Walrus.
	  * @param t Status jinak Walrus.
	  */
	Walrus(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Destructor.
	  */
	virtual ~Walrus() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Walrus.
	  */
	string interact() {return ("Aaarhhh");}

	/** @brief Melakukan cloning untuk menciptakan objek Walrus baru
	  * @return Mengembalikan pointer to Walrus objek tersebut.
	  */
	virtual Walrus* clone() const {return new Walrus(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Walrus.
	  */
	char render(){return 'W';}

};

#endif