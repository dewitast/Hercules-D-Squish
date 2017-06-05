/**	@file  animal_test.cpp
  */

#include "gtest/gtest.h"
#include "../animal/animal.h"

TEST(AnimalTest, GetSpecies) {
	Animal a;
	EXPECT_EQ("Dugong", a.GetSpecies());
}

TEST(AnimalTest, GetFoodType) {
	Animal a;
	EXPECT_EQ("Herbivore", a.GetFoodType());
}

TEST(AnimalTest, GetWeight) {
	Animal a;
	EXPECT_FLOAT_EQ(500, a.GetWeight());
}

TEST(AnimalTest, GetFood) {
	Animal a;
	EXPECT_FLOAT_EQ(25, a.GetFood());
}

TEST(AnimalTest, GetNumberHabitat) {
	Animal a;
	EXPECT_EQ(1, a.GetNumberHabitat());
}

TEST(AnimalTest, IsTame) {
	Animal a;
	EXPECT_TRUE(a.IsTame());
}

TEST(AnimalTest, IsSame) {
	Animal a;
	Animal b;
	EXPECT_TRUE(a.IsSame(b));
}

TEST(AnimalTest, Interact) {
	Animal a;
	EXPECT_EQ("Splashh!", a.Interact());
}

TEST(AnimalTest, Render) {
	Animal a;
	EXPECT_EQ('U', a.Render());
}