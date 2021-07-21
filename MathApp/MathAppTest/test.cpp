#include "pch.h"
#include "../MathApp/doubleNum.cpp"

TEST(doubleNumTest, positiveValues)
{
	ASSERT_EQ(100, doubleNum(50));
	ASSERT_EQ(12, doubleNum(6));
	ASSERT_EQ(4, doubleNum(2));
}

TEST(doubleNumTest, nigativeValues)
{
	ASSERT_EQ(-100, doubleNum(-50));
	ASSERT_EQ(-12, doubleNum(-6));
	ASSERT_EQ(-4, doubleNum(-2));
}
