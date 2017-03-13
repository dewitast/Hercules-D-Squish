/**	@file  habitat.h
  */

#ifndef HABITAT_H
#define HABITAT_H

#include "cell.h"

/** @class Habitat
  * Kelas abstrak Habitat merupakan simulasi dari habitat
  */
class Habitat : public Cell {
public :
  /** @brief Render dari Habitat.
    * @return Mengembalikan char yang merupakan representasi kode Habitat.
    */
  virtual char Render() = 0;
  /** @brief Menentukan apakah Habitat merupakan LandHabitat.
    * @return Mengembalikan true jika Habitat merupakan LandHabitat.
    */
  virtual bool IsLandHabitat() {
  	return (Render() == LH);
  }
  /** @brief Menentukan apakah Habitat merupakan WaterHabitat.
    * @return Mengembalikan true jika Habitat merupakan WaterHabitat.
    */
  virtual bool IsWaterHabitat() {
  	return (Render() == WH);
  }
  /** @brief Menentukan apakah Habitat merupakan AirHabitat.
    * @return Mengembalikan true jika Habitat merupakan AirHabitat.
    */
  virtual bool IsAirHabitat() {
  	return (Render() == AH);
  }
  /** @brief Menentukan apakah Habitat merupakan Entrance.
    * @return Mengembalikan false jika Habitat merupakan Entrance.
    */
  virtual bool IsEntrance() {
  	return false;
  }
  /** @brief Menentukan apakah Habitat merupakan Exit.
    * @return Mengembalikan false jika Habitat merupakan Exit.
    */
  virtual bool IsExit() {
  	return false;
  }
  /** @brief Menentukan apakah Habitat merupakan Restaurant.
    * @return Mengembalikan false jika Habitat merupakan Restaurant.
    */
  virtual bool IsRestaurant() {
  	return false;
  }
  /** @brief Menentukan apakah Habitat merupakan Park.
    * @return Mengembalikan false jika Habitat merupakan Park.
    */
  virtual bool IsPark() {
  	return false;
  }
  /** @brief Menentukan apakah Habitat merupakan Road.
    * @return Mengembalikan false jika Habitat merupakan Road.
    */
  virtual bool IsRoad() {
  	return false;
  }
protected :
  /** @brief Representasi LandHabitat ketika dicetak ke layar.
    */
  static const char LH = '@';
  /** @brief Representasi AirHabitat ketika dicetak ke layar.
    */
  static const char AH = '^';
  /** @brief Representasi WaterHabitat ketika dicetak ke layar.
    */
  static const char WH = '~';
};

#endif