/**	@file  cell.cpp
  */

#include "cell.h"

Cell::Cell() : {
	object_type = "Road";
	render = '+';
}
Cell::Cell(string ot) {
	object_type = ot;
	if (object_type == "LandHabitat")
		render = '@';
	else if (object_type == "AirHabitat")
		render = '^';
	else if (object_type == "WaterHabitat")
		render = '~';
	else if (object_type == "Restaurant")
		render = 'S';
	else if (object_type == "Park")
		render = '#';
	else if (object_type == "Road")
		render = '+';
	else if (object_type == "Exit")
		render = 'X';
	else if (object_type == "Entrance")
		render = 'Z';
}
Cell::~Cell() {}
string Cell::GetObjectType() const {
  return object_type;
}
char Cell::GetRender() const {
  return render;
}
void Cell::SetObjectType(string ot) {
	object_type = ot;
	if (object_type == "LandHabitat")
		render = '@';
	else if (object_type == "AirHabitat")
		render = '^';
	else if (object_type == "WaterHabitat")
		render = '~';
	else if (object_type == "Restaurant")
		render = 'S';
	else if (object_type == "Park")
		render = '#';
	else if (object_type == "Road")
		render = '+';
	else if (object_type == "Exit")
		render = 'X';
	else if (object_type == "Entrance")
		render = 'Z';
}
bool Cell::IsHabitat() {
  return ((render == '@') || (render == '^') || (render == '~'));
}
bool IsLandHabitat() {
  return (render == '@');
}
bool IsAirHabitat() {
  return (render == '^');
}
bool IsWaterHabitat() {
  return (render == '~');
}