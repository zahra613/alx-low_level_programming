#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 * Return: dest
 */
char	*_strncat(char *dest, char *src, int n)
{
int l;
int z;
l = 0;
while (dest[l] != 0)
{
l++;
}
for (z = 0; src[z] != '\0' && z < n; z++)
{
dest[l + z] = src[z];
}
dest[l + z] = '\0';
return (dest);
}
