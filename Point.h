#ifndef POINT_H
#define POINT_H

/** @class Point.
  * Kelas Point merupakan kelas dengan atribut absis dan ordinat.
  */
class Point {
public :
	/** @brief Constructor.
	  * Menciptakan point kosong dengan absis dan ordinat sama dengan 0.
	  */
	Point();

	/** @brief Constructor.
	  * Menciptakan point kosong dengan absis abs dan ordinat ord.
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
	  */
	Point& operator= (const Point& P);

	/** @brief Destrutor.
	  */
	~Point();

	/** @brief GetAbsis.
	  * @return Mengembalikan nilai absis point.
	  */
	int GetAbsis() const;

	/** @brief GetOrdinat.
	  * @return Mengembalikan nilai ordinat point.
	  */
	int GetOrdinat() const;

	/** @brief SetAbsis.
	  * @param abs Nilai absis yang akan di-set pada point.
	  */
	void SetAbsis(int abs);

	/** @brief SetOrdinat.
	  * @param ord Nilai ord yang akan di-set pada point.
	  */
	void SetOrdinat(int ord);

	/** @brief Mengeluarkan true jika kedua point sama.
		@param P Objek point yang akan diperiksa.
	  */
	bool IsSame(Point P) const;
	
private :
	int absis;
	int ordinat;
};

#endif