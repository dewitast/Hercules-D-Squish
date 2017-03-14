/**	@file  duck_test.cpp
  */

#include "gtest/gtest.h"
#include "../duck/duck.h"

TEST(DuckTest, Interact) {
	Duck d;
	EXPECT_EQ("Quaackk!", d.Interact());
}

TEST(DuckTest, Render) {
	Duck d(12,0.6,true);
	EXPECT_EQ('D', d.Render());
}