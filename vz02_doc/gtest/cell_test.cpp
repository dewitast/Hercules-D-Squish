/**	@file  cell_test.cpp
  */

#include "gtest/gtest.h"
#include "../cell/cell.h"

TEST(CellTest, GetObjectType) {
	Cell c("Road");
	EXPECT_EQ("Road", c.GetObjectType());
}

TEST(CellTest, GetRender) {
	Cell c("Road");
	EXPECT_EQ('+', c.GetRender());
}

TEST(CellTest, IsHabitat) {
	Cell c("WaterHabitat");
	EXPECT_TRUE(c.IsHabitat());
}

TEST(CellTest, IsLandHabitat) {
	Cell c("LandHabitat");
	EXPECT_TRUE(c.IsLandHabitat());
}

TEST(CellTest, IsAirHabitat) {
	Cell c("AirHabitat");
	EXPECT_TRUE(c.IsAirHabitat());
}

TEST(CellTest, IsWaterHabitat) {
	Cell c("WaterHabitat");
	EXPECT_TRUE(c.IsWaterHabitat());
}

TEST(CellTest, IsExit) {
	Cell c("Exit");
	EXPECT_TRUE(c.IsExit());
}

TEST(CellTest, IsRoad) {
	Cell c("Road");
	EXPECT_TRUE(c.IsRoad());
}

TEST(CellTest, IsEntrance) {
	Cell c("Entrance");
	EXPECT_TRUE(c.IsEntrance());
}