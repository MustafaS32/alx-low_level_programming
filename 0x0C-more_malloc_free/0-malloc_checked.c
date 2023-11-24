#include "main.h"

/**
 * *malloc_checked - allocates mamory using malloc and exit if failed
 *
 * @b: int
 *
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *j = malloc(b);

	if (j == 0)
		exit(98);

	return (j);
}
