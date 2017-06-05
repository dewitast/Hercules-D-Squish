/**	@file  walrus_test.cpp
  */

#include "gtest/gtest.h"
#include "../walrus/walrus.h"

TEST(WalrusTest, Interact) {
	Walrus w;
	EXPECT_EQ("Aaarhhh", w.Interact());
}

TEST(WalrusTest, Render) {
	Walrus w(1000,50,false);
	EXPECT_EQ('W', w.Render());
}