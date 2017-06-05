/**	@file  duck_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/duck/duck.h"

TEST(DuckTest, Interact) {
	Duck d;
	EXPECT_EQ("Quaackk!", d.Interact());
}

TEST(DuckTest, Render) {
	Duck d;
	EXPECT_EQ('D', d.Render());
}