/**	@file	Point.h
  */

#ifndef POINT_H
#define POINT_H

/** @class Point
  * Kelas Point merupakan kelas dengan atribut absis dan ordinat
  */
class Point {
public :
	/** @brief Constructor.
	  * Menciptakan point kosong dengan absis dan ordinat sama dengan 0.
	  */
	Point();

	/** @brief Constructor dengan parameter.
	  * Menciptakan point kosong dengan absis abs dan ordinat ord
	  * @param abs Nilai absis point.
	  * @param ord Nilai ordinat point.
	  */
	Point(int abs, int ord);

	/** @brief Copy Constructor.
	  * @param P Objek yang akan di-copy.
	  */
	Point(const Point& P);

	/** @brief Operator =.
	  * @param P Objek yang akan diassign.
	  * @return Menghasilkan objek hasil copy objek P.
	  */
	Point& operator= (const Point& P);

	/** @brief Destructor.
	  */
	~Point() {}

	/** @brief Getter absis
	  * @return Mengembalikan nilai absis point.
	  */
	int GetAbsis() const;

	/** @brief Getter ordinat
	  * @return Mengembalikan nilai ordinat point.
	  */
	int GetOrdinat() const;

	/** @brief Setter absis
	  * @param abs Nilai absis yang akan di-set pada point.
	  */
	void SetAbsis(int abs);

	/** @brief Setter ordinat
	  * @param ord Nilai ord yang akan di-set pada point.
	  */
	void SetOrdinat(int ord);

	/** @brief Memeriksa kesamaan dua point
	  * @param P Objek yang akan dibandingkan.
	  * @return Menghasilkan true jika P memiliki nilai yang sama dengan current object.
	  */
	bool IsSame(Point P) const;
	
private :
	int absis;
	int ordinat;
	
};

#endif