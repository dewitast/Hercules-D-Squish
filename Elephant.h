// file Elephant.h

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "LandAnimal.h"
#include "Herbivore.h"
#include "Mammal.h"

/** @class Elephant.
  * Kelas Elephant merupakan kelas untuk real object elephant.
  */
class Elephant : public LandAnimal, public Herbivore, public Mammal {
public :
	/** @brief Constructor.
	  * Menciptakan objek elephant kosong.
	  */
	Elephant() : Animal(5000,250,true) {}

	/** @brief Constructor.
	  * Menciptakan objek elephant kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat elephant.
	  * @param f Jumlah makanan elephant.
	  * @param t Status jinak elephant.
	  */
	Elephant(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Destructor.
	  */
	virtual ~Elephant() {}

	/** @brief Interact.
	  * Menampilkan suara elephant pada layar.
	  */
	string interact() { return ("Prett!"); }

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to elephant objek tersebut
	  */
	virtual Elephant* clone() const {return new Elephant(*this);}

	/** @brief render.
	  * Menentukan render dari elephant.
	  * @return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return 'H';}
};

#endif