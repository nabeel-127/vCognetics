#include <gtest/gtest.h>
#include <iostream>
#include "codility.h"

TEST(BinaryGap_test, main_test)
{
	Solution my_unittest_BinaryGap;
	EXPECT_EQ(2, my_unittest_BinaryGap.solutionBinaryGap(9));
	EXPECT_EQ(1, my_unittest_BinaryGap.solutionBinaryGap(10));
	EXPECT_EQ(3, my_unittest_BinaryGap.solutionBinaryGap(17));
	EXPECT_EQ(4, my_unittest_BinaryGap.solutionBinaryGap(33));
	EXPECT_EQ(6, my_unittest_BinaryGap.solutionBinaryGap(129));
}
TEST(FrogJmp_test, main_test)
{
	Solution my_unittest_FrogJmp;
	EXPECT_EQ(20, my_unittest_FrogJmp.solutionFrogJmp(10, 20, 5));
	EXPECT_EQ(25, my_unittest_FrogJmp.solutionFrogJmp(10, 21, 5));
	EXPECT_EQ(160, my_unittest_FrogJmp.solutionFrogJmp(10, 151, 50));
	EXPECT_EQ(100, my_unittest_FrogJmp.solutionFrogJmp(100, 20, 5));
	EXPECT_EQ(1000000, my_unittest_FrogJmp.solutionFrogJmp(50, 1000000, 5));
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}