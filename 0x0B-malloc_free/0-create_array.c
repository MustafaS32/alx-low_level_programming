#include "main.h"

/**
 * *create_array -  function that creates an array of chars and
 * initializes it with a specific char
 *
 * @size: array size
 * @c: initializing char
 *
 * Return: array pointer or null
*/

char *create_array(unsigned int size, char c)
{
	char *i = (char *)malloc(size);

	if (size == 0 || i == NULL)
		return (0);

	while (size--)
		i[size] = c;

	return (i);
}
