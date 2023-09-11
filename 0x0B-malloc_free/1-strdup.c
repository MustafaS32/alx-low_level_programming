#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory,which contains a copy of the string given
 * @str: the string
 * Return: if str = NULL return is NULL, otherwise c
*/

char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	c = malloc(size * sizeof(*str) + 1);

	if (c == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < size; i++)
			c[x] = str[x];
	}
	return (c);
}
