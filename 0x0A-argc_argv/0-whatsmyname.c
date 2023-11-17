#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argv: pointers array to the prog
 * @argc: num of arguments in program
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

