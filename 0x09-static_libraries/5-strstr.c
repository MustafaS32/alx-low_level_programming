#include "main.h"

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: where to search
 * @needle: what we are searching for
 *
 * Return: Always 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *c = haystack;
	char *k = needle;

		while (*c == *k && *k != '\0')
		{
			c++;
			k++;
		}

		if (*k == '\0')
		return (haystack);
	}
	return (0);
}
