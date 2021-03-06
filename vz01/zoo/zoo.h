/**	@file zoo.h
  */

#ifndef ZOO_H
#define ZOO_H

#include "../cell/cell.h"
#include "../cage/cage.h"
#include "../point/point.h"
#include "../animal/animal.h"
#include "../land_habitat/land_habitat.h"
#include "../water_habitat/water_habitat.h"
#include "../air_habitat/air_habitat.h"
#include "../restaurant/restaurant.h"
#include "../park/park.h"
#include "../road/road.h"
#include "../exit/exit.h"
#include "../entrance/entrance.h"
#include "../alligator/alligator.h"
#include "../cobra/cobra.h"
#include "../cormorant/cormorant.h"
#include "../dolphin/dolphin.h"
#include "../duck/duck.h"
#include "../dugong/dugong.h"
#include "../eagle/eagle.h"
#include "../elephant/elephant.h"
#include "../giraffe/giraffe.h"
#include "../goat/goat.h"
#include "../iguana/iguana.h"
#include "../jalak/jalak.h"
#include "../komodo/komodo.h"
#include "../lion/lion.h"
#include "../orca/orca.h"
#include "../owl/owl.h"
#include "../parrot/parrot.h"
#include "../polar_bear/polar_bear.h"
#include "../tiger/tiger.h"
#include "../walrus/walrus.h"

/** @class Zoo
  * Kelas abstrak Zoo merupakan simulasi dari kebun binatang berisi matriks Cell
  */
class Zoo {
public:
	/** @brief Constructor.
	  * Menciptakan zoo kosong yang berisi matriks kosong.
	  */
	Zoo();

	/** @brief Constructor dengan parameter.
	  * Menciptakan zoo kosong dengan jumlah baris b, jumlah kolom k, dan jumlah cage j
	  * @param b Nilai ukuran baris matriks.
	  * @param k Nilai ukuran kolom matriks.
	  * @param j Nilai banyaknya cage.
	  */
	Zoo(int b,int k,int j);

	/** @brief Copy Constructor.
	  * @param z Objek yang akan di-copy.
	  */
	Zoo(const Zoo& z);

	/** @brief Operator =.
	  * @param z Objek yang akan di-assign.
	  * @return Menghasilkan objek hasil copy objek z.
	  */
	Zoo& operator= (const Zoo& z);

	/** @brief Destrutor.
	  */
	~Zoo();

	/** @brief Operator <<.
	  * Melakukan print Zoo
	  * @param o Objek ostream.
	  * @param z Objek Zoo yang akan dicetak.
	  * @return Menghasilkan objek ostream yang akan dicetak.
	  */
	friend ostream& operator<<(ostream& o,const Zoo& z);

	/** @brief Operator >>.
	  * Melakukan read Zoo
	  * @param i Objek istream.
	  * @param z Objek Zoo yang akan dibaca.
	  * @return Mengeluarkan objek istream yang telah dibaca.
	  */
	friend istream& operator>>(istream& is, Zoo& z);

	/** @brief ReadAnimal
	  * Membaca Animal dari file eksternal.
	  */
	void ReadAnimal();

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
