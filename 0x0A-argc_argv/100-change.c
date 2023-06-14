#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * countmoney - calculate the minimum number of coins .
 * @amount: the amount of money for which to calculate the coins.
 *
 *
 * Return: the minimum number of coins required.
 */

int countmoney(int amount)
{
	if (amount < 0)
		return (0);

	(void)amount;

	int money  = 0;

	money += amount / 25;
	amount %= 25;

	money += amount / 10;
	amount %= 10;

	money += amount / 5;
	amount %= 5;

	money += amount / 2;
	amount %= 2;

	money += amount;

return (money);

}

/**
 * main - program entry point.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}

	int mincents = countmoney(coin);

	printf("%d\n", mincents);

	return (0);
}
