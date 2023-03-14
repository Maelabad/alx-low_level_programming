#include "main.h"

/**
 * argstostr - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @ac: Numbers of arguments
 * @av: arguments
 * Return: a concatenate string of all the arguments
 */

char *argstostr(int ac, char **av)
{
	char *CC;
	int i = 0, j = 0, n = 0;

	if (ac != 0 && av != NULL)
	{
		CC = (char *)malloc(sizeof(char) * ac);

		while (i < ac)
		{
			while (av[i][j] != '\0')
			{
				*(CC + n) = av[i][j];
				j++;
				n++;
			}
			*(CC + n) = '\n';
			n++;
			j = 0;
			i++;
		}
		*(CC + n) = '\0';
		return (CC);
	}
	return (NULL);

}
