/**	@file  jalak_test.cpp
  */

#include "gtest/gtest.h"
#include "../jalak/jalak.h"

TEST(JalakTest, Interact) {
	Jalak j;
	EXPECT_EQ("Tweet!", j.Interact());
}

TEST(JalakTest, Render) {
	Jalak j(0.1,0.005,true);
	EXPECT_EQ('J', j.Render());
}