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
	bool IsFull() const {return (TotalAnimal == 3*size/10);}

	/** @brief Getter Size.
		@return Mengeluarkan ukuran Cage.
	  */
	int GetSize() const {return size;}

	/** @brief Getter Animal.
		@return Mengeluarkan array animal pada Cage.
	  */
	Animal* GetAnimal() const {return *a;}

	/** @brief Getter jumlah binatang.
		@return Mengeluarkan jumlah binatang pada Cage.
	  */
	int GetTotalAnimal() const {return TotalAnimal;}

	/** @brief Getter Point.
		@param i Nilai indeks yang akan diperiksa.
		@return Mengeluarkan lokasi Cage pada indeks i.
	  */
	Point GetPoint(int i) const {return (Loc[i]);}

	/** @brief Setter.
		@param A Objek binatang yang akan dimasukkan.
	  */
	void AdoptAnimal(Animal& A);

	/** @brief Menentukan apakah Cage kosong.
		@return Mengeluarkan true jika Cage kosong
	  */
	bool IsEmpty() const {return size==0;}

	/** @brief Menentukan apakah Cage merupakan Cage berisi LandHabitat.
		@return Mengembalikan true jika Habitat dalam Cage merupakan LandHabitat.
	  */
	bool IsLand() const;

	/** @brief Menentukan apakah Cage merupakan Cage berisi WaterHabitat.
		@return Mengembalikan true jika Habitat dalam Cage merupakan WaterHabitat.
	  */
	bool IsWater() const;

	/** @brief Menentukan apakah Cage merupakan Cage berisi AirHabitat.
		@return Mengembalikan true jika Habitat dalam Cage merupakan AirHabitat.
	  */
	bool IsAir() const;

	/** @brief Menentukan apakah Cage sudah terisi.
		@param i Nilai indeks yang akan diperiksa.
		@return Mengembalikan true jika terdapat binatang habitat Cage pada indeks ke i.
	  */
	bool IsOccupied(int i);

private:
	Point* Loc; // himpunan Cell yang terdapat dalam Cage
	const int MaxSize = 100; // ukuran maksimal Cage
	const int size; //ukuran Cage
	Animal** a; // array of pointer to binatang yang terdapat dalam cage tersebut
	int TotalAnimal; // jumlah hewan yang ada pada cage
};

#endif
