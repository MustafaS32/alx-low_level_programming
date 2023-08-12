#include<stdio.h>

/**
 * main - Entry point
 *
 * description: alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}

	putchar('\n');
	return (0);


}
