/** file  animal.cpp
  */

#include "animal.h"

Animal::Animal() : species("Dugong"),
                   sound("Splashh!"),
                   food_type("Herbivore"),
                   number_habitat(1),
                   tame(true),
                   render('U'),
                   weight(500),
                   food(25)
{
  pos.SetAbsis(-1);
  pos.SetOrdinat(-1);
  habitat = new string[number_habitat];
  habitat[0] = "Water";
}

Animal::Animal(Point p,
               string sp,
               string so,
               string ft,
               string* h,
               float w,
               float f,
               int jh,
               bool t,
               char r) : species(sp),
                         sound(so),
                         food_type(ft),
                         number_habitat(jh),
                         tame(t),
                         render(r),
                         weight(w),
                         food(f)
{
  pos = p;
  habitat = new string[number_habitat];
  for (int i = 0; i<number_habitat; i++) {
  	habitat[i] = h[i];
  }
}

Animal::Animal(const Animal& a) : species(a.species),
                                  sound(a.sound),
                                  food_type(a.food_type),
                                  number_habitat(a.number_habitat),
                                  tame(a.tame),
                                  render(a.render),
                                  weight(a.weight),
                                  food(a.food)
{
  pos = a.pos;
  habitat = new string[number_habitat];
  for (int i = 0; i<number_habitat; i++) {
  	habitat[i] = a.habitat[i];
  }
}

Animal& Animal::operator=(const Animal& a)
{
  delete [] habitat;
  pos = a.pos;
  habitat = new string[number_habitat];
  for (int i = 0; i<number_habitat; i++) {
  	habitat[i] = a.habitat[i];
  }
  return *this;
}

Animal::~Animal()
{
  delete [] habitat;
}

Point Animal::GetPos() const
{
  return pos;
}

void Animal::SetPoint(int abs, int ord)
{
  pos.SetAbsis(abs);
  pos.SetOrdinat(ord);
}
void Animal::SetPoint(const Point& p)
{
  pos = p;
}

string Animal::GetSpecies() const
{
  return species;
}

string Animal::GetFoodType() const
{
  return food_type;
}

string* Animal::GetHabitat() const
{
  return habitat;
}

float Animal::GetWeight() const
{
  return weight;
}

float Animal::GetFood() const
{
  return food;
}

int Animal::GetNumberHabitat() const
{
  return number_habitat;
}

bool Animal::IsTame() const
{
  return tame;
}

bool Animal::IsSame(const Animal& a) const
{
  return (pos.IsSame(a.pos));
}

string Animal::Interact()
{
  return sound;
}

char Animal::Render()
{
  return render;
}