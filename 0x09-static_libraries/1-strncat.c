#include "main.h"

/**
 * *_strncat -  a function that concatenates two strings
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: num from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
