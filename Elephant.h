/**	@file	Elephant.h
  */

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "LandAnimal.h"
#include "Herbivore.h"
#include "Mammal.h"

/** @class Elephant
  * Kelas Elephant merupakan kelas untuk real object Elephant
  */
class Elephant : public LandAnimal, public Herbivore, public Mammal {
public :
	/** @brief Constructor.
	  * Menciptakan objek Elephant.
	  */
	Elephant() : Animal(5000,250,true) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Elephant dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Elephant.
	  * @param f Jumlah makanan Elephant.
	  * @param t Status jinak Elephant.
	  */
	Elephant(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Destructor.
	  */
	virtual ~Elephant() {}

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara Elephant.
	  */
	string interact() { return ("Prett!"); }

	/** @brief Melakukan cloning untuk menciptakan objek Elephant baru
	  * @return Mengembalikan pointer to Elephant objek tersebut.
	  */
	virtual Elephant* clone() const {return new Elephant(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Elephant.
	  */
	char render(){return 'H';}
	
};

#endif