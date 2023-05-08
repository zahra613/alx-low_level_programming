#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s : pointer
 * @n : unsigned integer
 * @b : char
 * written by black
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;
	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
		}

	return (s);
	}
