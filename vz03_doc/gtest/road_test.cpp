/**	@file  road_test.cpp
  */

#include "gtest/gtest.h"
#include "../road/road.h"

TEST(RoadTest, Render) {
	Road a;
	EXPECT_EQ('+', a.Render());
}