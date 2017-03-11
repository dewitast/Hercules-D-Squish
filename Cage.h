#ifndef CAGE_H
#define CAGE_H

#include "Point.h"
#include "Animal.h"

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
	bool IsFull();

	/** @brief Getter.
	  */
	int GetSize();
	Animal GetAnimal();
	int GetTotalAnimal();

	/** @brief Setter.
		@param A Objek binatang yang akan dimasukkan.
	  */
	void AdoptAnimal(const Animal& A);

	/** @brief Mengembalikan true jika Habitat merupakan LandHabitat
	  */
	bool IsLand();

	/** @brief Mengembalikan true jika Habitat merupakan WaterHabitat
	  */
	bool IsWater();

	/** @brief Mengembalikan true jika Habitat merupakan AirHabitat
	  */
	bool IsAir();

private:
	Point* Loc; // himpunan Cell yang terdapat dalam Cage
	const int MaxSize = 100; // ukuran maksimal Cage
	const int size; //ukuran Cage
	Animal** a; // array of pointer to binatang yang terdapat dalam cage tersebut
	int TotalAnimal; // jumlah hewan yang ada pada cage
};

#endif
