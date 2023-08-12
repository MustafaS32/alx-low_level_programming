#include<stdio.h>

/**
 * main - Entry point
 *
 * description: print base 16 nums
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int d = 48;

	while (d <= 102)
	{
	putchar(d);

	if (d == 57)
		d += 39;
	d++;
	}
	putchar('\n');
	return (0);
}
