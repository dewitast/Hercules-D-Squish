/**	@file  eagle_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/eagle/eagle.h"

TEST(EagleTest, Interact) {
	Eagle e;
	EXPECT_EQ("Nguiikk!", e.Interact());
}

TEST(EagleTest, Render) {
	Eagle e;
	EXPECT_EQ('E', e.Render());
}