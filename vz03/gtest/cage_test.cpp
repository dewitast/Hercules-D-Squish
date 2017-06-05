/**	@file  cage_test.cpp
  */

#include "gtest/gtest.h"
#include "../cage/cage.h"


TEST(CageTest, IsFull) {
	Cage c(10);
	EXPECT_FALSE(c.IsFull());
}

TEST(CageTest, GetSize) {
	Cage c(10);
	EXPECT_EQ(10, c.GetSize());
}

TEST(CageTest, GetTotalAnimal) {
	Cage c(10);
	EXPECT_EQ(0, c.GetTotalAnimal());
}

TEST(CageTest, IsEmpty) {
	Cage c(10);
	EXPECT_FALSE(c.IsEmpty());
}