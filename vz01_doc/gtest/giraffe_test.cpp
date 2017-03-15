/**	@file  giraffe_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/giraffe/giraffe.h"

TEST(GiraffeTest, Interact) {
	Giraffe f;
	EXPECT_EQ("Hmm!", f.Interact());
}

TEST(GiraffeTest, Render) {
	Giraffe f;
	EXPECT_EQ('F', f.Render());
}