/**	@file  lion_test.cpp
  */

#include "gtest/gtest.h"
#include "../lion/lion.h"

TEST(LionTest, Interact) {
	Lion l;
	EXPECT_EQ("Roaarr!", l.Interact());
}

TEST(LionTest, Render) {
	Lion l(150, 7.5, false);
	EXPECT_EQ('L', l.Render());
}