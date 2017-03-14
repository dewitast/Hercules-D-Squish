/**	@file  water_habitat_test.cpp
  */

#include "gtest/gtest.h"
#include "../water_habitat/water_habitat.h"

TEST(WaterHabitatTest, Render) {
	WaterHabitat a;
	EXPECT_EQ('~', a.Render());
}