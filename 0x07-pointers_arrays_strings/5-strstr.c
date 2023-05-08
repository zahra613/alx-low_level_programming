#include "main.h"
#include <stddef.h>

/**
 *  _strstr -  function that locates a substring.
 *@haystack : first byte memory
 *@needle : canstant byte.
 * Return: return haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
int z;
int l;
z = 0;
l = 0;
while (haystack[z] != '\0')
{
while (needle[l] != '\0')
{
if (haystack[z + l] != needle[l])
{
break;
}
l++;
}
if (needle[l] == '\0')
{
return (haystack + z);
}
z++;
}
return (NULL);
}
