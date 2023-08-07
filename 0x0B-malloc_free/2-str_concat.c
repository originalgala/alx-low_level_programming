#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conctptr;
	int i, con_i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = con_i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[con_i] != '\0')
		con_i++;
	conctptr = malloc(sizeof(char) * (i + con_i + 1));

	if (conctptr == NULL)
		return (NULL);
	i = con_i = 0;
	while (s1[i] != '\0')
	{
		conctptr[i] = s1[i];
		i++;
	}

	while (s2[con_i] != '\0')
	{
		conctptr[i] = s2[con_i];
		i++, con_i++;
	}
	conctptr[i] = '\0';
	return (conctptr);
}
