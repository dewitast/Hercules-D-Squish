#ifndef ZOO_H
#define ZOO_H

#include "Cell.h"

/** @class Zoo.
  * Kelas abstrak Zoo merupakan simulasi dari kebun binatang berisi matriks Cell.
  */
class Zoo{
public:
	/** @brief Constructor.
	  * Menciptakan zoo kosong yang berisi matriks kosong.
	  */
	Zoo();

	/** @brief Constructor.
	  * Menciptakan zoo kosong dengan jumlah baris b dan jumlah kolom k.
	  * @param b Nilai ukuran baris matriks.
	  * @param k Nilai ukuran kolom matriks.
	  */
	Zoo(int b,int k);

	/** @brief Copy Constructor.
	  * @param z Objek yang akan di-copy.
	  */
	Zoo(const Zoo& z);

	/** @brief Operator =.
	  * @param z Objek yang akan di-assign.
	  */

	Zoo& operator= (const Zoo& z);

	/** @brief Destrutor.
	  */
	~Zoo();

protected:
	Cell ***cell; //matrix of pointer to cell
	const int baris;
	const int kolom;
};

#endif
