#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc == 2)
	{
		res = argv[1] * argv[2];
		printf("%d\n", res);
	}
	else
		printf("Error\n");

	return (1);
}
