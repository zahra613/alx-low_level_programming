#include "main.h"
#include <string.h>
/**
 * rev_string  - Entry point
 * @s : input string
 * wtitten by black
 * Return: Always 0.
 */
void rev_string(char *s)

	{
int z;
int len;
int l;
len = strlen(s);
z = 0;
while (s[z] != '\0')
{
z++;
}
for (l = 0; l < z; l++)
{
z--;
len = s[z];
s[z] = s[l];
s[l] = len;
}

}
