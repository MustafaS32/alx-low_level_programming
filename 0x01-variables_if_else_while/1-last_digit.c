#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: last digit of num and its details
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	int digit;

	digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);

	return (0);
}
