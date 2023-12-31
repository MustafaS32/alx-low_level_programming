#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: secont int array
 * @size: array size
*/

void print_diagsums(int *a, int size)
{
	int i, x1 = 0, x2 = 0;

	for (i = 0; i < size; i++)
	{
		x1 += a[i];
		x2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", x1);
	printf("%d\n", x2);
}
