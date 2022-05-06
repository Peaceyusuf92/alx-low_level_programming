#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of intergers
 * @width: width of array
 * @height: height of array
 * Return: pointer of an array of integer
 */
int **alloc_grid(int width, int height)
{
	int **gout;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	gout = malloc(height * sizeof(int *));
	if (gout == NULL)
	{
		free(gout);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		gout[x] = malloc(width * sizeof(int));
		if (gout[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(gout[x]);
			free(gout);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			gout[x][y] = 0;

	return (gout);
}
