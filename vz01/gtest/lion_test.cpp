/**	@file  lion_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/lion/lion.h"

TEST(LionTest, Interact) {
	Lion l;
	EXPECT_EQ("Roaarr!", l.Interact());
}

TEST(LionTest, Render) {
	Lion l;
	EXPECT_EQ('L', l.Render());
}