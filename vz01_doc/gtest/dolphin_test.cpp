/** file  dolphin_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/dolphin/dolphin.h"

TEST(DolphinTest, Interact) {
	Dolphin l;
	EXPECT_EQ("A a a a a", l.Interact());
}

TEST(DolphinTest, Render) {
	Dolphin l;
	EXPECT_EQ('N', l.Render());
}