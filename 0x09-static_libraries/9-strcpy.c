#include "main.h"

/**
 *  _strcpy - Entry point
 * @dest : char
 * @src :char
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)

{

int z;
int l;
l = 0;
while (src[l] != '\0')
{
l++;
}
for (z = 0; z <= l; z++)
{
dest[z] = src[z];
}
return (dest);

}
