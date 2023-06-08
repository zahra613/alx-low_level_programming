#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *@n: input number
 *@index: position of the bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = (*n & (~(1UL << index)));
	return (1);
}
