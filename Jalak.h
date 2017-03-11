// file Jalak.h

#ifndef JALAK_H
#define JALAK_H

#include "FlyingAnimal.h"
#include "Herbivore.h"
#include "Aves.h"

/** @class Jalak.
  * Kelas Jalak merupakan kelas untuk real object jalak.
  */
class Jalak : public FlyingAnimal, public Herbivore, public Aves {
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
	string interact() { return ("Tweet!"); }

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to jalak objek tersebut
	  */
	virtual Jalak* clone() const {return new Jalak(*this);}
};

#endif