#include <stdio.h>
#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 *@n: input number
 *@index: index we want
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
