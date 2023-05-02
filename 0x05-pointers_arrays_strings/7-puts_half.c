#include "main.h"
/**
* puts_half - Entry point
*@str : input string
* Return: Always 0.
*/
void puts_half(char *str)

{

int z;
z = 0;
while (str[z] != '\0')
z++;
if (z % 2 != 0)
{
z = (z + 1) / 2;
while (str[z])
{
_putchar(str[z]);
z++;
}
}
else
{
z = z / 2;
while (str[z])
{
_putchar(str[z]);
z++;
}
}
_putchar('\n');
}
