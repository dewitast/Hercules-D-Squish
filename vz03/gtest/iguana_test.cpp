/** file  iguana_test.cpp
  */

#include "gtest/gtest.h"
#include "../iguana/iguana.h"

TEST(IguanaTest, Interact) {
	Iguana l;
	EXPECT_EQ("Purrrr", l.Interact());
}

TEST(IguanaTest, Render) {
	Iguana l(6,0.3,true);
	EXPECT_EQ('I', l.Render());
}