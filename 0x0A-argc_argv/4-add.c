#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argv: pointers array to the prog
 * @argc: num of arguments in program
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int s = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
			if (*ch < '0' || *ch > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
