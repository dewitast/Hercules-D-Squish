/**	@file  elephant_test.cpp
  */

#include "gtest/gtest.h"
#include "../elephant/elephant.h"

TEST(ElephantTest, Interact) {
	Elephant h;
	EXPECT_EQ("Prett!", h.Interact());
}

TEST(ElephantTest, Render) {
	Elephant h;
	EXPECT_EQ('H', h.Render());
}