#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int y;

	y = 0;

	while (*(src + y) != '\0')
	{
		*(dest + y) = *(src + y);
		y++;
	}

	*(dest + y) = '\0';
	return (dest);

}
