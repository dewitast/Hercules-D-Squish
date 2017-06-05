/** file  dolphin_test.cpp
  */

#include "gtest/gtest.h"
#include "../dolphin/dolphin.h"

TEST(DolphinTest, Interact) {
	Dolphin l(75,3.75,true);
	EXPECT_EQ("A a a a a", l.Interact());
}

TEST(DolphinTest, Render) {
	Dolphin l(75,3.75,true);
	EXPECT_EQ('N', l.Render());
}