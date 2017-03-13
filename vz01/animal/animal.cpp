/**	@file  animal.cpp
  */

#include "../animal/animal.h"

Animal::Animal() {}
void Animal::SetPoint(int abs, int ord) {
  pos.SetAbsis(abs);
  pos.SetOrdinat(ord);
}
Point Animal::GetPos() const
{
	return pos;
}
void Animal::SetPoint(const Point& p) {
  pos = p;
}
bool Animal::IsSame(const Animal& a) const {
  return (pos.IsSame(a.pos));
}