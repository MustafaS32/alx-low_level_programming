#include "main.h"

/**
 * _isalpha - checks if character is lower or uppercase
 *  @c: takes input from other functions
 *
 * Return: 1 if c is true else 0
*/

int _isalpha(int c)

{
	if (c >= 98 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
