#include "main.h"

/**
* print_chessboard - function that prints the chessboard.
* @a: A char *
* Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] >= 'a' && a[i][j] <= 'z')
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}

