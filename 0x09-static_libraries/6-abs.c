#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * Description: always return the absolute value of an interger.
 *
 * @d: is an interger
 *
 * Return: absolute value
 */

int _abs(int d)
{
	if (d >= 0)
	{
		return (d);
	}
	else
	{
		return (d * -1);
	}
}
