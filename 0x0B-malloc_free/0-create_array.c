#include "main.h"
#include <stdlib.h>
/**
 * create_array - check the code for ALX School students.
 *@size : size of array T
 *@c : it's ana character
 * Return: T
 */
char *create_array(unsigned int size, char c)
{
	char *T;
	unsigned int i;

	T = malloc(size * sizeof(char));

	if (T == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (size == 0)
	{
		return (NULL);
	}
		*(T + i) = c;
		}
	return (T);
	free(T);
}
