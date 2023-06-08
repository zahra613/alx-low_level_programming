#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness.
 * Return:0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *byte = (char *)&num;

	return ((int)(*byte));
}
