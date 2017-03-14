/**	@file  cobra_test.cpp
  */

#include "gtest/gtest.h"
#include "../cobra/cobra.h"

TEST(CobraTest, Interact) {
	Cobra c;
	EXPECT_EQ("Ssshh!", c.Interact());
}

TEST(CobraTest, Render) {
	Cobra c(20,1,false);
	EXPECT_EQ('C', c.Render());
}