/**	@file  zoo_test.cpp
  */

#include "gtest/gtest.h"
#include "../zoo/zoo.h"

TEST(ZooTest, GetJumlahCage) {
	Zoo z;
	EXPECT_EQ(0, z.GetJumlahCage());
}

TEST(ZooTest, GetBeff) {
	Zoo z;
	EXPECT_EQ(0, z.GetBeff());
}

TEST(ZooTest, GetKeff) {
	Zoo z;
	EXPECT_EQ(0, z.GetKeff());
}