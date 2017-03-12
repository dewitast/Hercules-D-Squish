//file : Tiger.h

#ifndef TIGER_H
#define TIGER_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "Mammal.h"

/** @class Tiger
  * kelas Tiger merupakan kelas untuk real object Tiger
  */

class Tiger : public LandAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek Tiger.
	  */
	Tiger() : Animal(200, 10, false) { }

	/** @brief Constructor.
	  * Menciptakan objek Tiger dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat tiger.
	  * @param f Jumlah makanan tiger.
	  * @param t Status jinak tiger.
	  */
	Tiger(float w, float f, bool t) : Animal(w, f, t) { }

	/** @brief Destructor.
	  */
	virtual ~Tiger() {}

	/** @brief Interact.
	  * Menampilkan suara Tiger pada layar.
	  */
	string interact() {return ("Growl");}

	/** @brief Melakukan cloning untuk menciptakan objek baru
		@return Mengeluarkan pointer to tiger objek tersebut
	  */
	virtual Tiger* clone() const {return new Tiger(*this);}

	/** @brief render.
	  * Menentukan render dari tiger.
	  * @return Mengembalikan char yang merupakan representasi objek ketika dicetak.
	  */
	char render(){return 'T';}
};

#endif