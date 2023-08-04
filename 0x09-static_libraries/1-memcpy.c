#include "main.h"

/**
 * char *_memcpy - function that copies memory area
 *
 * Description: copies n bytes from memory area src to memory area dest
 *
 * @src: source pointer
 * @dest: destination pointer
 * @n: number of bytes to be copied
 *
 * Return: *ptr dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);

}
