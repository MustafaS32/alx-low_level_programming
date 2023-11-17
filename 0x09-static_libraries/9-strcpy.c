#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 *
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to 'dest'
*/

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');

	return (dest);
}
