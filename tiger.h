/**	@file tiger.h
  */

#ifndef TIGER_H
#define TIGER_H

#include "carnivore.h"
#include "land_animal.h"
#include "mammal.h"

/** @class Tiger
  * kelas Tiger merupakan kelas untuk real object Tiger
  */
class Tiger : public LandAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek Tiger.
	  */
	Tiger() : Animal(200, 10, false) { }

	/** @brief Constructor dengan parameter.
	  * Menciptakan objek Tiger dengan berat w, jumlah makanan f, dan status jinak t
	  * @param w Berat Tiger.
	  * @param f Jumlah makanan Tiger.
	  * @param t Status jinak Tiger.
	  */
	Tiger(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Destructor.
	  */
	virtual ~Tiger() {}

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Tiger.
	  */
	string Interact() {return ("Growl");}

	/** @brief Melakukan cloning untuk menciptakan objek Tiger baru
	  * @return Mengembalikan pointer to Tiger objek tersebut.
	  */
	virtual Tiger* Clone() const {return new Tiger(*this);}

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Tiger.
	  */
	char Render(){return 'T';}

};

#endif