/** file  goat_test.cpp
  */

#include "gtest/gtest.h"
#include "../goat/goat.h"

TEST(GoatTest, Interact) {
	Goat l;
	EXPECT_EQ("Mbeeeee", l.Interact());
}

TEST(GoatTest, Render) {
	Goat l(90, 4.5, false);
	EXPECT_EQ('G', l.Render());
}