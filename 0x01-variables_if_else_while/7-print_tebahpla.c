#include<stdio.h>

/**
 * main - Entry point
 *
 * description: alphabet in reverse
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char end = 'z';

	while (end >= 'a')
	{
	putchar(end);
	end--;
	}
		putchar('\n');
		return (0);
}
