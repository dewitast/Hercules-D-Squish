/**	@file  park_test.cpp
  */

#include "gtest/gtest.h"
#include "../park/park.h"

TEST(ParkTest, Render) {
	Park a;
	EXPECT_EQ('#', a.Render());
}