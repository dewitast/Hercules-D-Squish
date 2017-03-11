// file Owl.h

#ifndef OWL_H
#define OWL_H

#include "FlyingAnimal.h"
#include "Carnivore.h"
#include "Aves.h"

/** @class Owl.
  * Kelas Owl merupakan kelas untuk real object owl.
  */
class Owl : public FlyingAnimal, public Carnivore, public Aves {
public :
	/** @brief Constructor.
	  * Menciptakan objek owl kosong.
	  */
	Owl() : Animal(1.5,0.075,true) {}

	/** @brief Constructor.
	  * Menciptakan objek owl kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat owl.
	  * @param f Jumlah makanan owl.
	  * @param t Status jinak owl.
	  */
	Owl(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Interact.
	  * Menampilkan suara owl pada layar.
	  */
	string interact() { return ("Hoot!"); }
};

#endif