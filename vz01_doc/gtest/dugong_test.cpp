/**	@file  dugong_test.cpp
  */

#include "gtest/gtest.h"
#include "../dugong/dugong.h"

TEST(DugongTest, Interact) {
	Dugong u;
	EXPECT_EQ("Splashh!", u.Interact());
}

TEST(DugongTest, Render) {
	Dugong u;
	EXPECT_EQ('U', u.Render());
}