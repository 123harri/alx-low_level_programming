#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of command line arguments
 * @argv: array that contain the command line argument
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int cents, totalCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

cents = atoi(argv[1]);
if (cents < 0)
{
	printf("0\n");
	return (0);
}

totalCoins = cents / 25;
cents %= 25;

totalCoins += cents / 10;
cents %= 10;

totalCoins += cents / 5;
cents %= 5;

totalCoins += cents / 2;
cents %= 2;

totalCoins += cents;

printf("%d\n", totalCoins);
return (0);
}
