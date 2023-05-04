#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */

char	*leet(char *str)
{
	int z;
	z = 0;
	int l;
	l = 0;
	char	*a = "aAeEoOtTlL";
	char	*b = "4433007711";

	while (str[z] != '\0')
		{
	       while ( l < 10)
		       {
	       if (str[z] == a[l])
			{
				str[z] = b[l];
			}
	       l++;
	      }
	       
		   z++;
	       }
	return (str);
	 }
