#include "main.h"

/**
 * _isdigit - checks for a digit 9 through 9
 *
 * @c: in the integer
 *
 * Return: 1 if c is as digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
