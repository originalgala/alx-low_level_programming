#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name.
 *
 * @argc: argc parameter
 * @argv: array of the command listed
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
