#include "main.h"

/**
 * _isalpha - Entry point_ check for alphabet characters
 *
 * Description: return 1 if c is a lower or uppercase letter
 *
 *@c: the letter is in ASCII code
 *
 * Return: 1 or letters. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
