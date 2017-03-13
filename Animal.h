/**	@file	Animal.h
  */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;
#include "Point.h"

/** @class Animal
  * Kelas abstrak Animal merepresentasikan binatang dalam Virtual Zoo
  */
class Animal {
public:
	/** @brief Constructor.
	  * Menciptakan animal kosong.
	  */
	Animal();

	/** @brief Constructor dengan parameter.
	  * Menciptakan animal kosong dengan weight w, food f, dan tame t
	  * @param w Nilai berat binatang.
	  * @param f Nilai jumlah makanan yang dibutuhkan binatang.
	  * @param t Status jinak binatang.
	  */
	Animal(float w, float f, bool t);

	/** @brief Destructor.
	  */
	virtual ~Animal() {}
	
	/** @brief Getter weight
	  * @return Mengembalikan nilai weight binatang.
	  */
	float GetWeight() const;

	/** @brief Getter food
	  * @return Mengembalikan nilai food binatang.
	  */
	float GetFood() const;

	/** @brief Getter tame
	  * @return Mengembalikan status tame binatang.
	  */
	bool GetTame() const;

	/** @brief Getter pos
	  * @return Mengembalikan nilai lokasi binatang.
	  */
	Point GetPos() const;

	/** @brief Setter weight
	  * @param w Nilai weight yang akan di-set pada animal.
	  */
	void SetWeight(float w);

	/** @brief Setter food
	  * @param f Nilai food yang akan di-set pada animal.
	  */
	void SetFood(float f);

	/** @brief Setter tame
	  * @param t Status tame yang akan di-set pada animal.
	  */
	void SetTame(bool t);

	/** @brief Setter point dengan parameter dua buah nilai integer
	  * @param abs Nilai absis yang akan di-set pada lokasi animal.
	  * @param ord Nilai ordinat yang akan di-set pada lokasi animal.
	  */
	void SetPoint(int abs, int ord);

	/** @brief Setter point dengan parameter sebuah point
	  * @param P Objek point yang akan di-set pada lokasi animal.
	  */
	void SetPoint(const Point& P);

	/** @brief Memeriksa kesamaan dua animal
	  * @param A Objek animal yang akan dibandingkan.
	  * @return Mengeluarkan true jika current object sama dengan animal A.
	  */
	bool IsSame(const Animal& A) const;

	/** @brief interact
	  * @return Mengembalikan string yang merepresentasikan suara Animal.
	  */
	virtual string interact() = 0; 

	/** @brief Melakukan cloning untuk menciptakan objek Animal baru
	  * @return Mengembalikan pointer to Animal objek tersebut.
	  */
	virtual Animal* clone() const = 0;

	/** @brief render
	  * @return Mengembalikan char yang merupakan representasi kode Animal.
	  */
	virtual char render() = 0;

protected:
	float weight;
	float food;
	bool tame;
	Point pos; //lokasi
	
};

#endif