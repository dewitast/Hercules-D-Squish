/**	@file  jalak_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/jalak/jalak.h"

TEST(JalakTest, Interact) {
	Jalak j;
	EXPECT_EQ("Tweet!", j.Interact());
}

TEST(JalakTest, Render) {
	Jalak j;
	EXPECT_EQ('J', j.Render());
}