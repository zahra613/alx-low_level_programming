#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers.
 *@min: the smallest integer
 *@max: the maximum integer
 * Return: ptr.
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	ptr = malloc((max - min + 1) * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min ; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
