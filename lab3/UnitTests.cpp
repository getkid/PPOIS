#include "pch.h"
#include "../ppois3/Company.h"
#include "../ppois3/HeadOfCompany.h"
#include "../ppois3/HeadOfDepartment.h"
#include "../ppois3/HeadOfUnit.h"
#include "../ppois3/TeamLeader.h"
#include "../ppois3/Guidance.h"

TEST(TestCompany, Test1) {
	std::string s1 = "D&H";
	std::string s2 = "Greece";
	Company company(s1, s2, 2003);
	company.SetIncome$(200500000);
	EXPECT_EQ(company.GetIncome$(), 200500000);
	EXPECT_EQ(company.CalculateYearsOfExistence(), 20);
}

TEST(TestGuidance, Test2) {
	std::string s1 = "D&H";
	std::string s2 = "Greece";
	Company company(s1, s2, 2003);
	s1 = "Ivan";
	s2 = "Ivanov";
	std::string s3 = "Ivanovich";
	double salary = 550;
	int year = 2020;
	HeadOfCompany CEO(s1, s2, s3);
	s1 = "Maksim";
	s2 = "Maksimov";
	s3 = "Maksimovich";
	HeadOfDepartment head_of_department(s1, s2, s3, salary, year);
	s1 = "Eugen";
	salary = 1000;
	year = 2013;
	HeadOfUnit head_of_unit(s1, s2, s3, salary, year);
	s2 = "Pshenov";
	s3 = "Denisovich";
	salary = 300;
	year = 2022;
	TeamLeader team_leader(s1, s2, s3, salary, year);
	Guidance guidance;
	guidance.AddHeadOfCompany(CEO);
	guidance.AddHeadOfDepartment(head_of_department);
	guidance.AddHeadOfUnit(head_of_unit);
	guidance.AddTeamLeader(team_leader);
	EXPECT_EQ(guidance.CalculateSalaryExpense(), 1850);
	company.AddGuidance(guidance);
}

TEST(TestHeadOfCompany, Test3) {
	std::string s1 = "Ivan";
	std::string s2 = "Ivanov";
	std::string s3 = "Ivanovich";
	HeadOfCompany CEO(s1, s2, s3);
	double salary = 550;
	int year = 2020;
	s1 = "Maksim";
	s2 = "Maksimov";
	s3 = "Maksimovich";
	HeadOfDepartment head_of_department_1(s1, s2, s3, salary, year);
	s1 = "Groot";
	s2 = "Pshenov";
	s3 = "Denisovich";
	salary = 300;
	year = 2022;
	HeadOfDepartment head_of_department_2(s1, s2, s3, salary, year);
	CEO.AddHeadOfDepartment(head_of_department_1);
	CEO.AddHeadOfDepartment(head_of_department_2);
	EXPECT_EQ(CEO.CalculateNumberOfSubordinates(), 2);
	try {
		CEO.SetIncome$(-20000);
		FAIL() << "	Negative salary!";
	}
	catch (std::invalid_argument& err) {
		EXPECT_EQ(err.what(), std::string("Negative salary!"));
	}
}

TEST(TestHuman, Test4) {
	std::string s1 = "Ivan";
	std::string s2 = "Ivanov";
	std::string s3 = "Ivanovich";
	Human Ivan(s1, s2, s3);
	Ivan.SetEducationLevel("higher");
	EXPECT_EQ(Ivan.GetEducationLevel(), "higher");
	Ivan.SetWorkingExperience(3);
	EXPECT_EQ(Ivan.GetWorkingExperience(), 3);
	Ivan.SetDesiredPosition("developer");
	EXPECT_EQ(Ivan.GetDesiredPosition(), "developer");
}

TEST(TestHeadOfDepartment, Test5) {
	std::string s1 = "Ivan";
	std::string s2 = "Ivanov";
	std::string s3 = "Ivanovich";
	double salary = 550;
	int year = 2020;
	HeadOfDepartment head_of_department(s1, s2, s3, salary, year);
	s1 = "Maksim";
	s2 = "Maksimov";
	s3 = "Maksimovich";
	salary = 300;
	year = 2022;
	HeadOfUnit head_of_unit_1(s1, s2, s3, salary, year);
	s1 = "Groot";
	s2 = "Pshenov";
	s3 = "Denisovich";
	HeadOfUnit head_of_unit_2(s1, s2, s3, salary, year);
	head_of_department.AddHeadOfUnit(head_of_unit_1);
	head_of_department.AddHeadOfUnit(head_of_unit_2);
	EXPECT_EQ(head_of_department.CalculateNumberOfSubordinates(), 2);
}

TEST(TestHeadOfUnit, Test6) {
	std::string s1 = "Ivan";
	std::string s2 = "Pshenov";
	std::string s3 = "Denisovich";
	double salary = 300;
	int year = 2022;
	TeamLeader team_leader(s1, s2, s3, salary, year);
	s1 = "Maksim";
	s2 = "Maksimov";
	s3 = "Maksimovich";
	salary = 300;
	year = 2022;
	HeadOfUnit head_of_unit(s1, s2, s3, salary, year);
	head_of_unit.AddTeamLeader(team_leader);
	EXPECT_EQ(head_of_unit.CalculateNumberOfSubordinates(), 1);
}

TEST(TestTeamLeader, Test7) {
	std::string s1 = "Ivan";
	std::string s2 = "Pshenov";
	std::string s3 = "Denisovich";
	double salary = 300;
	int year = 2022;
	TeamLeader team_leader(s1, s2, s3, salary, year);
	s1 = "Zhenya";
	s2 = "Maksimov";
	s3 = "Maksimovich";
	salary = 200;
	year = 2022;
	Developer Zhenya(s1, s2, s3, salary, year);
	team_leader.AddDeveloper(Zhenya);
	EXPECT_EQ(team_leader.CalculateNumberOfSubordinates(), 1);
}

TEST(TestDeveloper, Test8) {
	std::string s1 = "Ivan";
	std::string s2 = "Pshenov";
	std::string s3 = "Denisovich";
	double salary = 300;
	int year = 2022;
	Developer Zhenya(s1, s2, s3, salary, year);
	Zhenya.SetPosition("sound");
	Zhenya.ChangePosition("graphic");
	EXPECT_EQ(Zhenya.GetPosition(), "graphic");
	EXPECT_EQ(Zhenya.CalculateYearsInCompany(), 1);
	s1 = "D&H";
    s2 = "Greece";
	Company company(s1, s2, 2003);
	company.AddDeveloper(Zhenya);
}

TEST(TestCreditCard, Test9) {
	std::string s1 = "priorbank";
	std::string s2 = "2217-8456-2345-3243";
	CreditCard card(s1, s2);
	EXPECT_EQ(card.GetMoney(), 0);
	card.UpMoney(200);
	EXPECT_EQ(card.GetMoney(), 200);
	s1 = "belinvest";
	s2 = "2383-8993-2510-5201";
	CreditCard card_2(s1, s2);
	card.MoneyTransfer(card_2, 100);
	EXPECT_EQ(card.GetMoney(), 100);
	EXPECT_EQ(card_2.GetMoney(), 100);
	s1 = "Zhenya";
	s2 = "Maksimov";
	std::string s3 = "Denisovich";
	double salary = 300;
	int year = 2022;
	Developer Zhenya(s1, s2, s3, salary, year);
	Zhenya.AddCreditCard(card);
}

TEST(TestGameForPC, Test10) {
	std::string s1 = "fortnite";
	std::string s2 = "shooter";
	std::string s3 = "online";
	std::string s4 = "3D";
	std::string s5 = "3rd person";
	GameForPC game_for_PC(s1, s2, s3, s4, s5);
	s1 = "ryzen 5 2600";
	s2 = "rtx 2050";
	int RAM = 16;
	double free_space = 40;
	PC computer(s1, RAM, s2, free_space);
	game_for_PC.AddRequiredPC(computer);
	game_for_PC.SetYearOfDevelopment(2008);
	EXPECT_EQ(game_for_PC.CalculateYearsOfDevelopment(), 15);
	game_for_PC.SetMemory(50);
	EXPECT_FALSE(game_for_PC.EnoughCapacity());
	s1 = "D&H";
	s2 = "Greece";
	Company company(s1, s2, 2003);
	company.AddGameForPC(game_for_PC);
	s1 = "Zhenya";
	s2 = "Maksimov";
	s3 = "Maksimovich";
	double salary = 200;
	int year = 2022;
	Developer Zhenya(s1, s2, s3, salary, year);
	Zhenya.AddGameForPC(game_for_PC);
	EXPECT_EQ(computer.GetProcessor(), "ryzen 5 2600");
	EXPECT_EQ(computer.GetFreeMemory(), 40);
	EXPECT_EQ(computer.GetGraphicsCard(), "rtx 2050");
}

TEST(TestGameForPC, Test11) {
	std::string s1 = "fortnite";
	std::string s2 = "shooter";
	std::string s3 = "online";
	std::string s4 = "3D";
	std::string s5 = "3rd person";
	GameForConsole game_for_console(s1, s2, s3, s4, s5);
	game_for_console.SetRequiredConsole("playstation5");
	EXPECT_EQ(game_for_console.GetRequiredConsole(), "playstation5");
	s1 = "D&H";
	s2 = "Greece";
	Company company(s1, s2, 2003);
	company.AddGameForConsole(game_for_console);
	s1 = "Zhenya";
	s2 = "Maksimov";
	s3 = "Maksimovich";
	double salary = 200;
	int year = 2022;
	Developer Zhenya(s1, s2, s3, salary, year);
	Zhenya.AddGameForConsole(game_for_console);
}


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}