#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(argc,char __attribute__((__unused__)) char *argv[])
{
	printf("%s\n", argc - 1);
	return (0);
}
