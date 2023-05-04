#include "main.h"
/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *str)

{
	int	z;
	int	l;

	char	*a = "aAeEoOtTlL";
	char	*b = "4433007711";

	z = 0;
	for (z = 0 ; str[z] != 0 ; z++)
	{
	l = 0;
		while (l < 10)
		{
			if (str[z] == a[l] || str[z] == a[l] - 32)
			{
				str[z] = b[l];
			}
			l++;
		}
	}
	return (str);
}
