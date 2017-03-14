/**	@file  restaurant_test.cpp
  */

#include "gtest/gtest.h"
#include "../restaurant/restaurant.h"

TEST(RestaurantTest, Render) {
	Restaurant a;
	EXPECT_EQ('S', a.Render());
}