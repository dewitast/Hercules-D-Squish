/**	@file  eagle_test.cpp
  */

#include "gtest/gtest.h"
#include "../eagle/eagle.h"

TEST(EagleTest, Interact) {
	Eagle e;
	EXPECT_EQ("Nguiikk!", e.Interact());
}

TEST(EagleTest, Render) {
	Eagle e(5.8,0.29,false);
	EXPECT_EQ('E', e.Render());
}