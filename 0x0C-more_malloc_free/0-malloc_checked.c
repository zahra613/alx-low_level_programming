#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *@b : unsigned int
 * Return: check.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *check;

	check = malloc(b);
	if (check == NULL)
	{
		 exit(98);
	}
	return (check);
}
