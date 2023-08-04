#include "main.h"

/**
 * char *_memset - fills memory with a constant byte
 *
 * Description: The _memset() fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: the starting address
 * @b: value to be filled into the elements/bytes
 * @n: number of bytes to be changed
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
