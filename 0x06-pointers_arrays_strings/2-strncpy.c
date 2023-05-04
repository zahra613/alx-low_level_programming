#include "main.h"

/**
 *   _strncpy - Entry point
 * @dest : char
 * @src :char
 * @n : int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)

{

int z;
int l;
l = 0;
while (src[l] != '\0')
{
l++;
}
for (z = 0; z <= l && z < n; z++)
{
dest[z] = src[z];
}
return (dest);

}
