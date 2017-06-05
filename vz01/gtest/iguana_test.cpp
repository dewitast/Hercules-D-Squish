/** file  iguana_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/iguana/iguana.h"

TEST(IguanaTest, Interact) {
	Iguana l;
	EXPECT_EQ("Purrrr", l.Interact());
}

TEST(IguanaTest, Render) {
	Iguana l;
	EXPECT_EQ('I', l.Render());
}