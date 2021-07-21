#include "pch.h"
#include "../MathApp/doubleNum.cpp"
#include "../MathApp/functionsC.cpp"
TEST(doubleNumTest, positiveValues)
{
	EXPECT_EQ(100, doubleNum(50));// if fail, test continues
	ASSERT_EQ(12, doubleNum(6));//if fail, test interrupts
	ASSERT_EQ(4, doubleNum(2));
}

TEST(doubleNumTest, nigativeValues)
{
	ASSERT_EQ(-100, doubleNum(-50));
	ASSERT_EQ(-12, doubleNum(-6));
	ASSERT_EQ(-4, doubleNum(-2));
}


TEST(functionsCTest, positiveValues)
{
	ASSERT_EQ(100, functionsC::Cube(10)) << "100 and " << functionsC::Cube(10) << " ar't equals";;
}