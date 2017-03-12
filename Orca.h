// file Orca.h

#ifndef ORCA_H
#define ORCA_H

#include "WaterAnimal.h"
#include "Carnivore.h"
#include "Mammal.h"

/** @class Orca.
  * Kelas Orca merupakan kelas untuk real object orca.
  */
class Orca : public WaterAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * Menciptakan objek orca kosong.
	  */
	Orca() : Animal(4000,200,false) {}

	/** @brief Constructor.
	  * Menciptakan objek orca kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat orca.
	  * @param f Jumlah makanan orca.
	  * @param t Status jinak orca.
	  */
	Orca(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Destructor.
	  */
	virtual ~Orca() {}

	/** @brief Interact.
	  * Menampilkan suara orca pada layar.
	  */
	string interact() { return ("Ngiak!"); }

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to orca objek tersebut
	  */
	virtual Orca* clone() const {return new Orca(*this);}
};

#endif