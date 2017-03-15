/**	@file  komodo_test.cpp
  */

#include "gtest/gtest.h"
#include "../komodo/komodo.h"

TEST(KomodoTest, Interact) {
	Komodo k;
	EXPECT_EQ("Slpp!", k.Interact());
}

TEST(KomodoTest, Render) {
	Komodo k;
	EXPECT_EQ('K', k.Render());
}