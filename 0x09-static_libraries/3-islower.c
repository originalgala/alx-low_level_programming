#include "main.h"

/**
 * _islower - Entry point, check for lowercase
 *
 * Description: a function that returns 1 if c is lowercase, 0 if otherwise
 *@c: is in ASCII code
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
