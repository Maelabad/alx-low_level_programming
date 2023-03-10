#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(argc, char *argv[])
{
	int i = 0;

	while (*argv)
		i++;
	printf("%s\n", i);
	return (0);
}
