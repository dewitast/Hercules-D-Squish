/**	@file	Cormorant.h
  */

#ifndef CORMORANT_H
#define CORMORANT_H

#include "Aves.h"
#include "Carnivore.h"
#include "FlyingAnimal.h"
#include "WaterAnimal.h"

/** @class Cormorant
  * Kelas Cormorant merupakan kelas untuk real object Cormorant
  */
class Cormorant : public FlyingAnimal, public WaterAnimal, public Carnivore, public Aves{
public:
	/** @brief Constructor.
	  * Menciptakan objek Cormorant.
	  */
	Cormorant() : Animal(3.6, 0.18, true) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Cormorant dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Cormorant.
	  * @param k Jumlah makanan Cormorant.
	  * @param t Status jinak Cormorant.
	  */
	Cormorant(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Destructor.
	  */
	virtual ~Cormorant() {}

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara Cormorant.
	  */
	string interact() {return ("Ooookkk!");}

	/** @brief Melakukan cloning untuk menciptakan objek Cormorant baru
	  * @return Mengembalikan pointer to Cormorant objek tersebut.
	  */
	virtual Cormorant* clone() const {return new Cormorant(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Cormorant.
	  */
	char render(){return 'M';}
	
};

#endif