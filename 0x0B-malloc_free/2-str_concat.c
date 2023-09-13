#include "main.h"

/**
 * _strlen - a function that finds length of a string
 *
 * @s: the string
 *
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: *c
*/


char *str_concat(char *s1, char *s2)
{
	int siz1, siz2, x;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	siz1 = _strlen(s1);
	siz2 = _strlen(s2);
	c = malloc((siz1 + siz2) * sizeof(char) + 1);

	if (c == 0)
		return (0);

	for (x = 0; x <= siz1 + siz2; x++)
	{
		if (x < siz1)
			c[x] = s1[x];
		else
			c[x] = s2[x - siz1];
	}
	c[x] = '\0';
	return (c);
}
