#ifndef JALAK_H
#define JALAK_H

#include "AirAnimal.h"
#include "Herbivore.h"
#include "Aves.h"

/** @class Jalak.
  * Kelas Jalak merupakan kelas untuk real object jalak.
  */
class Jalak : public AirAnimal, public Herbivore, public Aves {
public :
	/** @brief Constructor.
	  * Menciptakan objek Jalak kosong.
	  */
	Jalak() : Animal(0.1,0.005,true) {}

	/** @brief Constructor.
	  * Menciptakan objek jalak kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat jalak.
	  * @param f Jumlah makanan jalak.
	  * @param t Status jinak jalak.
	  */
	Jalak(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Interact.
	  * Menampilkan suara jalak pada layar.
	  */
	void Interact() { cout << "Tweet!" << endl; }
};

#endif