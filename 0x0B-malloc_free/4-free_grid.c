#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: the memorie's grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	a = 0;
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}

