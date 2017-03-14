/**	@file  air_habitat_test.cpp
  */

#include "gtest/gtest.h"
#include "../air_habitat/air_habitat.h"

TEST(AirHabitatTest, Render) {
	AirHabitat a;
	EXPECT_EQ('^', a.Render());
}