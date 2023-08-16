#include "main.h"

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int num, mult, sum;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
			for (mult = 1; mult <= 9; mult++)
			{
			_putchar(',');
			_putchar(' ');

			sum = num * mult;

		if (sum <= 9)
			_putchar(' ');

		else
		_putchar((sum / 10) + 48);

	_putchar((sum % 10) + 48);
			}
	_putchar('\n');
	}
}
