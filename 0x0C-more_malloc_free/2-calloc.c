#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointer
 * @b: const
 * @n: max bytes to use
 *
 * Return: *s
*/

{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}

/**
 * *_calloc - allocate mamory for an array, using malloc
 *
 * @nmemb: array length
 * @size:size
 *
 * Return: pointer
*/
