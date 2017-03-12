/**	@file	Owl.h
  */

#ifndef OWL_H
#define OWL_H

#include "FlyingAnimal.h"
#include "Carnivore.h"
#include "Aves.h"

/** @class Owl
  * Kelas Owl merupakan kelas untuk real object Owl
  */
class Owl : public FlyingAnimal, public Carnivore, public Aves {
public :
	/** @brief Constructor.
	  * Menciptakan objek Owl.
	  */
	Owl() : Animal(1.5,0.075,true) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Owl dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Owl.
	  * @param f Jumlah makanan Owl.
	  * @param t Status jinak Owl.
	  */
	Owl(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Destructor.
	  */
	virtual ~Owl() {}

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara Owl.
	  */
	string interact() { return ("Hoot!"); }

	/** @brief Melakukan cloning untuk menciptakan objek Owl baru
	  * @return Mengembalikan pointer to Owl objek tersebut.
	  */
	virtual Owl* clone() const {return new Owl(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Owl.
	  */
	char render(){return 'O';}
	
};

#endif