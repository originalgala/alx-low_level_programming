#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success 1 if error
 */

int main(int argc, char *argv[])
{
	int num;
	int i;
	int reslt;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	num = atoi(argv[1]);

	reslt = 0;

	if (num < 0)
	{
		printf("0\n");

		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			reslt++;
			num -= coins[i];
		}
	}

	printf("%d\n", reslt);

	return (0);
}
