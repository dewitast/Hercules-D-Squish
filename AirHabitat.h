#ifndef AIRHABITAT_H
#define AIRHABITAT_H

/** @class AirHabitat.
  * Kelas real AirHabitat merupakan simulasi dari habitat udara.
  */

class AirHabitat : public Habitat{
public:
	/** @brief Constructor.
	  * Menciptakan habitat udara.
	  */
	AirHabitat();

	/** @brief Copy Constructor.
	  * @param a Objek yang akan di-copy.
	  */
	AirHabitat(const AirHabitat& a);

	/** @brief Operator =.
	  * @param a Objek yang akan diassign.
	  */
	AirHabitat& operator= (const AirHabitat& a);

	/** @brief Destrutor.
	  */
	~AirHabitat();

private:


};

#endif