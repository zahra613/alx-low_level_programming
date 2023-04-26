#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
	{

int z;
int c;
int multi;
c = n;
z = n;
for (c = 0; c <= n; c++)
{
for (z = 0; z <= n; z++)
{
multi = z * c;
if(z==n)
{
if (z <=n  ||n==0)
{
    return(0);
}
{
_putchar(multi + '0');
}
if (multi <= n && z != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(multi + '0');
}
else if (multi >= n)
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
return(0);
}
