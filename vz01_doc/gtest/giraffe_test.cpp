/**	@file  giraffe_test.cpp
  */

#include "gtest/gtest.h"
#include "../giraffe/giraffe.h"

TEST(GiraffeTest, Interact) {
	Giraffe f;
	EXPECT_EQ("Hmm!", f.Interact());
}

TEST(GiraffeTest, Render) {
	Giraffe f(1100,55,true);
	EXPECT_EQ('F', f.Render());
}