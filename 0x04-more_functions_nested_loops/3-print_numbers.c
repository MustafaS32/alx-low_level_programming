#include "main.h"

/**
 * print_numbers - from 0 to 9 using _putchar
 *
 * Return: always 0 (success)
*/

void print_numbers(void)
{
	int n = 0;

	while (n >= 0 && n <= 9)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
