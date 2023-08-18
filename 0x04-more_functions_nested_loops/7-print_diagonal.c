#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: input
*/

void print_diagonal(int n)
{
	int sl, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (sl = 1; sl <= n; sl++)
		{
			for (space = 1; space <= sl; space++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}

}
