#include "main.h"
/**
 *   _strncpy - Entry point
 * @dest : char
 * @src :char
 * @n : int
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int z;
z = 0;
while (src[z] != '\0'  && z < n)
{
dest[z] = src[z];
z++;
}
while (z < n)
{
	dest[z] = '\0';
z++;
}
return (dest);

}
