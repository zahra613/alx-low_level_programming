#include "main.h"
#include <stddef.h>
/**
 *  _strpbrk - function that searches a string for any of a set of bytes
 * @accept : constant byte
 * @s : first byte in memory
 * Return: return s if s == paccept other return null
 */
char *_strpbrk(char *s, char *accept)
{
char *paccept;
while (*s != '\0')
{
paccept = accept;
while (*paccept != '\0')
{
if (*s == *paccept)
{
return (s);
}
paccept++;
}
s++;
}
return (NULL);
}
