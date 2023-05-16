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
	if (width <= 0 || height <= 0) {
        return NULL;
    }

    grid = malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;
	free(grid);
    }

    data = malloc((width * height)* sizeof(int));
    if (data == NULL) {
        free(grid);
        return NULL;
    }

    for ( i = 0; i < height; i++) {
	  
        grid[i] = data + (i * width);
    }

    return grid;
    free(grid);

}
