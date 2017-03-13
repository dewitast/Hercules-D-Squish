/**	@file cage.h
  */

#ifndef CAGE_H
#define CAGE_H

#include "point.h"
#include "animal.h"

/** @class Cage.
  * Kelas Cage merupakan himpunan Cell yang bertipe sama.
  */
class Cage {
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

	/** @brief Constructor.
	  * Menciptakan Cage dengan size 1 dan loc i,j.
	  * @param i,j absis dan ordinat Point pada Cage.
	  */
	Cage(int i, int j);

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

	/** @brief IsFull.
	  * Menentukan apakah cage penuh.
	  * @return Mengeluarkan true jika cage penuh.
	  */
	bool IsFull() const {return (TotalAnimal == 3*size/10);}

	/** @brief GetSize.
	  * @return Mengembalikan nilai ukuran Cage.
	  */
	int GetSize() const {return size;}

	/** @brief GetAnimal.
	  * @return Mengembalikan array animal pada Cage.
	  */
	Animal* GetAnimal(int i) const {return a[i];}

	/** @brief GetTotalAnimal.
	  * @return Mengembalikan jumlah binatang pada Cage.
	  */
	int GetTotalAnimal() const {return TotalAnimal;}

	/** @brief GetPoint.
	  * @param i Nilai indeks yang akan diperiksa.
	  * @return Mengembalikan lokasi Cage pada indeks i.
	  */
	Point GetPoint(int i) const {return (Loc[i]);}

	/** @brief AdoptAnimal.
	  * @param A Objek binatang yang akan dimasukkan.
	  */
	void AdoptAnimal(Animal& A);

	/** @brief ReleaseAnimal.
	  * Melepas suatu binatang yang terdapat pada cage.
	  * @param i Nilai indeks binatang yang akan dibuang.
	  */
	void ReleaseAnimal(int i);

	/** @brief IsEmpty.
	  * @return Menghasilkan true jika Cage kosong.
	  */
	bool IsEmpty() const {return size==0;}

	/** @brief IsOccupied.
	  * Menentukan apakah Cage sudah terisi.
	  * @param i Nilai indeks yang akan diperiksa.
	  * @return Mengembalikan true jika terdapat binatang habitat Cage pada indeks ke i.
	  */
	bool IsOccupied(int i) const;

	/** @brief IsOccupied.
	  * Menentukan apakah Cage sudah terisi.
	  * @param p Objek point lokasi yang akan diperiksa.
	  * @return Mengembalikan true jika terdapat binatang habitat Cage pada point p.
	  */
	bool IsOccupied(const Point& p) const;

	/** @brief IsInCage.
	  * Menentukan apakah suatu binatang terdapat pada cage.
	  * @param A Objek animal yang akan diperiksa.
	  * @return Mengeluarkan indeks A jika A berada pada cage dan -1 jika tidak ada.
	  */
	int IsInCage(const Animal &A) const;

	/** @brief IsInCage.
	  * Menentukan apakah P terdapat dalam cage.
	  * @param P Point yang akan dicari.
	  * @return Mengeluarkan true jika P terdapat dalam cage;
	  */
	bool IsInCage(const Point& P) const;

	/** @brief Interact.
	  * Mencetak interaksi animal cage ke layar.
	  */
	void Interact() const;

	/** @brief AddPoint.
	  * Menambahkan Loc baru di dalam Cage.
	  */
	void AddPoint(Point P);

	/** @brief CanPut.
	  * Menentukan apakah A dapat dimasukkan ke cage.
	  * @param A Animal yang akan dimasukkan.
	  * @return Mengeluarkan true jika A dapat dimasukkan ke cage.
	  */
	bool CanPut(const Animal& A) const;

	/** @brief Move.
	  * Menggerakkan semua binatang yang terdapat pada cage.
	  */
	bool Move();

private:
	Point* Loc; // himpunan Cell yang terdapat dalam Cage
	const int MaxSize = 100; // ukuran maksimal Cage
	int size; //ukuran Cage
	Animal** a; // array of pointer to binatang yang terdapat dalam cage tersebut
	int TotalAnimal; // jumlah hewan yang ada pada cage
};

#endif
