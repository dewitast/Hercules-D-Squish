/**	@file  animal.cpp
  */

#include "animal.h"

Animal::Animal() {}
Animal::Animal(float w, float f, bool t) {
  weight = w;
  food = f;
  tame = t;
  SetPoint(-1,-1);
}
float Animal::GetWeight() const {
  return weight;
}
float Animal::GetFood() const {
  return food;
}
bool Animal::GetTame() const {
  return tame;
}
Point Animal::GetPos() const {
  return pos;
}
void Animal::SetWeight(float w) {
  weight = w;
}
void Animal::SetFood(float f) {
  food = f;
}
void Animal::SetTame(bool t) {
  tame = t;
}
void Animal::SetPoint(int abs, int ord) {
  pos.SetAbsis(abs);
  pos.SetOrdinat(ord);
}
void Animal::SetPoint(const Point& p) {
  pos = p;
}
bool Animal::IsSame(const Animal& a) const {
  return (pos.IsSame(a.pos));
}