/**	@file	Komodo.h
  */

#ifndef KOMODO_H
#define KOMODO_H

#include "Reptile.h"
#include "Carnivore.h"
#include "LandAnimal.h"

/** @class Komodo
  * Kelas Komodo merupakan kelas untuk real object Komodo
  */
class Komodo : public LandAnimal, public Carnivore, public Reptile{
public:
	/** @brief Constructor.
	  * Menciptakan objek Komodo.
	  */
	Komodo() : Animal(120, 6, false) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Komodo dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Komodo.
	  * @param k Jumlah makanan Komodo.
	  * @param t Status jinak Komodo.
	  */
	Komodo(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Destructor.
	  */
	virtual ~Komodo() {}

	/** @brief interact.
	  * @return Mengembalikan string yang merepresentasikan suara Komodo.
	  */
	string interact() {return ("Slpp!");}

	/** @brief Melakukan cloning untuk menciptakan objek Komodo baru
	  * @return Mengembalikan pointer to Komodo objek tersebut.
	  */
	virtual Komodo* clone() const {return new Komodo(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Komodo.
	  */
	char render(){return 'K';}
	
};

#endif