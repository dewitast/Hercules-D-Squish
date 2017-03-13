/**	@file	Driver.h
  */

#ifndef DRIVER_H
#define DRIVER_H

#include "../zoo/zoo.h"

/** @class Driver.
  * Kelas Driver merupakan kelas sebagai pilihan menu aplikasi.
  */
class Driver {
	public:
		/** @brief Constructor.
		  * Menciptakan Cage kosong tanpa animal.
		  */
		Driver();

		/** @brief DisplayZoo.
		  * Menampilkan zoo ke layar.
		  */
		void DisplayZoo();

		/** @brief GetExperience.
		  * Mencetak ke layar eksperimen yang didapat pengunjung.
		  */
		void GetExperience();

		/** @brief DisplayZoo.
		  * Menampilkan tur yang terjadi ke layar
		  */
		 void DisplayTour();

		/** @brief TourZoo.
		  * Melakukan tur zoo.
		  */
		void TourZoo();

		/** @brief FoodCalc.
		  * Melakukan perhitungan makanan yang harus disiapkan.
		  * @return Mengembalikan jumlah makanan yang harus disiapkan.
		  */
		float FoodCalc();

		/** @brief Destructor.
	 	 */
		virtual ~Driver() {}

		/** @brief DisplayMenu.
		  * Menampilkan menu utama ke layar.
		  */
		void DisplayMenu();

	    /** @brief GetZoo.
	      * @return Mengembalikan zoo.
	      */
		Zoo& GetZoo();

		/** @brief GetZoo.
	      * @return Mengembalikan point.
	      */
		Point& GetPoint();
		
	public:
		Zoo Z;
		bool **visited; //matrix untuk menyatakan cell apa yang sudah dikunjungi.
		Point P; // current cell
};

#endif