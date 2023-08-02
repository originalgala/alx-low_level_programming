#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: value
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_reve_recursion(s + 1);
	_puthcar(*s);
}
