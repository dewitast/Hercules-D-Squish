/**	@file  exit_test.cpp
  */

#include "gtest/gtest.h"
#include "../exit/exit.h"

TEST(ExitTest, Render) {
	Exit a;
	EXPECT_EQ('X', a.Render());
}