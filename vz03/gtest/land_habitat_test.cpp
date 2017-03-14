/**	@file  land_habitat_test.cpp
  */

#include "gtest/gtest.h"
#include "../land_habitat/land_habitat.h"

TEST(LandHabitatTest, Render) {
	LandHabitat a;
	EXPECT_EQ('@', a.Render());
}