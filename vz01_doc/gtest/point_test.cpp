/**	@file  point_test.cpp
  */

#include "gtest/gtest.h"
#include "../../vz01/point/point.h"

TEST(PointTest, GetAbsis) {
	Point p;
	p.SetAbsis(5);
	EXPECT_EQ(5, p.GetAbsis());
}

TEST(PointTest, GetOrdinat) {
	Point p;
	p.SetOrdinat(5);
	EXPECT_EQ(5, p.GetOrdinat());
}

TEST(PointTest, IsSame) {
	Point p1(2,2);
	Point p2(3,3);
	EXPECT_FALSE(p1.IsSame(p2));
}