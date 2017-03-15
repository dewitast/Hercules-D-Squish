/** file  alligator_test.cpp
  */

#include "gtest/gtest.h"
#include "../alligator/alligator.h"

TEST(AlligatorTest, Interact) {
	Alligator l;
	EXPECT_EQ("Grrrrrr", l.Interact());
}

TEST(AlligatorTest, Render) {
	Alligator l(125,6.25,false);
	EXPECT_EQ('A', l.Render());
}