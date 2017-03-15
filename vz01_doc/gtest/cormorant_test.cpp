/**	@file  cormorant_test.cpp
  */

#include "gtest/gtest.h"
#include "../cormorant/cormorant.h"

TEST(CormorantTest, Interact) {
	Cormorant m;
	EXPECT_EQ("Ooookkk!", m.Interact());
}

TEST(CormorantTest, Render) {
	Cormorant m;
	EXPECT_EQ('M', m.Render());
}