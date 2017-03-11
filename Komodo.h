//File : Komodo.h

#ifndef KOMODO_H
#define KOMODO_H

#include "Reptile.h"
#include "Carnivore.h"
#include "LandAnimal.h"

/** @class Komodo.
  * Kelas Komodo merupakan kelas untuk real object Komodo.
  */
class Komodo : public LandAnimal, public Carnivore, public Reptile{
public:
	/** @brief Constructor.
	  * Menciptakan objek Komodo.
	  */
	Komodo() : Animal(120, 6, false) {}

	/** @brief Constructor.
	  * Menciptakan objek Komodo dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat Komodo.
	  * @param k Jumlah makanan Komodo.
	  * @param t Status jinak Komodo.
	  */
	Komodo(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Interact.
	  * Menampilkan suara Komodo ke layar.
	  */
	void Interact() {cout << "Slpp!" << endl;}
};

#endif