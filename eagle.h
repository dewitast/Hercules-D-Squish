/**	@file	Eagle.h
  */

#ifndef EAGLE_H
#define EAGLE_H

#include "aves.h"
#include "carnivore.h"
#include "flying_animal.h"

/** @class Eagle
  * Kelas Eagle merupakan kelas untuk real object Eagle
  */
class Eagle : public FlyingAnimal, public Carnivore, public Aves{
public:
	/** @brief Constructor.
	  * Menciptakan objek Eagle.
	  */
	Eagle() : Animal(5.8, 0.29, false) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Eagle dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Eagle.
	  * @param k Jumlah makanan Eagle.
	  * @param t Status jinak Eagle.
	  */
	Eagle(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Destructor.
	  */
	virtual ~Eagle() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Eagle.
	  */
	string Interact() {return ("Nguiikk!");}

	/** @brief Melakukan cloning untuk menciptakan objek Eagle baru
	  * @return Mengembalikan pointer to Eagle objek tersebut.
	  */
	virtual Eagle* Clone() const {return new Eagle(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Eagle.
	  */
	char Render(){return 'E';}
	
};

#endif