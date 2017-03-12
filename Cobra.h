/**	@file	Cobra.h
  */

#ifndef COBRA_H
#define COBRA_H

#include "LandAnimal.h"
#include "Carnivore.h"
#include "Reptile.h"

/** @class Cobra
  * Kelas Cobra merupakan kelas untuk real object Cobra.
  */
class Cobra : public LandAnimal, public Carnivore, public Reptile {
public :
	/** @brief Constructor.
	  * Menciptakan objek Cobra.
	  */
	Cobra() : Animal(20,1,false) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Cobra dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Cobra.
	  * @param f Jumlah makanan Cobra.
	  * @param t Status jinak Cobra.
	  */
	Cobra(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Destructor.
	  */
	virtual ~Cobra() {}

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara Cobra.
	  */
	string interact() { return ("Ssshh!"); }

	/** @brief Melakukan cloning untuk menciptakan objek Cobra baru
	  * @return Mengembalikan pointer to Cobra objek tersebut.
	  */
	virtual Cobra* clone() const {return new Cobra(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Cobra.
	  */
	char render(){return 'C';}
	
};

#endif