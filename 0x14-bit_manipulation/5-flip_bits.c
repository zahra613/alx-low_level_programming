#include "main.h"
#include <stdio.h>
/**
 * flip_bits - number of bits you would need to flip to get from num to onother
 *@n : input number
 *@m: input number
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int counter = 0;

	while (difference > 0)
	{
		counter += difference & 1;
		difference >>= 1;
	}

	return (counter);
}
