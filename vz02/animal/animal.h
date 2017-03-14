/** file  animal.h
  */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;
#include "../point/point.h"

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
    * @param p Nilai point yang akan di-set sebagai lokasi animal.
    * @param sp string yang berupa nama spesies animal.
    * @param so string yang berupa suara dari animal.
    * @param ft string yang berupa jenis makanan dari animal.
    * @param *h habitat yang dapat ditinggali oleh animal.
    * @param w berat animal.
    * @param f berat makanan yang diperlukan animal dalam satu hari.
    * @param jh jumlah habitat yang dapat ditinggali oleh animal.
    * @param t menyatakan binatang jinak.
    * @param r karakter yang akan dikeluarkan sebagai penanda animal.
    */
  Animal(Point p,
         string sp,
         string so,
         string ft,
         string* h,
         float w,
         float f,
         int jh,
         bool t,
         char r);
  /** @brief Copy Constructor.
    * @param a Objek yang akan di-copy.
    */
  Animal(const Animal& a);
  /** @brief Operator =.
	  * @param a Objek yang akan di-assign.
	  * @return Menghasilkan objek hasil copy objek a.
	  */
  Animal& operator=(const Animal& a);
  /** @brief Destructor.
    */
  ~Animal();
  /** @brief Getter untuk pos.
    * @return Mengembalikan nilai lokasi binatang.
    */
  Point GetPos() const;
  /** @brief Setter point dengan parameter dua buah nilai integer.
    * @param abs Nilai absis yang akan di-set pada lokasi animal.
    * @param ord Nilai ordinat yang akan di-set pada lokasi animal.
    */
  void SetPoint(int abs, int ord);
  /** @brief Setter point dengan parameter sebuah point.
    * @param p Objek point yang akan di-set pada lokasi animal.
    */
  void SetPoint(const Point& p);
  /** @brief Getter untuk species.
    * @return Mengembalikan nama spesies binatang.
    */
  string GetSpecies() const;
  /** @brief Getter untuk food_type.
    * @return Mengembalikan jenis makanan yang dimakan oleh binatang.
    */
  string GetFoodType() const;
  /** @brief Getter untuk habitat.
    * @return Mengembalikan habitat yang dapat ditinggali binatang.
    */
  string* GetHabitat() const;
  /** @brief Getter untuk weight.
    * @return Mengembalikan jenis makanan yang dimakan oleh binatang.
    */
  float GetWeight() const;
  /** @brief Getter untuk food.
    * @return Mengembalikan jenis makanan yang dimakan oleh binatang.
    */
  float GetFood() const;
  /** @brief Getter untuk number_habitat.
    * @return Mengembalikan jenis makanan yang dimakan oleh binatang.
    */
  int GetNumberHabitat() const;
  /** @brief Getter untuk tame.
    * @return Mengembalikan jenis makanan yang dimakan oleh binatang.
    */
  bool IsTame() const;
  /** @brief Memeriksa kesamaan dua animal.
    * @param a Objek animal yang akan dibandingkan.
    * @return Mengeluarkan true jika current object sama dengan animal a.
    */
  bool IsSame(const Animal& a) const;
  /** @brief Interaksi yang dilakukan animal.
    * @return Mengembalikan string yang merepresentasikan suara Animal.
    */
  string Interact();
  /** @brief Render dari Animal.
    * @return Mengembalikan char yang merupakan representasi kode Animal.
    */
  char Render();
private:
  /** @brief Posisi Binatang.
    */
  Point pos;
  /** @brief Nama spesies binatang.
    */
  string species;
  /** @brief suara binatang.
    */
  string sound;
  /** @brief jenis makanan binatang.
    */
  string food_type;
  /** @brief jenis habitat binatang.
    */
  string* habitat;
  /** @brief Berat binatang.
    */
  float weight;
  /** @brief Berat makanan binatang per hari.
    */
  float food;
  /** @brief jumlah habitat yang dapat ditinggali oleh binatang.
    */
  int number_habitat;
  /** @brief jinak atau tidaknya binatang.
    */
  bool tame;
  /** @brief karakter binatang ketika dicetak.
    */
  char render;
};

#endif
