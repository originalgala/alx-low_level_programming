#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: integer/input value
 * @src: interger/ input value
 * @n: size value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int inds;

	inds = 0;

	while (inds < n && src[inds] != '\0')
	{
		dest[inds] = src[inds];
		inds++;
	}

	while (inds < n)
	{
		dest[inds] = '\0';
		inds++;
	}
	return (dest);
}
