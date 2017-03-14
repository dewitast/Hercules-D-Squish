/**	@file  entrance_test.cpp
  */

#include "gtest/gtest.h"
#include "../entrance/entrance.h"

TEST(EntranceTest, Render) {
	Entrance a;
	EXPECT_EQ('Z', a.Render());
}