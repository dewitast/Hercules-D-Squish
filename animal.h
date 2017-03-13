/**	@file  animal.h
  */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;
#include "point.h"

/** @class Animal
  * Kelas abstrak Animal merepresentasikan binatang dalam Virtual Zoo
  */
class Animal {
public :
  /** @brief Constructor.
    * Menciptakan Animal kosong.
    */
  Animal();
  /** @brief Constructor dengan parameter.
    * Menciptakan animal kosong dengan weight w, food f, dan tame t.
    * @param w Nilai berat binatang.
    * @param f Nilai jumlah makanan yang dibutuhkan binatang.
    * @param t Status jinak binatang.
    */
  Animal(float w, float f, bool t);
  /** @brief Destructor.
    */
  virtual ~Animal() {}	
  /** @brief Getter untuk weight.
    * @return Mengembalikan nilai weight binatang.
    */
  float GetWeight() const;
  /** @brief Getter untuk food.
    * @return Mengembalikan nilai food binatang.
    */
  float GetFood() const;
  /** @brief Getter untuk tame.
    * @return Mengembalikan status tame binatang.
    */
  bool GetTame() const;
  /** @brief Getter untuk pos.
    * @return Mengembalikan nilai lokasi binatang.
    */
  Point GetPos() const;
  /** @brief Setter untuk weight.
    * @param w Nilai weight yang akan di-set pada animal.
    */
  void SetWeight(float w);
  /** @brief Setter untuk food.
    * @param f Nilai food yang akan di-set pada animal.
    */
  void SetFood(float f);
  /** @brief Setter untuk tame.
    * @param t Status tame yang akan di-set pada animal.
    */
  void SetTame(bool t);
  /** @brief Setter point dengan parameter dua buah nilai integer.
    * @param abs Nilai absis yang akan di-set pada lokasi animal.
    * @param ord Nilai ordinat yang akan di-set pada lokasi animal.
    */
  void SetPoint(int abs, int ord);
  /** @brief Setter point dengan parameter sebuah point.
    * @param p Objek point yang akan di-set pada lokasi animal.
    */
  void SetPoint(const Point& p);
  /** @brief Memeriksa kesamaan dua animal.
    * @param a Objek animal yang akan dibandingkan.
    * @return Mengeluarkan true jika current object sama dengan animal a.
    */
  bool IsSame(const Animal& a) const;
  /** @brief Interaksi yang dilakukan animal.
    * @return Mengembalikan string yang merepresentasikan suara Animal.
    */
  virtual string Interact() = 0;
  /** @brief Melakukan cloning untuk menciptakan objek Animal baru.
    * @return Mengembalikan pointer to Animal objek tersebut.
    */
  virtual Animal* Clone() const = 0;
  /** @brief Render dari Animal.
    * @return Mengembalikan char yang merupakan representasi kode Animal.
    */
  virtual char render() = 0;
protected:
  /** @brief Berat binatang.
    */
  float weight;
  /** @brief Jumlah makanan binatang.
    */
  float food;
  /** @brief Status jinak binatang.
    */
  bool tame;
  /** @brief Lokasi binatang.
    */
  Point pos;
};

#endif