/**	@file  walrus_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/walrus/walrus.h"

TEST(WalrusTest, Interact) {
	Walrus w;
	EXPECT_EQ("Aaarhhh", w.Interact());
}

TEST(WalrusTest, Render) {
	Walrus w;
	EXPECT_EQ('W', w.Render());
}