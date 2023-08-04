#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * Description: it will use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: interger variable
 * @src: interger variable
 * @n: inter length of string src
 *
 * Return: &dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int indd = 0;
	int inds = 0;

	while (dest[indd] != '\0')
	{
		indd++;
	}

	while (inds < n && src[inds] != '\0')
	{
		dest[indd] = src[inds];
		indd++;
		inds++;
	}
	return (dest);
}
