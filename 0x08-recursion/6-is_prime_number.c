#include "main.h"

/**
 * actualPrime_calc - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actualPrime_calc(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (actualPrime_calc(n, i - 1));
}

/**
 * is_prime_number -  determines if a number is a prime number
 *
 * @n: input number
 *
 * Return: Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actualPrime_calc(n, n - 1));
}
