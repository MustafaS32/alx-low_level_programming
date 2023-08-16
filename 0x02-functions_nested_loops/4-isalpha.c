#include "main.h"

/**
 * _isalpha - checks if character is lower or uppercase
 * @c: takes input from other functions
 *
 * Retuern: 1 if c is lower or uppercase alpha
 * otherwise return is 0
*/

int _isalpha(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
