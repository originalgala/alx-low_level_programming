#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  adds positive numbers.
 *
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;
	char *id;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		num = strtol(argv[i], &id, 10);
		if (*id)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + num;
		}
	}
		printf("%d\n", sum);
		return (0);
}
