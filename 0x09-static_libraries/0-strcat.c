#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: integer value
 * @src: integer value
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int indd = 0;
	int inds = 0;

	while (dest[indd] != '\0')
	{
		indd++;
	}

	while (src[inds] != '\0')
	{
		dest[indd] = src[inds];
		indd++;
		inds++;
	}
	dest[indd] = '\0';
	return (dest);

}
