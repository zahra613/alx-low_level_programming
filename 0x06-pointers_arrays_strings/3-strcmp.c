#include "main.h"
/**
 * _strcmp - compare 2 string
 * @s1:string
 * @s2:strmp
 * Return:int
 */
int _strcmp(char *s1, char *s2)

{
int z;
z = 0;
while (s1[z] != '\0' && s2[z] != '\0')
{
z++;
if (s1[z] != s2[z])
{
return (s1[z] - s2[z]);
}
}
return (0);

}
