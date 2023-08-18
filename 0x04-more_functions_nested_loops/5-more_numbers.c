#include "main.h"

/**
 * more_numbers - from 0 to 14
 *
 * Return: always 0 (success)
*/

void more_numbers(void)
{
	int num, row, sum;
		for (row = 1; row <= 10; row++)
		{
			for (sum = 0; sum <= 14; sum++)
			{
				num = sum;
				if (sum > 9)
				{
				_putchar(1 + 48);
				num = sum % 10;
				}
				_putchar(num + 48);
			}
		_putchar('\n');
		}
}
