/**	@file  polar_bear_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/polar_bear/polar_bear.h"

TEST(PolarBearTest, Interact) {
	PolarBear b;
	EXPECT_EQ("Auuummm", b.Interact());
}

TEST(PolarBearTest, Render) {
	PolarBear b;
	EXPECT_EQ('B', b.Render());
}