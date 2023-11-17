#include "main.h"

/**
 * _isupper - checks if input is upper case
 *
 * @c: alphabet input
 *
 * Return: 1 if c uppercase otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
