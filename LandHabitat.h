#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include "Habitat.h"

/** @class LandHabitat.
  * Kelas real LandHabitat merupakan simulasi dari habitat darat.
  */
class LandHabitat : public Habitat{
public:
	/** @brief Constructor.
	  * Menciptakan habitat darat.
	  */
	LandHabitat();

	/** @brief Copy Constructor.
	  * @param a Objek yang akan di-copy.
	  */
	LandHabitat(const LandHabitat& a);

	/** @brief Operator =.
	  * @param a Objek yang akan diassign.
	  */
	LandHabitat& operator= (const LandHabitat& a);

	/** @brief Destrutor.
	  */
	~LandHabitat();
	
protected:

};

#endif