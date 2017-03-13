/**	@file	Jalak.h
  */

#ifndef JALAK_H
#define JALAK_H

#include "flying_animal.h"
#include "herbivore.h"
#include "aves.h"

/** @class Jalak
  * Kelas Jalak merupakan kelas untuk real object Jalak
  */
class Jalak : public FlyingAnimal, public Herbivore, public Aves {
public :
	/** @brief Constructor.
	  * Menciptakan objek Jalak.
	  */
	Jalak() : Animal(0.1,0.005,true) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Jalak dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Jalak.
	  * @param f Jumlah makanan Jalak.
	  * @param t Status jinak Jalak.
	  */
	Jalak(float w, float f, bool t) : Animal(w,f,t) {}

	/** @brief Destructor.
	  */
	virtual ~Jalak() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Jalak.
	  */
	string Interact() { return ("Tweet!"); }

	/** @brief Melakukan cloning untuk menciptakan objek Jalak baru
	  * @return Mengembalikan pointer to Jalak objek tersebut.
	  */
	virtual Jalak* Clone() const {return new Jalak(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Jalak.
	  */
	char Render(){return 'J';}
	
};

#endif