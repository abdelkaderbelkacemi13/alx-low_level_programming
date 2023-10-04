#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 *  array of integers.
 *  @width: width size int
 *  @height: height size int
 *  Return: Null on failure and new pointer is success
 */
int **alloc_grid(int width, int height)
{
	int **gr;
	int a, b;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}
	gr = malloc(height * sizeof(*gr));
	if (gr == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < height)
	{
		gr[a] = malloc(width * sizeof(**gr));
		if (gr[a] == NULL)
		{
			for (a--; a >= 0; a--)
			{
				free(gr[a]);
			}
			free(gr);
			return (NULL);
		}
		b = 0;
		while (b < width)
		{
			gr[a][b] = 0;
			b++;
		}
		a++;
	}
	return (gr);
}
