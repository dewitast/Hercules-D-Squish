/**	@file	Driver.cpp
  */

#ifndef DRIVER_H
#define DRIVER_H

#include "Zoo.h"

/** @class Driver.
  * Kelas Driver merupakan kelas sebagai pilihan menu aplikasi.
  */
class Driver {
	public :
		/** @brief Constructor.
		  * Menciptakan Cage kosong tanpa animal.
		  */
		Driver();

		/** @brief DisplayZoo.
		  * Menampilkan peta Zoo pada layar.
		  */
		void DisplayZoo();

		/** @brief TourZoo.
		  * Melakukan perjalan tur pada aplikasi.
		  */
		void TourZoo();

		/** @brief FoodCalc.
		  * @return Menghasilkan jumlah perhitungan seluruh animal food pada zoo.
		  */
		float FoodCalc();

		/** @brief Destructor.
	 	 */
		virtual ~Driver();
		
	private :
		Zoo Z;
};

#endif