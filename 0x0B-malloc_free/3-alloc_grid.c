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
	int **p1;
	int j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	p1 = malloc(height * sizeof(int));

	if (p1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height ; i++)
	{
		*(p1 + i) = malloc(width * sizeof(int));
		if (*(p1 + i) == NULL)
		{
			for (j = 0 ; j < i ; j++)
			{
				free(*(p1 + j));
	}
		free(p1);
		return (NULL);
		}
		}
	return (p1);
	}

