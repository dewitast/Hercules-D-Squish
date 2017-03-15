/**	@file  orca_test.cpp
  */

#include "gtest/gtest.h"
#include "../orca/orca.h"

TEST(OrcaTest, Interact) {
	Orca r;
	EXPECT_EQ("Ngiak!", r.Interact());
}

TEST(OrcaTest, Render) {
	Orca r;
	EXPECT_EQ('R', r.Render());
}