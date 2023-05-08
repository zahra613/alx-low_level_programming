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

while (*haystack != '\0')
{
if (*haystack == *needle)
{
return (haystack);
}
haystack++;
}
if (*needle == '\0')
{
return (haystack);
}
return (NULL);
}
