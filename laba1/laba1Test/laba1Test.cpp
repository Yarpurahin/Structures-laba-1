#define CATCH_CONFIG_MAIN
#include "C:\Users\Пользователь\OneDrive\Desktop\laba1\laba1Test\catch2\catch.hpp"
#include "C:\Users\Пользователь\OneDrive\Desktop\laba1\laba1.h"



TEST_CASE("ArrNoRepeat")
	{
		char example[100] = "qwe--rty";
		char shouldbe[100] = "qwe--rty*";
		arrProcess(example);
		bool ok = true;
		for (int i = 0; i < strlen(shouldbe) - 1; i++)
		{
			if (example[i] != shouldbe[i])
			{
				ok = false;
				break;
			}
		}
		REQUIRE(ok == true);
	}

TEST_CASE("ArrWithRepeat")
{
	char example[] = "abcaaabc";
	char shouldbe[] = "bcbc";
	arrProcess(example);
	bool ok = true;
	for (int i = 0; i < strlen(shouldbe) - 1; i++)
	{
		if (example[i] != shouldbe[i])
		{
			ok = false;
			break;
		}
	}
	REQUIRE(ok == true);
}

TEST_CASE("NoRepeatString")
{
	char example[100] = "qwe--rty";
	char shouldbe[100] = "qwe--rty*";
	strProcess(example);
	bool ok = true;
	for (int i = 0; i < strlen(shouldbe) - 1; i++)
	{
		if (example[i] != shouldbe[i])
		{
			ok = false;
			break;
		}
	}
	REQUIRE(ok == true);
}

TEST_CASE("StringWithRepeat")
{
	char example[] = "abcaaabc";
	char shouldbe[] = "bcbc";
	strProcess(example);
	bool ok = true;
	for (int i = 0; i < strlen(shouldbe) - 1; i++)
	{
		if (example[i] != shouldbe[i])
		{
			ok = false;
			break;
		}
	}
	REQUIRE(ok == true);
}
