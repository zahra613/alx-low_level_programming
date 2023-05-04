#include "main.h"
/**
 * _strcat - concat 2 string
 * @dest:string
 * @src:string
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
	int z;
	int l;

	z = 0;
	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
		while (src[z] != '\0')
		{
			dest[l + z] = src[z];
			z++;
		}
		dest[l + z] = '\0';
	return (dest);
}
