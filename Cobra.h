/**	@file	Cobra.h
  */

#ifndef COBRA_H
#define COBRA_H

#include "LandAnimal.h"
#include "Carnivore.h"
#include "Reptile.h"

/** @class Cobra.
  * Kelas Cobra merupakan kelas untuk real object cobra.
  */
class Cobra : public LandAnimal, public Carnivore, public Reptile {
public :
	/** @brief Constructor.
	  * Menciptakan objek cobra kosong.
	  */
	Cobra() : Animal(20,1,false) {}

	/** @brief Constructor.
	  * Menciptakan objek cobra kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat cobra.
	  * @param f Jumlah makanan cobra.
	  * @param t Status jinak cobra.
	  */
	Cobra(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Destructor.
	  */
	virtual ~Cobra() {}

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara cobra.
	  */
	string interact() { return ("Ssshh!"); }

	/** @brief clone.
	  * Melakukan cloning untuk menciptakan objek baru.
	  * @return Mengeluarkan pointer to cobra objek tersebut.
	  */
	virtual Cobra* clone() const {return new Cobra(*this);}

	/** @brief render.
	  * @return Mengembalikan char yang merupakan representasi objek yang dicetak.
	  */
	char render(){return 'C';}
};

#endif