#include "main.h"

/**
 *helper_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */

int helper_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a num
 *
 * @n: given number to calculate square root from
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper_sqrt_recursion(n, 0));
}
