/**	@file  cage_test.cpp
  */

#include "gtest/gtest.h"
#include "../cage/cage.h"

<<<<<<< HEAD
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
=======
TEST(CageTest, GetSize) {
	Cage c(5);
	EXPECT_EQ(5, c.GetSize());
}

TEST(CageTest, Render) {
	Cage t(200, 10, false);
	EXPECT_EQ('T', t.Render());
>>>>>>> aebc96c7a7f10383d631fa6deced89fa916d84da
}