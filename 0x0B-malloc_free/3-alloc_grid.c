#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional arrays
 *@width :it's an integer that indicate the number of columns
 *@height :it's an integer that indicate the number of rows
 * Return: p1
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;
	int *data;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	data = malloc((width * height) * sizeof(int));
	if (data == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = data + (i * width);
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL) {
            for ( j = 0; j <= i; j++) {
                free(grid[j]);
            }
            free(grid);
            free(data);
            return NULL;
        }
	}
	return(grid);
	 }

