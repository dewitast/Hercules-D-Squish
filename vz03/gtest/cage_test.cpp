/**	@file  cage_test.cpp
  */

#include "gtest/gtest.h"
#include "../cage/cage.h"

TEST(CageTest, GetSize) {
	Cage c(5);
	EXPECT_EQ(5, c.GetSize());
}

TEST(CageTest, Render) {
	Cage t(200, 10, false);
	EXPECT_EQ('T', t.Render());
}