#include <iostream>
#include <gtest/gtest.h>

using namespace std;

static unsigned long fct(unsigned int n)
{
		if (n == 1 || n == 0) return 1;
		else return n * fct(n - 1);
}


TEST(FctTest, ZeroAndOneArg)
{
	ASSERT_EQ(fct(0), 1);
	ASSERT_EQ(fct(1), 1);
}


TEST(FctTest, StdArg)
{
	ASSERT_EQ(fct(6), 720);
	ASSERT_EQ(fct(10), 3628800);
}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
