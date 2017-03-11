#ifndef ANIMAL_H
#define ANIMAL_H

#include "Point.h"

/** @class Animal.
  * Kelas abstrak Animal merepresentasikan binatang dalam Virtual Zoo
  */
class Animal{
public:

	/** @brief Constructor.
	  * Menciptakan animal kosong dengan weight w, food f, tame t, dan pos p.
	  * @param w Nilai berat binatang.
	  * @param f Nilai jumlah makanan yang dibutuhkan binatang.
	  * @param t Status jinak binatang.
	  * @param p Lokasi binatang.
	  */
	Animal(float w, float f, bool t, Point p);

	/** @brief Copy Constructor.
	  * @param A Objek yang akan di-copy.
	  */
	Animal(const Animal& A);

	/** @brief Operator =.
	  * @param A Objek yang akan di-assign.
	  */
	Animal& operator= (const Animal& A);

	/** @brief Destrutor.
	  */
	~Animal();
	
	/** @brief GetWeight.
	  * @return Mengembalikan nilai weight binatang.
	  */
	float GetWeight();

	/** @brief GetFood.
	  * @return Mengembalikan nilai food binatang.
	  */
	float GetFood();

	/** @brief GetTame.
	  * @return Mengembalikan status tame binatang.
	  */
	bool GetTame();

	/** @brief GetPos.
	  * @return Mengembalikan nilai lokasi binatang.
	  */
	Point GetPos();

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

protected:
	float weight;
	float food;
	bool tame;
	Point pos; //lokasi
};

#endif
