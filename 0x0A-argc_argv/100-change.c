#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed to make change
 *
 * Description: This function calculates the minimum number of coins needed
 * to represent a given amount in cents, using the available denominations
 * of coins (25, 10, 5, 2, and 1 cent) with an unlimited supply
 * of each denomination.
 *
 * @cents: The amount in cents for which to calculate the minimum coins
 *
 * Return: The minimum number of coins required
 */
int minCoins(int cents)
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int totalCoins = 0;

	for (i = 0; i < numCoins; i++)
	{
		totalCoins += cents / coins[i];
		cents = cents % coins[i];
	}

	return (totalCoins);
}

/**
 * main - Entry point of the program
 *
 * Description: This program takes a single command-line argument representing
 * an amount in cents and calculates the minimum number of
 * coins needed to make change.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to strings representing the arguments
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int cents, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0 || (cents == 0 && *(argv[1]) != '0'))
	{
		printf("0\n");
	}
	else
	{
		result = minCoins(cents);

		printf("%d\n", result);
	}

	return (0);
}
