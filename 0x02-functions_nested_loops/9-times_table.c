#include "main.h"

/**
 * main - check the code
 *written by black
 * Return: Always 0.
 */
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
putchar('\n');
}
}
