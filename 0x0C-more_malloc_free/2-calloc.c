#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array
 *@nmemb : elements of array
 *@size :the size of memory to allocate
 * Return: -
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memb;
	unsigned int i;

	memb = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (memb == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i <= (nmemb * size) ; i++)
	{
		*(memb + i) = 0;
	}
	return (memb);
}
