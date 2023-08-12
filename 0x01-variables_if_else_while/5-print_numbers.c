#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: single digits nums from 0 to 10
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
