/**	@file	Dugong.h
  */

#ifndef DUGONG_H
#define DUGONG_H

#include "Mammal.h"
#include "Herbivore.h"
#include "WaterAnimal.h"

/** @class Dugong
  * Kelas Dugong merupakan kelas untuk real object Dugong
  */
class Dugong : public WaterAnimal, public Herbivore, public Mammal{
public:
	/** @brief Constructor.
	  * Menciptakan objek Dugong.
	  */
	Dugong() : Animal(500, 25, true) {}

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Dugong dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Dugong.
	  * @param k Jumlah makanan Dugong.
	  * @param t Status jinak Dugong.
	  */
	Dugong(float w, float f, bool t) : Animal(w, f, t) {}

	/** @brief Destructor.
	  */
	virtual ~Dugong() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Dugong.
	  */
	string interact() {return ("Splashh!");}

	/** @brief Melakukan cloning untuk menciptakan objek Dugong baru
	  * @return Mengembalikan pointer to Dugong objek tersebut.
	  */
	virtual Dugong* clone() const {return new Dugong(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Dugong.
	  */
	char render(){return 'U';}
	
};

#endif