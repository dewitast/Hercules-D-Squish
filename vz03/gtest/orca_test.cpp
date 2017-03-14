/**	@file  orca_test.h
  */

#include "gtest/gtest.h"
#include "../orca/orca.h"

TEST(OrcaTest, Interact) {
	Orca r(4000, 200, false);
	EXPECT_EQ("Ngiak!", r.Interact());
}

TEST(OrcaTest, Render) {
	Orca r(4000, 200, false);
	EXPECT_EQ('R', r.Render());
}