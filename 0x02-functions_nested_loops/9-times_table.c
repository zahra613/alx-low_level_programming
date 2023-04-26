#include "main.h"
/**
* times_table - Entry poin
*  descreption: 'tble of 9'
*  Return 1: "for lower case 0 for the rest".
*   written by black
* Return:  always 0 (success)
**/
void times_table(void)
{
int z;
int c;
int multi;
for (c = 0; c <= 9; c++)
{
for (z = 0; z <= 9; z++)
{
multi = z * c;
if (z == 0)
{
_putchar(multi + '0');
}
if (multi <= 9 && z != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(multi + '0');
}
else if (multi >= 9)
{
_putchar(',');
_putchar(' ');
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
}
}
_putchar('\n');
}
}
