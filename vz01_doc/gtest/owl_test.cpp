/**	@file  owl_test.cpp
  */

#include "gtest/gtest.h"
#include "../owl/owl.h"

TEST(OwlTest, Interact) {
	Owl o;
	EXPECT_EQ("Hoot!", o.Interact());
}

TEST(OwlTest, Render) {
	Owl o;
	EXPECT_EQ('O', o.Render());
}