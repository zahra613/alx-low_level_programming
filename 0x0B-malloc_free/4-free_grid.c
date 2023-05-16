#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  function that frees a 2 dimensional grid
 *@height : it's the height of grid
 *@grid : it's an 2D dimentional array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
