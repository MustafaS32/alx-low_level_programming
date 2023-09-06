#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives
 * @argv: pointers array to the prog
 * @argc: num of arguments in program
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argc[x]);
		x++;
	}
	return (0);
}
