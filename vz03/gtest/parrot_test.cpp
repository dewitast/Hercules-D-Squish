/**	@file  parrot_test.cpp
  */

#include "gtest/gtest.h"
#include "../parrot/parrot.h"

TEST(ParrotTest, Interact) {
	Parrot p;
	EXPECT_EQ("Cuiitt", p.Interact());
}

TEST(ParrotTest, Render) {
	Parrot p(1.2,0.06,true);
	EXPECT_EQ('P', p.Render());
}