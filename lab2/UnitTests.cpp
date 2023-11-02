#include "pch.h"
#include "../ppois2/Product.h"
#include "../ppois2/Store.h"
#include "../ppois2/Recipes.h"
#include "../ppois2/Scales.h"
#include "../ppois2/Beaker.h"
#include "../ppois2/Comfort.h"

TEST(CaseName, test1) {
	std::string s1 = "liquid";
	std::string s2 = "potato";
	Product potato(s2, s1);
	s1 = "solid";
	s2 = "oil";
	Product oil(s2, s1);
	potato.SetPrice_BYN(3);
	oil.SetPrice_BYN(5);
    EXPECT_EQ(potato.GetPrice_BYN(), 3.);
	potato.SetWeight_Gr(200);
	EXPECT_EQ(potato.GetWeight_Gr(), 200.);
	potato.SetCaloricValue(500);
	EXPECT_EQ(potato.GetCaloricValue(), 500.);
	oil.SetVolume_Ml(1000);
	EXPECT_EQ(oil.GetVolume_Ml(), 1000.);
	Store sosedzi(5);
	sosedzi.SetProduct(potato);
	sosedzi.SetProduct(oil);
	EXPECT_EQ(sosedzi.MovementTime(), 60.);
	EXPECT_EQ(sosedzi.CalculateTotal(), 8);
	Recipes recept;
	recept.Slice(potato);
	EXPECT_EQ(potato.GetProductState(), "sliced");
	double time = 20;
	double diameter = 22.8, volume = 23;
	s1 = "black";
	Pan skovorodka(diameter, volume, s1);
	recept.Roast(skovorodka, potato, time);
	EXPECT_EQ(potato.GetProductState(), "roasted");
}

TEST(CaseNme, test2)
{
	std::string s1 = "cheese";
	std::string s2 = "solid";
	Product cheese(s1, s2);
	double weight = 223.5;
	cheese.SetWeight_Gr(weight);
	s1 = "dough";
	s2 = "amorphnoe";
	Product dough(s1, s2);
	s1 = "nastolnie";
	double limit = 200;
	Scales scales(s1, limit);
	scales.Measure(cheese, 150);
	EXPECT_EQ(cheese.GetWeight_Gr(), 150);
	int a = 8;
	limit = 40;
	s1 = "gray";
	Oven oven(a, limit, s1);
	oven.SetWorkingMode(5);
	EXPECT_EQ(oven.GetWorkedMode(), 5);
	Recipes recept;
	recept.Bake(oven, dough, limit);
	recept.Grate(cheese);
	EXPECT_EQ(cheese.GetProductState(), "grated");
	EXPECT_EQ(dough.GetProductState(), "baked");
	oven.SetWorkingMode(0);
}

TEST(CaseName, test3)
{
	std::string s1 = "water";
	std::string s2 = "liquid";
	Product water(s1, s2);
	water.SetVolume_Ml(500);
	Beaker beaker(100);
	EXPECT_EQ(beaker.NumberOfApproaches(beaker, 200), 2);
	beaker.Measure(water, 200);
	EXPECT_EQ(water.GetVolume_Ml(), 200);
}

TEST(CaseName, test4)
{
	std::string s1 = "egg";
	std::string s2 = "soid";
	Product egg1(s1, s2);
	Product egg2(s1, s2);
	s1 = "gaz";
	Plate plate(s1, 4);
	plate.TurnOn();
	EXPECT_EQ(plate.GetWorkingMode(), "working");
	Comfort comfort(6);
	comfort.Mode(4);
	EXPECT_EQ(comfort.GetWorkingMode(), 4);
	comfort.Mode(0);
	plate.TurnOff();
	double diameter = 14, volume = 30;
	s1 = "black";
	Pot pot(diameter, volume, s1);
	diameter = 15;
	pot.CookingMethod(egg1, diameter);
}


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}