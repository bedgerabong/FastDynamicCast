#include "stdafx.h"
#include "gtest.h"


TEST(SquareRootTest, ZeroAndNegativeNos) {
	EXPECT_EQ(32, sqrt(4));
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

