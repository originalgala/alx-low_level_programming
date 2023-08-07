#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size and assigns char c
 *
 * @size: size of array
 * @c: character assigned
 *
 * Return: Null if fail, pointer to array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[size] = '\0';

	return (str);
}
