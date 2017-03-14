/**	@file  polar_bear_test.cpp
  */

#include "gtest/gtest.h"
#include "../polar_bear/polar_bear.h"

TEST(PolarBearTest, Interact) {
	PolarBear b;
	EXPECT_EQ("Auuummm", b.Interact());
}

TEST(PolarBearTest, Render) {
	PolarBear b(300,15,false);
	EXPECT_EQ('B', b.Render());
}