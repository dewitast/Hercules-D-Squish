/** file  alligator_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/alligator/alligator.h"

TEST(AlligatorTest, Interact) {
	Alligator l;
	EXPECT_EQ("Grrrrrr", l.Interact());
}

TEST(AlligatorTest, Render) {
	Alligator l;
	EXPECT_EQ('A', l.Render());
}