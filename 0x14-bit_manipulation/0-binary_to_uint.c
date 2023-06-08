#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: result or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0')
		{
			converted = converted * 2;
		}
		else if (*b == '1')
		{
			converted = converted * 2 + 1;
		}
		else
		{
			return (0);
		}

		b++;
	}

	return (converted);
}
