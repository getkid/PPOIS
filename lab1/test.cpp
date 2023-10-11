#include "pch.h"
#include "gtest/gtest.h"
#include "../ppois1/Fraction.h"

TEST(Tests, Test1) {
	Fraction drob1(2, 45);
	Fraction drob2(3, 45);
	Fraction drob3 = drob1 + drob2;
	EXPECT_EQ(1.0/9, drob3.fr_to_double());
	drob3 = drob1 - 2;
	EXPECT_EQ(-88.0 / 45, drob3.fr_to_double());
	drob1 += drob3;
	EXPECT_EQ(-86.0 / 45, drob1.fr_to_double());
	EXPECT_TRUE(drob2 > drob1);
}

TEST(Tests, Test2) {
	Fraction drob1(1, 9);
	Fraction drob2(3, 10);
	Fraction drob3 = drob1 - drob2;
	EXPECT_EQ(-17.0 / 90, drob3.fr_to_double());
	EXPECT_EQ(9, drob1.getDenom());
	EXPECT_EQ(0, drob1.getInt());
	drob2 *= 2;
	EXPECT_EQ(3.0 / 5, drob2.fr_to_double());
	EXPECT_TRUE(drob2 >= drob1);
}

TEST(Tests, Test3) {
	Fraction drob1(1, 9);
	Fraction drob2(0, 0);
	Fraction drob3 = drob1 * drob2;
	EXPECT_EQ(0.0 / 9, drob3.fr_to_double());
	drob3 = drob1 / drob2;
	EXPECT_EQ(1.0 / 9, drob3.fr_to_double());
	EXPECT_EQ(0, drob2.getInt());
	drob1++;
	EXPECT_EQ(10.0 / 9, drob1.fr_to_double());
	++drob1;
	EXPECT_EQ(19.0 / 9, drob1.fr_to_double());
}

TEST(Tests, Test4) {
	Fraction drob1(2, 3);
	Fraction drob2(2, 1);
	Fraction drob3(10, 4);
	EXPECT_EQ(2, drob3.getInt());
	Fraction drob4 = drob3 - drob2;
	EXPECT_EQ(2.0 / 4, drob4.fr_to_double());
	drob1 /= drob2;
	EXPECT_EQ(1.0 / 3, drob1.fr_to_double());
	EXPECT_TRUE(drob3 > drob1);
	EXPECT_FALSE(drob1 > drob2);
}

TEST(Tests, Test5) {
	Fraction drob1(2, 2);
	Fraction drob2(2, 2);
	Fraction drob3(20, 30);
	EXPECT_EQ(1, drob1.getInt());
	EXPECT_TRUE(drob3 < drob1);
	EXPECT_TRUE(drob1 >= drob2);
	drob2++;
	EXPECT_EQ(2.0 / 1, drob2.fr_to_double());
	drob1--;
	EXPECT_EQ(0.0 / 1, drob1.fr_to_double());
	drob2 /= drob1;
	EXPECT_EQ(2.0 / 1, drob2.fr_to_double());
}

TEST(Tests, Test6) {
	Fraction drob1(3, 2);
	Fraction drob2(1, 0);
	EXPECT_EQ(3, drob1.getNum());
	EXPECT_TRUE(drob1 > 1);
	EXPECT_TRUE(drob2 <= drob1);
	drob1 *= drob2;
	EXPECT_EQ(3.0 / 2, drob1.fr_to_double());
	drob2 /= drob1;
	EXPECT_EQ(2.0 / 3, drob2.fr_to_double());
	drob2 *= 2;
	EXPECT_EQ(4.0 / 3, drob2.fr_to_double());
	drob2 /= 3;
	EXPECT_EQ(4.0 / 9, drob2.fr_to_double());
}

TEST(Tests, Test7) {
	Fraction drob1(3, 10);
	Fraction drob2(2, 10);
	Fraction drob3(50, 30);
	Fraction drob4(100, 25);
	EXPECT_TRUE(drob4 > drob3);
	EXPECT_TRUE(drob4 >= 4);
	EXPECT_TRUE(drob2 < drob1);
	EXPECT_FALSE(drob3 >= 2);
	EXPECT_FALSE(drob1 > 1);
}

TEST(Tests, Test8) {
	Fraction drob1(3, 10);
	Fraction drob2(2, 10);
	Fraction drob3 = drob1 + drob2;
	EXPECT_EQ(1.0 / 2, drob3.fr_to_double());
	drob1 -= drob2;
	EXPECT_EQ(1.0 / 10, drob1.fr_to_double());
	drob1 *= drob2;
	EXPECT_EQ(1.0 / 50, drob1.fr_to_double());
	drob3 = drob2 / 4;
	EXPECT_EQ(1.0 / 20, drob3.fr_to_double());
	drob1 += 2;
	EXPECT_EQ(101.0 / 50, drob1.fr_to_double());
}

TEST(Tests, Test9) {
	Fraction drob1(0, 0);
	Fraction drob2(0, 0);
	Fraction drob3 = drob1 + drob2;
	EXPECT_EQ(0, drob1.getNum());
	EXPECT_EQ(1, drob2.getDenom());
	EXPECT_EQ(0, drob1.getInt());
	EXPECT_TRUE(drob1 <= drob2);
	EXPECT_FALSE(drob1 > drob2);
	drob3 = drob2 / drob1;
	EXPECT_EQ(0.0 / 1, drob3.fr_to_double());
}

TEST(Tests, Test10) {
	Fraction drob1(1, -10);
	Fraction drob2(2, -3);
	Fraction drob3 = drob1 - 2;
	EXPECT_EQ(-19.0 / 10, drob3.fr_to_double());
	EXPECT_EQ(1, drob1.getNum());
	EXPECT_EQ(0, drob1.getInt());
	drob1--;
	EXPECT_EQ(-9.0 / 10, drob1.fr_to_double());
	EXPECT_FALSE(drob1 > 1);
	drob2 /= drob1;
	EXPECT_EQ(-20.0 / 27, drob2.fr_to_double());
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}