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
class Zoo
{
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

	/** @brief operator<<.
	  * Melakukan print Zoo.
	  * @param o Objek ostream.
	  * @param z Objek zoo yang akan dicetak.
	  * @return Mengeluarkan objek ostream yang akan dicetak.
	  */
	friend ostream& operator<<(ostream& o,const Zoo& z);

	/** @brief operator>>.
	  * Melakukan read Zoo.
	  * @param i Objek istream.
	  * @param z Objek zoo yang akan dibaca.
	  * @return Mengeluarkan objek ostream yang akan dicetak.
	  */
	friend istream& operator>>(istream& is, Zoo& z);

	/** @brief GetElement.
	  * @param P Point yang akan diambil.
	  * @return Mengembalikan cell yang terdapat pada lokasi point P.
	  */
	Cell& GetElement(const Point& P) const;

	/** @brief GetElement.
	  * @param b Nilai baris yang akan diambil.
	  * @param k Nilai kolom yang akan diambil.
	  * @return Mengembalikan cell yang terdapat pada baris ke b dan kolom ke k.
	  */
	Cell& GetElement(int b,int k) const;

	/** @brief GetJumlahCage.
	  * @return Mengembalikan jumlah cage pada zoo.
	  */
	int GetJumlahCage() const;

	/** @brief GetCage.
	  * @param i Nilai indeks yang akan dikeluarkan cage nya.
	  * @return Mengembalikan cage zoo pada indeks ke-i.
	  */
	Cage& GetCage(int i) const;

	/** @brief GetBeff.
	  * @return Mengembalikan baris efektif zoo.
	  */
	int GetBeff() const {return beff;}

	/** @brief GetKeff.
	  * @return Mengembalikan kolom efektif zoo.
	  */
	int GetKeff() const {return keff;}

	/** @brief AddAnimal.
	  * Menambah animal A ke cage pada indeks ke-i.
	  * @param i Nilai indeks cage yang akan ditambah animal.
	  * @param A Objek binatang yang akan dimasukkan.
	  */
	void AddAnimal(int i,Animal& A);

	/** @brief SearchPoint.
	  * Mencari point berada di cage mana.
	  * @param P Point yang akan dicari.
	  * @return Mengeluarkan cage yang mengandung P.
	  */
	Cage& SearchPoint(const Point& P) const;

	/** @brief SearchPoint.
	  * Mencari point berada di cage mana.
	  * @param i dan j absis dan ordinat yang akan dicari.
	  * @return Mengeluarkan cage yang mengandung P.
	  */
	Cage& SearchPoint(int i, int j) const;

	/** @brief AddCage.
	  * Menambahkan cage baru
	  * @param c Cage yang ingin ditambahkan
	  */
	void AddCage(Cage c);

public:
	Cell ***cell; //matrix of pointer to cell
	Cage *cage; //array of cage
	int jumlahcage;
	const int baris;
	const int kolom;
	int beff;
	int keff;
};

#endif
