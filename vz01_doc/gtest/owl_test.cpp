/**	@file  owl_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/owl/owl.h"

TEST(OwlTest, Interact) {
	Owl o;
	EXPECT_EQ("Hoot!", o.Interact());
}

TEST(OwlTest, Render) {
	Owl o;
	EXPECT_EQ('O', o.Render());
}