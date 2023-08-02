#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s: value
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}

	i = _strlen_recursion(s + 1);
		i++;
		return (i);
}
