#ifndef CAGE_H
#define CAGE_H

#include "Point.h"

/** @class Cage.
  * Kelas Cage merupakan himpunan Cell yang bertipe sama.
  */
class Cage
{
public:
	/** @brief Constructor.
	  * Menciptakan Cage kosong tanpa animal.
	  */
	Cage();

	/** @brief Constructor.
	  * Menciptakan Cage dengan size s tanpa animal.
	  * @param s Nilai ukuran Cage.
	  */
	Cage(int s);

	/** @brief Copy Constructor.
	  * @param c Objek yang akan di-copy.
	  */
	Cage(const Cage& c);

	/** @brief Operator =.
	  * @param c Objek yang akan di-assign.
	  * @return Mengeluarkan Cage hasil assignment.
	  */
	Cage& operator=(const Cage& c);

	/** @brief Destructor.
	  */
	~Cage();

	/** @brief Menentukan apakah cage penuh.
	  * @return Mengeluarkan true jika cage penuh.
	  */
	boolean IsFull();

private:
	Point* Loc; // himpunan Cell yang terdapat dalam Cage
	const int MaxSize = 100; // ukuran maksimal Cage
	int size; //ukuran Cage
	Animal* a; // Binatang yang terdapat dalam cage tersebut
}

#endif
