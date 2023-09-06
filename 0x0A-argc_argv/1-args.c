#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it
 * @argv: array pointers to arguments
 * @argc: num of arguments
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)*argv[];
	printf("%d\n", argc - 1);
	return (0);
}
