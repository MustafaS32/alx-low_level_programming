#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 *
 * @s: const pointer input
 * @c: const
 *
 * Return: s pointer
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
