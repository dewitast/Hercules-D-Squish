#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;
#include "Point.h"

/** @class Animal.
  * Kelas abstrak Animal merepresentasikan binatang dalam Virtual Zoo
  */
class Animal{
public:

	/** @brief Constructor.
	  * Menciptakan animal kosong
	  */
	Animal();

	/** @brief Constructor.
	  * Menciptakan animal kosong dengan weight w, food f, tame t, dan pos p.
	  * @param w Nilai berat binatang.
	  * @param f Nilai jumlah makanan yang dibutuhkan binatang.
	  * @param t Status jinak binatang.
	  */
	Animal(float w, float f, bool t);
	
	/** @brief GetWeight.
	  * @return Mengembalikan nilai weight binatang.
	  */
	float GetWeight() const;

	/** @brief GetFood.
	  * @return Mengembalikan nilai food binatang.
	  */
	float GetFood() const;

	/** @brief GetTame.
	  * @return Mengembalikan status tame binatang.
	  */
	bool GetTame() const;

	/** @brief GetPos.
	  * @return Mengembalikan nilai lokasi binatang.
	  */
	Point GetPos() const;

	/** @brief SetWeight.
	  * @param w Nilai weight yang akan di-set pada animal.
	  */
	void SetWeight(float w);

	/** @brief SetFood.
	  * @param f Nilai food yang akan di-set pada animal.
	  */
	void SetFood(float f);

	/** @brief SetTame.
	  * @param t Status tame yang akan di-set pada animal.
	  */
	void SetTame(bool t);

	/** @brief SetPoint.
	  * @param abs Nilai absis yang akan di-set pada lokasi animal.
	  * @param ord Nilai ordinat yang akan di-set pada lokasi animal.
	  */
	void SetPoint(int abs, int ord);

	/** @brief SetPoint.
	  * @param P Objek point yang akan di-set pada lokasi animal.
	  */
	void SetPoint(const Point& P);

	/** @brief Interact.
	  */
	virtual string interact() = 0; 

protected:
	float weight;
	float food;
	bool tame;
	Point pos; //lokasi
};

#endif
