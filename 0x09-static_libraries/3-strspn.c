#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @accept : constant byte
 * @s : first byte
 * Return: pointer to the resulting string dests
 */
unsigned int _strspn(char *s, char *accept)

{
char *paccept;
unsigned int z = 0;
while (*s != '\0')
{
paccept = accept;
while (*paccept != '\0' && *paccept != *s)
{
paccept++;
}
if (*paccept == '\0')
{
return (z);
}
z++;
s++;
}
return (z);
}
