/**	@file  tiger_test.cpp
  */

#include "gtest/gtest.h"
#include "../tiger/tiger.h"

TEST(TigerTest, Interact) {
	Tiger t;
	EXPECT_EQ("Growl", t.Interact());
}

TEST(TigerTest, Render) {
	Tiger t(200, 10, false);
	EXPECT_EQ('T', t.Render());
}