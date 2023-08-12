#include<stdio.h>

/**
 * main - Entry point
 *
 * Descrition: all base 10 from 0 with putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int z = 0;

	while (z <= 9)
	{
		putchar(z + '0');
		z++;
	}
	putchar('\n');
	return (0);
}
