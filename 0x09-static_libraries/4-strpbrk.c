#include "main.h"

/**
 * char *_strpbrk - searches a string for any of a set of bytes.
 *
 * Description: locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 *
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
