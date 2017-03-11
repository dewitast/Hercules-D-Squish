#ifndef TIGER_H
#define TIGER_H

#include "Carnivore.h"
#include "LandAnimal.h"
#include "Mammal.h"

/** @class Tiger
  * kelas Tiger 
  */

class Tiger : public LandAnimal, public Carnivore, public Mammal {
public:
	/** @brief Constructor.
	  * Menciptakan objek tiger.
	  */
	Tiger();

	/** @brief Constructor.
	  * Menciptakan objek tiger dengan berat w, jumlah makanan f, dan status jinak t.
	  * @param w Berat gajah.
	  * @param k Jumlah makanan gajah.
	  * @param t Status jinak gajah.
	  */
	Tiger(float w, float f, bool t, Point p);

	/** @brief Copy Constructor.
	  * @param G Objek yang akan di-copy.
	  */
	Tiger(const Tiger& T);

	/** @brief Operator =.
	  * @param G Objek yang akan diassign.
	  */
	Tiger& operator= (const Tiger& G);

	/** @brief Destrutor.
	  */
	~Tiger();


};

#endif