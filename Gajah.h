#ifndef GAJAH_H
#define GAJAH_H

#include "Herbivore.h"
#include "LandAnimal.h"
#include "Mammal.h"

/** @class Gajah.
  * Kelas Gajah merupakan .
  */
class Gajah : virtual public Herbivore, virtual public LandAnimal, virtual public Mammal {
public :
	/** @brief Constructor.
	  * Menciptakan objek gajah kosong.
	  */
	Gajah();

	/** @brief Constructor.
	  * Menciptakan objek gajah kosong dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat gajah.
	  * @param k Jumlah makanan gajah.
	  * @param t Status jinak gajah.
	  */
	Gajah(float w, float f, bool t);

	/** @brief Copy Constructor.
	  * @param G Objek yang akan di-copy.
	  */
	Gajah(const Gajah& G);

	/** @brief Operator =.
	  * @param G Objek yang akan diassign.
	  */
	Gajah& operator= (const Gajah& G);

	/** @brief Destrutor.
	  */
	~Gajah();
private :

}

#endif