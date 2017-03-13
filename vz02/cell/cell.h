/**	@file  cell.h
  */
#include <iostream>
using namespace std;

#ifndef CELL_H
#define CELL_H

/** @class Cell.
  * Kelas Cell merupakan simulasi dari petak-petak yang terdapat dalam kebun binatang.
  */
class Cell {
public :
  /** @brief Constructor.
    * Menciptakan Cell kosong.
    */
  Cell();
  /** @brief Constructor dengan parameter.
    * Menciptakan Cell kosong dengan tipe objek ot dan render r.
    * @param ot Object type dari Cell.
    * @param r Render dari Cell.
    */
  Cell(string ot);
  /** @brief Destructor.
    */
  ~Cell();
  /** @brief Getter untuk object type.
    * @return Mengembalikan object type dari Cell.
    */
  string GetObjectType() const;
  /** @brief Getter untuk render.
    * @return Mengembalikan render dari Cell.
    */
  char GetRender() const;
  /** @brief Setter untuk object type dari Cell.
    * @param ot Nilai object type yang akan di-set pada Cell.
    */
  void SetObjectType(string ot);
  /** @brief IsHabitat.
	  * @return Menghasilkan true jika code pada layar merupakan kode Land, Air, atau Water Habitat.
	  */
  bool IsHabitat();
  /** @brief IsLandHabitat.
    * @return Menghasilkan true jika code pada layar merupakan kode Land Habitat.
    */
  bool IsLandHabitat();
  /** @brief IsAirHabitat.
    * @return Menghasilkan true jika code pada layar merupakan kode Air Habitat.
    */
  bool IsAirHabitat();
  /** @brief IsWaterHabitat.
    * @return Menghasilkan true jika code pada layar merupakan kode Water Habitat.
    */
  bool IsWaterHabitat();
  /** @brief IsExit.
    * @return Menghasilkan true jika code pada layar merupakan kode Exit.
    */
  bool IsExit();
  /** @brief IsRoad.
    * @return Menghasilkan true jika code pada layar merupakan kode Road.
    */
  bool IsRoad();
  /** @brief IsEntrance.
    * @return Menghasilkan true jika code pada layar merupakan kode Entrance.
    */
  bool IsEntrance();

private :
  string object_type;
  char render;
};

#endif