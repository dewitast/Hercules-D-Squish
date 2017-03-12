// file Driver.h

#ifndef DRIVER_H
#define DRIVER_H

#include "Zoo.h"

class Driver {
	public :
		/** @brief Constructor.
		  * Menciptakan Cage kosong tanpa animal.
		  */
		Driver();

		void DisplayZoo();
		void TourZoo();
		float FoodCalc();
		virtual ~Driver();
	private :
		Zoo Z;
};

#endif