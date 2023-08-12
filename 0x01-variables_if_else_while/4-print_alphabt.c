#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet except q and e
 *
 * Return: ALways 0 (success)
*/

int main(void)
{
char f = 'a';

	while (f <= 'z')
	{
	if (f == 'q' || f == 'e')
	f++;
	putchar(f);
	f++;
	}

	putchar('\n');
	return (0);
}
