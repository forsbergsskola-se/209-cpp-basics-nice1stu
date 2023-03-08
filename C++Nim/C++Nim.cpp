// C++Nim.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cstdio>
#include <iostream>
#include <string>
#include <random>

using namespace std;

int startMatches = 24;
int remainingMatches = startMatches;

int main()
{
	printf("Staring Matches = %d \n", remainingMatches);

	for (size_t i = 0; i < remainingMatches; i++)
	{
		printf("|");
	}
	printf("%d", remainingMatches);

	while (remainingMatches > 1)
	{
		//Player draws
		printf("\n");
		printf("Choose between 1 - 3 matches to draw \n");
		int num2Draw;
		cin >> num2Draw;

		if (num2Draw < 1)
			num2Draw = 1;
		else
			if (num2Draw > 3)
				num2Draw = 3;

		cout << "You entered: " << num2Draw << endl;

		remainingMatches = remainingMatches - num2Draw;

		for (size_t i = 0; i < remainingMatches; i++)
		{
			printf("|");
		}
		printf("%d \n", remainingMatches);

		//Win condition
		if (remainingMatches == 1)
		{
			std::cout << "Player Wins \n";
			return 0;
		}

		//PC draws
		std::srand(std::time(nullptr));
		int pcDraws = std::rand() % 3 + 1;
		std::cout << "Computer draws: " << pcDraws << "\n";
		if (remainingMatches == 4)
			pcDraws = 3;
		else if (remainingMatches == 3)
			pcDraws = 2;
		else if (remainingMatches == 2)
			pcDraws = 1;

		remainingMatches = remainingMatches - pcDraws;

		for (size_t i = 0; i < remainingMatches; i++)
		{
			printf("|");
		}
		printf("%d \n", remainingMatches);

		//Win condition
		if (remainingMatches == 1)
		{
			std::cout << "PC Wins \n";
			return 0;
		}
	}
	return 0;
}

