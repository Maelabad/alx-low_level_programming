#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: first string
 * @height: second string
 * Return: a pointer to a 2 dimentionnal array
 */

int **alloc_grid(int width, int height)
{
	if (height != 0 && width != 0)
	{
		int i, j;

		int **array = (int **)malloc(sizeof(int) * height);

		if (array == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(sizeof(int) * width);

			if (array[i] == NULL)
			{
				for (i--; i >= 0; i--)
					free(array[i]);
				free(array);
				return (NULL);
			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
		return (array);

	}
	else
		return (NULL);
}
