#ifndef ZOO_H
#define ZOO_H

#include "Cell.h"
#include "Cage.h"
#include "Point.h"
#include "Animal.h"
#include "LandHabitat.h"
#include "WaterHabitat.h"
#include "AirHabitat.h"
#include "Restaurant.h"
#include "Park.h"
#include "Road.h"
#include "Exit.h"
#include "Entrance.h"

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
	  * @param j Nilai banyak cage.
	  */
	Zoo(int b,int k,int j);

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

	/** @brief Melakukan print Zoo.
		@param o Objek ostream.
		@param z Objek zoo yang akan dicetak.
		@return Mengeluarkan objek ostream yang akan dicetak.
	  */
	friend ostream& operator<<(ostream& o,const Zoo& z);

	/** @brief Melakukan read Zoo.
		@param i Objek istream.
		@param z Objek zoo yang akan dibaca.
		@return Mengeluarkan objek ostream yang akan dicetak.
	  */
	friend istream& operator>>(istream& is, Zoo& z);

	/** @brief Mengembalikan cell yang terdapat pada lokasi point P.
		@param P Point yang akan diambil.
	  */
	Cell& GetElement(const Point& P);

	/** @brief Mengembalikan cell yang terdapat pada baris ke b dan kolom ke k.
		@param b Nilai baris yang akan diambil.
		@param k Nilai kolom yang akan diambil.
	  */
	Cell& GetElement(int b,int k);

	/** @brief Menambah animal A ke cage pada indeks ke-i.
		@param i Nilai indeks cage yang akan ditambah animal.
		@param A Objek binatang yang akan dimasukkan.
	  */
	void AddAnimal(int i,Animal& A);

private:
	Cell ***cell; //matrix of pointer to cell
	Cage *cage; //array of cage
	int jumlahcage;
	const int baris;
	const int kolom;
	int beff;
	int keff;
};

#endif
