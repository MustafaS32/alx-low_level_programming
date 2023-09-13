#include "main.h"

int ckeck_pal(char*s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrom - chacks if string a palindrom
 *
 * @s: string to rev
 *
 * Return: 1 if it is, 0 if is not
*/

int is_palindrom(char *s)
{
	if (*s == 0)
	return (1);
	return(ckeck_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return the length of string
 *
 * @n: string to calculate the length of
 *
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * ckeck_pal - chacks the character recursively for palindrom
 *
 * @s: string to check
 * @i: i
 *
 * Return: 1 if pailndrom, 0 if not
*/

int ckeck_pal(char*s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (ckeck_pal(s, i + 1, len - 1));
}
